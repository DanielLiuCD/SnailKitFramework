//
//  SnailChatUIMessageIndicatorBaseView.h
//  SnailKit
//
//  Created by liu on 2019/12/18.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SnailChatUIMessageIndicatorBaseObjc.h"
#import "SnailChatUIDefine.h"

NS_ASSUME_NONNULL_BEGIN

@interface SnailChatUIMessageIndicatorBaseView : UIView

- (void)willShow;
- (void)willHidden;

- (void)configuewWithObjc:(SnailChatUIMessageIndicatorBaseObjc *)objc Direction:(SnailChatUILayoutDirection)direction;

@end

NS_ASSUME_NONNULL_END
