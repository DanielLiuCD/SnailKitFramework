//
//  UIView+Snail.h
//  SnailKit
//
//  Created by liu on 2020/1/7.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Snail)

- (void)snail_corner:(CGFloat)corner;
- (void)snail_border:(CGFloat)width color:(UIColor *)color;

- (void)snail_add_subviews:(NSArray<UIView *> *)views;
- (void)snail_add_layouts:(NSArray<UILayoutGuide *> *)guides;

- (void(^)(UIColor *color,CGFloat height))snail_left_line;
- (void(^)(UIColor *color,CGFloat height))snail_right_line;
- (void(^)(UIColor *color,CGFloat height))snail_top_line;
- (void(^)(UIColor *color,CGFloat height))snail_bottom_line;

- (void)snail_left_line:(BOOL)show;
- (void)snail_right_line:(BOOL)show;
- (void)snail_top_line:(BOOL)show;
- (void)snail_bottom_line:(BOOL)show;

/**
 放大缩小动画
 */
- (void)snail_scale_animate:(CGFloat)scale Duration:(NSTimeInterval)duration Block:(void(NS_NOESCAPE ^)(void))block;

/**
 旋转动画
 angle 为角度 0~360
 */
- (void)snail_roate_animate:(CGFloat)angle Duration:(NSTimeInterval)duration Block:(void(NS_NOESCAPE ^)(void))block;

/**
 永久旋转
 */
- (void)snail_forever_roate_animate:(NSTimeInterval)duration;
- (void)snail_stop_forever_roate;

@end
