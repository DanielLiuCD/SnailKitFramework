//
//  SnailChatUIMessageLayoutFactory.h
//  SnailKit
//
//  Created by liu on 2019/12/26.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SnailChatUIMessageLayout.h"
#import "SnailChatUIMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface SnailChatUIMessageLayoutFactory : NSObject

+ (SnailChatUIMessageBaseLayout *)createLayoutWithMessage:(SnailChatUIBaseMessage *)message;

@end

NS_ASSUME_NONNULL_END
