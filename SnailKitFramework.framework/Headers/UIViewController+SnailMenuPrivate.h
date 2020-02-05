//
//  UIViewController+SnailMenuPrivate.h
//  SnailKit
//
//  Created by liu on 2020/1/4.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SnailMenuBarItem.h"
#import "SnailMenuBar.h"
#import "SnailMenuBarController.h"

@interface UIViewController (SnailMenuPrivate)

- (void)setSnailMenuBar:(SnailMenuBar *)snailMenuBar;
- (void)setSnailMenuBarItem:(SnailMenuBarItem *)snailMenuBarItem;
- (void)setSnailMenuBarController:(SnailMenuBarController *)snailMenuBarController;

@end

