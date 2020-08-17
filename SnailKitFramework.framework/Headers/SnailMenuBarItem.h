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

typedef NS_ENUM(NSInteger, SnailMenuBarItemBadgeLayout) {
    ///居右
    SnailMenuBarItemBadgeLayout_Right,
    ///跟在标题后面
    SnailMenuBarItemBadgeLayout_TrackTitle,
};

typedef struct {
    CGFloat top,right;
} SnailMenuBarItemBadgeInsets;

typedef struct {
    CGFloat left,right;
} SnailMenuBarItemPaddingInsets;

CG_INLINE SnailMenuBarItemBadgeInsets
SnailMenuBarItemBadgeInsetsMake(CGFloat top, CGFloat right)
{
  SnailMenuBarItemBadgeInsets insets;
  insets.top = top; insets.right = right;
  return insets;
}

CG_INLINE SnailMenuBarItemPaddingInsets
SnailMenuBarItemPaddingInsetsMake(CGFloat left, CGFloat right)
{
  SnailMenuBarItemPaddingInsets insets;
  insets.left = left; insets.right = right;
  return insets;
}

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

@property (nonatomic ,strong) UIColor *badgeColor;
@property (nonatomic ,strong) UIColor *badgeTextColor;

@property (nonatomic ,strong) NSString *badgeValue;
@property (nonatomic ,strong) UIFont *badgeFont;
@property (nonatomic ,strong) UIImage *badgeBackgroundImage;
@property (nonatomic ,strong) UIImage *badgeMaskImage;

@property (nonatomic) BOOL badgeEnableCorner; //默认为true

@property (nonatomic) SnailMenuBarItemBadgeInsets badgeOffsetInset;
@property (nonatomic) SnailMenuBarItemBadgeStyle badgeStyle;
@property (nonatomic) SnailMenuBarItemBadgeLayout badgeLayout;
@property (nonatomic) SnailMenuBarItemPaddingInsets badgePaddingInsets;
@property (nonatomic) UIViewContentMode badgeBackgroundContentMode;

@property (nonatomic ,readonly) SnailMenuBarItemState state;

@property (nonatomic) SnailMenuBarItemPaddingInsets paddingInsets;

- (void)setTitleTextAttributes:(NSDictionary<NSAttributedStringKey,id> *)attributes forState:(SnailMenuBarItemState)state;

@end
