//
//  UIImage+Snail.h
//  SnailKit
//
//  Created by liu on 2020/1/7.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Snail)

- (UIImage *)snail_compress_maxwidth:(CGFloat)maxWidth maxlength:(NSInteger)maxLength;

///某一点的颜色
- (UIColor *)snail_color_at_point:(CGPoint)point;

///渲染图片为其他颜色
- (UIImage *)snail_render_with_color:(UIColor *)color;

@end

