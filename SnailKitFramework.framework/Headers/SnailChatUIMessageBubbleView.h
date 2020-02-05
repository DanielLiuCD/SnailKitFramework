//
//  SnailChatUIMessageBubbleView.h
//  SnailKit
//
//  Created by liu on 2019/12/17.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SnailChatUIBubbleObjc.h"
#import "SnailChatUIDefine.h"

NS_ASSUME_NONNULL_BEGIN

@interface SnailChatUIMessageBubbleView : UIView

- (void)configureWithBubbleObjc:(SnailChatUIBubbleObjc *)objc Direction:(SnailChatUILayoutDirection)direction;

- (void)clear;

@end

NS_ASSUME_NONNULL_END
