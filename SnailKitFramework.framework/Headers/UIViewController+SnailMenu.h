//
//  UIViewController+SnailMenu.h
//  SnailKit
//
//  Created by liu on 2020/1/3.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SnailMenuBarItem.h"
#import "SnailMenuBar.h"
#import "SnailMenuBarController.h"

@interface UIViewController (SnailMenu)

@property (nonatomic ,weak ,readonly) SnailMenuBar *snailMenuBar;
@property (nonatomic ,strong ,readonly) SnailMenuBarItem *snailMenuBarItem;
@property (nonatomic ,weak ,readonly) SnailMenuBarController *snailMenuBarController;

- (void)removeFromeSnailMenuBarController;

@end
