//
//  UITextField+Snail.h
//  SnailKit
//
//  Created by liu on 2020/1/15.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextField (Snail)

- (void(^)(NSString *string,UIColor *color))snail_placeholder;
- (void(^)(UIView *view,UIEdgeInsets insets,BOOL left))snail_left_right_view;

@end
