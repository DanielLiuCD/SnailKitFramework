
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger,SnailButtonLayout) {
    ///图像在左
    SnailButtonLayoutImageLeft,
    ///图像在右
    SnailButtonLayoutImageRight,
    ///图像在上
    SnailButtonLayoutImageTop,
    ///图像在下
    SnailButtonLayoutImageBottom,
};

typedef NS_ENUM(NSInteger,SnailButtonAlignment) {
    SnailButtonAlignmentCenter,
    SnailButtonAlignmentLeft,
    SnailButtonAlignmentRight,
    SnailButtonAlignmentTop,
    SnailButtonAlignmentBottom,
    SnailButtonAlignmentLeftTop,
    SnailButtonAlignmentLeftBottom,
    SnailButtonAlignmentRightTop,
    SnailButtonAlignmentRightBottom,
};

@interface SnailButton : UIControl

@property (nonatomic ,readonly) CGFloat spaceing;
@property (nonatomic ,readonly) CGFloat padding; //布局方向上距离边界的距离
@property (nonatomic ,readonly) SnailButtonLayout layout;
@property (nonatomic ,readonly) UILabel *titleLabel;
@property (nonatomic ,readonly) UIImageView *imageView;
@property (nonatomic) SnailButtonAlignment alignment;

- (void)setSpaceing:(CGFloat)spaceing;
- (void)setPadding:(CGFloat)padding;
- (void)setLayout:(SnailButtonLayout)layout;

- (void)setTitle:(NSString *)title State:(UIControlState)state;
- (void)setTitleColor:(UIColor *)color State:(UIControlState)state;
- (void)setImage:(UIImage *)image State:(UIControlState)state;
- (void)setBackgroundImage:(UIImage *)image State:(UIControlState)state;

@end
