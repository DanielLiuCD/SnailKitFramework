//
//  SnailMenuBarItem+Private.h
//  SnailKit
//
//  Created by liu on 2019/12/14.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import "SnailMenuBarItem.h"

@protocol SnailMenuBarItemProtocol <NSObject>

@required
- (UIView<SnailMenuBarItemViewProtocol> *)SnailMenuBarItemTakeView:(SnailMenuBarItem *)item;

@end

@interface SnailMenuBarItem (Private)

@property (nonatomic ,weak) id<SnailMenuBarItemProtocol> ___protocol;

@property (nonatomic ,readonly) UIView *__itemView;
@property (nonatomic ,readonly) UIView *__menuView;
@property (nonatomic ,readonly) UIViewController *__controller;

- (CGFloat)width;

- (CGFloat)widthWithState:(SnailMenuBarItemState)state;

- (CGRect)getTitleFrame;
- (CGRect)getImageFrame;
- (CGRect)getContentFrame;

- (NSAttributedString *)getAttributeString;

- (CGFloat)getImageTitleSpaceing;

- (NSAttributedString *)getAttributeStringWithState:(SnailMenuBarItemState)state;

///选中状态和没选中状态宽度是否一致 不一致返回true
- (BOOL)selectedShouldRefeshWidth;

- (void)clear;

@end
