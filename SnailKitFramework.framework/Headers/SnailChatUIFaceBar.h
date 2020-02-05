//
//  SnailChatUIFaceBar.h
//  SnailKit
//
//  Created by liu on 2019/12/28.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SnailChatUIFaceObjc.h"

NS_ASSUME_NONNULL_BEGIN

@protocol SnailChatUIFaceBarProtocol <NSObject>

@required
- (void)SnailChatUIFaceBarDidSelectedDisplayAtIndex:(NSInteger)index;
- (void)SnailChatUIFaceBarDidSelectedToolKitAtIndex:(NSInteger)index;

@end

@interface SnailChatUIFaceBar : UIView

@property (nonatomic ,weak) id<SnailChatUIFaceBarProtocol> protocol;

//注入工具栏的 数据源
- (void)registerToolKitSource:(NSArray<SnailChatUIFaceToolKitObjc *> *)toolKitSource;
//注入显示的 数据源
- (void)registerDisplaySource:(NSArray<SnailChatUIFaceObjc *> *)source;

- (void)reload;

- (void)selectDisplayAtIndex:(NSInteger)index;
- (void)selectedToolKitAtIndex:(NSInteger)index;

@end


NS_ASSUME_NONNULL_END
