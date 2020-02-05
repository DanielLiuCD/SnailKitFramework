//
//  SnailCircleScrollerView.h
//  SnailKit
//
//  Created by liu on 2020/1/8.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SnailCircleScrollerCell : UIView

@property (nonatomic ,strong) UIImageView *imageView;

@end

@interface SnailCircleScrollerView : UIView

@property (nonatomic) NSTimeInterval timeSapceing;
@property (nonatomic) BOOL drag;
@property (nonatomic) BOOL autoScrol;
@property (nonatomic) BOOL verticality;

@property (nonatomic ,copy) NSInteger(^numberOfRowsBlock)(void);
@property (nonatomic ,copy) void(^cellConfigureBlock)(SnailCircleScrollerCell *cell,NSInteger row);
@property (nonatomic ,copy) void(^didSelectedAtRowBlock)(NSInteger row);
@property (nonatomic ,copy) void(^pageChangedBlock)(NSInteger page);

@property (nonatomic) BOOL debuge;

- (void)reload;
- (void)pause;
- (void)resume;

@end

