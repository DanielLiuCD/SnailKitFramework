//
//  SnailMenuBarItem.h
//  SnailKit
//
//  Created by liu on 2019/12/14.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, SnailMenuBarItemState) {
    SnailMenuBarItemState_Normal,
    SnailMenuBarItemState_Selected,
};

typedef NS_ENUM(NSInteger, SnailMenuBarItemBadgeStyle) {
    ///字符串
    SnailMenuBarItemBadgeStyle_Value,
    ///点
    SnailMenuBarItemBadgeStyle_Point,
};

typedef struct {
    CGFloat top,right;
} SnailMenuBarItemBadgeInsets;

typedef struct {
    CGFloat left,right;
} SnailMenuBarItemPaddingInsets;

@class SnailMenuBarItem;

@protocol SnailMenuBarItemViewProtocol <NSObject>

@required
- (void)setItem:(SnailMenuBarItem *)item;

- (void)refesh;
- (void)refeshBadge;

- (void)clear;

@end

@interface SnailMenuBarItem : NSObject

@property (nonatomic ,copy) NSString *title;

@property (nonatomic ,strong) UIImage *image;

@property (nonatomic ,strong) NSString *badgeValue;
@property (nonatomic) SnailMenuBarItemBadgeStyle badgeStyle;
@property (nonatomic ,strong) UIColor *badgeColor;
@property (nonatomic ,strong) UIColor *badgeTextColor;
@property (nonatomic) SnailMenuBarItemBadgeInsets badgeOffsetInset;

@property (nonatomic ,readonly) SnailMenuBarItemState state;

@property (nonatomic) SnailMenuBarItemPaddingInsets paddingInsets;

- (void)setTitleTextAttributes:(nullable NSDictionary<NSAttributedStringKey,id> *)attributes forState:(SnailMenuBarItemState)state;

@end
