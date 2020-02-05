//
//  SnailChatUIExtensionController.h
//  SnailKit
//
//  Created by liu on 2019/12/30.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SnailChatUIExtensionItem.h"

NS_ASSUME_NONNULL_BEGIN

@protocol SnailChatUIExtensionControllerProtocol <NSObject>

@required
- (void)SnailChatUIExtensionControllerDidselectedAtIndex:(NSInteger)index Item:(SnailChatUIExtensionItem *)item;

@end

@interface SnailChatUIExtensionController : UIViewController

@property (nonatomic ,weak) id<SnailChatUIExtensionControllerProtocol> protocol;

- (void)appendItem:(SnailChatUIExtensionItem *)item;
- (void)appendItems:(NSArray<SnailChatUIExtensionItem *> *)items;

- (void)removeItemWithTag:(NSInteger)tag;
- (void)removeItemWithTags:(NSArray<NSNumber *> *)tags;

@end

NS_ASSUME_NONNULL_END
