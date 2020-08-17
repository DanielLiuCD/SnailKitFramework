//
//  SnailImageSelected.h
//  YingKeBao
//
//  Created by JobNewMac1 on 2018/6/21.
//  Copyright © 2018年 com.jonnew. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger ,SnailImageLyoutStyle) {
    ///水平布局
    SnailImageSelectLayout_H,
    ///垂直布局
    SnailImageSelectLayout_V,
};

typedef NS_ENUM(NSInteger ,SnailImageSelectMode) {
    ///图片显示模式
    SnailImageSelectMode_Display,
    ///图片选择模式
    SnailImageSelectMode_Selected,
};

@interface SnailImageSelectModel : NSObject

@property (nonatomic ,readonly) UIImage *image;
@property (nonatomic ,readonly) NSString *imageName;
@property (nonatomic ,readonly) NSString *imagePath;
@property (nonatomic ,readonly) NSString *imageUrl;
@property (nonatomic ,strong) id extend;

+ (instancetype)Image:(UIImage *)image Name:(NSString *)name;
+ (instancetype)Image:(UIImage *)image Name:(NSString *)name Path:(NSString *)path;
+ (instancetype)Image:(UIImage *)image Name:(NSString *)name Url:(NSString *)url;
+ (instancetype)Image:(UIImage *)image Name:(NSString *)name Path:(NSString *)path Url:(NSString *)url;

@end


@interface SnailImageSelect : UIView

@property (class ,nonatomic ,readonly) CGFloat spaceing; //图片控件之间的最小间距

@property (nonatomic ,copy) void(^heightChangeBlock)(CGFloat hegiht); //高度改变回调
@property (nonatomic ,copy) void(^configureUrlImageBlock)(UIImageView *imv ,NSString *imageUrl); //显示服务器图片
@property (nonatomic ,copy) void(^configureImageViewBlock)(UIImageView *imv); //配置imageview的圆角什么的
@property (nonatomic ,copy) void(^selectAction)(void); //点击图片选择按钮
@property (nonatomic ,copy) void(^clickAction)(NSInteger index ,SnailImageSelectModel *imageModel); //点中了某一个图片
@property (nonatomic ,copy) void(^deleteAction)(NSInteger index ,SnailImageSelectModel *imageModel); //点击了某一个图片上的删除

@property (nonatomic ,readonly) SnailImageSelectMode mode;
@property (nonatomic ,readonly) SnailImageLyoutStyle style;

///初始化为选择模式
+ (instancetype)Style:(SnailImageLyoutStyle)style MaxNum:(NSInteger)maxNum ItemSize:(CGSize)itemSize Icon:(UIImage *)icon;

///初始化为显示模式
+ (instancetype)Style:(SnailImageLyoutStyle)style ItemSize:(CGSize)itemSize;

///模式切换 可在显示模式和选择模式之间切换
- (void)changeMode:(SnailImageSelectMode)mode;

///布局方向切换
- (void)changeStyle:(SnailImageLyoutStyle)style;

///修改选择图片时的选择按钮的图片
- (void)changeIcon:(UIImage *)icon;

///修改删除按钮的图片
- (void)changeDeleteImageIcon:(UIImage *)image;
///修改删除按钮的大小
- (void)changeDeleteImageSize:(CGSize)size;
///修改删除按钮的偏移距离 相对于右上角
- (void)changeDeleteImageOffset:(CGPoint)offset;

///关闭长按功能
- (void)disableLongTouchAction;
///激活长按功能
- (void)enableLongTouchAction;

///关闭拖动功能
- (void)disableDragAction;
///激活拖动功能
- (void)enableDragAction;

///新增图片到末尾
- (void)appendImages:(NSArray<SnailImageSelectModel *> *)images;
///新增图片到末尾
- (void)appendImages:(NSArray<SnailImageSelectModel *> *)images Animale:(BOOL)animale;

///替换某一个图片
- (void)replaceAtIndex:(NSInteger)index Model:(SnailImageSelectModel *)model;
///替换某一个图片
- (void)replaceAtIndex:(NSInteger)index Model:(SnailImageSelectModel *)model Animale:(BOOL)animale;

///删除某一个图片
- (void)deleteAtIndex:(NSInteger)index;
///删除某一个图片
- (void)deleteAtIndex:(NSInteger)index Animale:(BOOL)animale;

///删除多个图片
- (void)deleteWithIndexs:(NSIndexSet *)indexSet;
///删除多个图片
- (void)deleteWithIndexs:(NSIndexSet *)indexSet Animale:(BOOL)animale;

- (NSArray<SnailImageSelectModel *> *)takeSelectedImages;

@end
