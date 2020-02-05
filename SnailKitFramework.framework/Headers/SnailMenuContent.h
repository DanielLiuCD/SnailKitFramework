//
//  SnailMenuContent.h
//  SnailKit
//
//  Created by liu on 2020/1/4.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SnailMenuDefine.h"

@class SnailMenuContent;

@protocol SnailMenuContentProtocol <NSObject>

@optional
- (BOOL)SnailMenuContentShouldSelected:(SnailMenuContent *)contentView Index:(NSInteger)index View:(UIView *)view;
- (void)SnailMenuContentDidSelected:(SnailMenuContent *)contentView Index:(NSInteger)index View:(UIView *)view;
- (void)SnailMenuContentWillInsertView:(SnailMenuContent *)contentView Index:(NSInteger)index View:(UIView *)view;
- (void)SnailMenuContentDidInsertView:(SnailMenuContent *)contentView Index:(NSInteger)index View:(UIView *)view;

@end

@interface SnailMenuContent : UIView

@property (nonatomic ,weak) id<SnailMenuContentProtocol> protocol;
@property (nonatomic) SnailMenuBarAskOrderType askOrderType;
@property (nonatomic ,readonly) NSInteger currentPage;
@property (nonatomic ,readonly) UIView *currentView;
@property (nonatomic ,readonly) NSArray *views;

- (void)selecteAtIndex:(NSInteger)index;
- (void)selecteAtIndex:(NSInteger)index Animated:(BOOL)animated;

- (void)appendView:(UIView *)view;
- (void)appendViews:(NSArray<UIView *> *)views;
- (void)appendViews:(NSArray<UIView *> *)views SelectdIndex:(NSInteger)selectedIndex;

- (void)removeView:(UIView *)view;
- (void)removeViews:(NSArray<UIView *> *)views;

- (void)removeViewAtIndex:(NSInteger)index;

- (void)clear;

@end

