//
//  SnailMarquee.h
//  SnailMarquee
//
//  Created by liu on 2019/8/8.
//  Copyright © 2019 CrazySnail. All rights reserved.
//  跑马灯
//

#import <UIKit/UIKit.h>

@interface SnailMarqueeItem : NSObject

@property (nonatomic) CGSize size;
@property (nonatomic ,copy) NSString *cellIdentifer;

@end

@interface SnailMarqueeCell : UICollectionViewCell

///该方法一定要调用supper的，调用后会回调SnailMarquee的actionBlock
- (void)actionWithContext:(id)context;

- (void)configureWithItem:(SnailMarqueeItem *)item;

@end

typedef NS_ENUM(NSInteger ,SnailMarqueeDirection) {
    ///左滚
    SnailMarqueeDirection_Left,
    ///右滚
    SnailMarqueeDirection_Right,
    ///上滚
    SnailMarqueeDirection_Top,
    ///下滚
    SnailMarqueeDirection_Bottom,
};

@interface SnailMarquee : UIView

@property (nonatomic) NSInteger value; //每次变化的数值 默认0.2
@property (nonatomic) NSInteger scale; //多久变化一次 最大60 默认为1
@property (nonatomic) CGFloat maskValue; //模糊边缘的值 默认值0.2 范围是0 - 1
@property (nonatomic) SnailMarqueeDirection direction; //滚动方向
@property (nonatomic ,copy) void(^didSelectedBlock)(SnailMarqueeItem *item,SnailMarqueeCell *cell); //点击后的回调
@property (nonatomic ,copy) void(^actionBlock)(SnailMarqueeItem *item,SnailMarqueeCell *cell,id context); //用于cell上面事件的传递

- (void)reloadWithItems:(NSArray<SnailMarqueeItem *> *)items;

- (void)regisetrCell:(Class)cell Identifer:(NSString *)identifer;

///开启模糊边缘
- (void)openMask;

///关闭模糊边缘
- (void)closeMask;

- (void)run;

- (void)stop;

@end
