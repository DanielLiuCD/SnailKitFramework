//
//  NSObject+SnailBadge.h
//  SnailKit
//
//  Created by liu on 2020/1/14.
//  Copyright © 2020 CrazySnail. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "SnailBadge.h"

typedef NS_ENUM(NSInteger,SnailBadgeShape) {
    ///红点
    SnailBadgeShapePoint,
    ///红色气泡
    SnailBadgeShapeCircle,
};

@protocol SnailBadgeViewProtocol <NSObject>

- (void)snail_badge_show;
- (void)snail_badge_hidden;
- (void)snail_badge_boom;
- (void)snail_badge_drag:(BOOL)drag;
- (void)snail_badge_boom_block:(void(^)(void))block;
- (void)snail_badge_string:(NSString *)str;
- (void)snail_badge_font:(UIFont *)font;
- (void)snail_badge_shape:(SnailBadgeShape)shape;
///距离右上角的偏移量
- (void)snail_badge_offset:(CGPoint)point;
///强制刷新气泡
- (void)snail_badge_refesh;

@end

@protocol SnailBadgeViewActionProtocol <NSObject>

- (void)snail_badge_subscribe_number:(NSString *)path;
- (void)snail_badge_subscribe_string:(NSString *)path;
- (void)snail_badge_subscribe:(NSString *)path NumberBlock:(void(^)(NSInteger number))numberBlock;
- (void)snail_badge_subscribe:(NSString *)path StringBlock:(void(^)(NSString *string))stringBlock;
- (void)snail_badge_dispose:(NSString *)path;
- (void)snail_badge_clear;

@end

@interface UIView (SnailBadge)<SnailBadgeViewProtocol,SnailBadgeViewActionProtocol>


@end

@interface UITabBarItem (SnailBadge)<SnailBadgeViewProtocol,SnailBadgeViewActionProtocol>

@end

@interface UIBarButtonItem (SnailBadge)<SnailBadgeViewProtocol,SnailBadgeViewActionProtocol>

@end
