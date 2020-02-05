//
//  SnailAlertPresentationController.h
//  SnailKit
//
//  Created by liu on 2020/1/8.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SnailAlertPresentationController : UIPresentationController

@property (nonatomic ,strong) UIColor *color;
@property (nonatomic ,strong) void(^clickBlock)(void);

@end

