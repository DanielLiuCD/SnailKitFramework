//
//  SnailChatConversationListController.h
//  SnailKit
//
//  Created by liu on 2020/1/21.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SnailChatConversationListObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface SnailChatConversationListController : UIViewController

- (void)appendListObject:(SnailChatConversationListBaseObject *)object;
- (void)didClickObject:(SnailChatConversationListBaseObject *)object;
- (void)registeCustome:(Class)customeModelClass Cell:(Class)cellClass;

- (void)remoteImage:(UIImageView *)imageView Url:(NSString *)url;

@end

NS_ASSUME_NONNULL_END
