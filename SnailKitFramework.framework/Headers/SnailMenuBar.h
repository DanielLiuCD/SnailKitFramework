//
//  SnailMenuBar.h
//  SnailKit
//
//  Created by liu on 2019/12/14.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SnailMenuBarItem.h"
#import "SnailMenuDefine.h"

typedef NS_ENUM(NSInteger ,SnailMenuBarIndicatorWidthStyle) {
    ///指示器宽度固定
    SnailMenuBarIndicatorWidthStyle_Static,
    ///指示器宽度对齐标题
    SnailMenuBarIndicatorWidthStyle_Track,
};

typedef NS_ENUM(NSInteger, SnailMenuBarTileType) {
    ///平铺 需配合每页数量pageCount
    SnailMenuBarTileType_Equal,
    ///跟随内容大小
    SnailMenuBarTileType_Track,
};

@protocol SnailMenuBarProtocol <NSObject>

@optional
- (BOOL)SnailMenuBarShouldSelectItem:(SnailMenuBarItem *)item Index:(NSInteger)index;
- (void)SnailMenuBarDidSelectedItem:(SnailMenuBarItem *)item Index:(NSInteger)index;

@end

@interface SnailMenuBar : UIView

@property (nonatomic ,strong) NSArray<SnailMenuBarItem *> *items;

@property (nonatomic ,weak) id<SnailMenuBarProtocol> protocol;
@property (nonatomic) SnailMenuBarIndicatorWidthStyle indicatorWidthStyle;
@property (nonatomic) SnailMenuBarAskOrderType askOrderType;
@property (nonatomic) SnailMenuBarTileType tileType;

@property (nonatomic ,weak) UIScrollView *scrol;

@property (nonatomic ,readonly) NSInteger selectedIndex;

///item之间的间隙
@property (nonatomic) CGFloat spaceing;
///前后的距离
@property (nonatomic) CGFloat leadingSpaceing;

///平铺时每页的数量
@property (nonatomic) NSInteger pageCount;

///指示器高度
@property (nonatomic) CGFloat indicatorHeight;
///指示器宽度 SnailMenuBarIndicatorWidthStyle_Static使用
@property (nonatomic) CGFloat indicatorWidth;
///指示器图片 图片和颜色只能使用一个 图片优先级高
@property (nonatomic, strong) UIImage *indicatorImage;
///指示器颜色
@property (nonatomic, strong) UIColor *indicatorColor;

///底部线图片 图片和颜色只能使用一个 图片优先级高
@property (nonatomic, strong) UIImage *bottomLineImage;
///底部线颜色
@property (nonatomic, strong) UIColor *bottomLineColor;
///底部线高度
@property (nonatomic) CGFloat bottomLineHeight;

- (void)setBackgroundImage:(UIImage *)image;

- (void)appendItem:(SnailMenuBarItem *)item;
- (void)appendItems:(NSArray<SnailMenuBarItem *> *)items;

- (void)removeItem:(SnailMenuBarItem *)item;
- (void)removeItems:(NSArray<SnailMenuBarItem *> *)items;

- (void)removeAtIndex:(NSInteger)index;
- (void)removeWithIndexs:(NSIndexSet *)indexSet;

- (void)selectedAtIndex:(NSInteger)index;
- (void)selectedWithItem:(SnailMenuBarItem *)item;

- (void)refeshItem:(SnailMenuBarItem *)item;
- (void)refeshItems:(NSArray<SnailMenuBarItem *> *)items;

@end
