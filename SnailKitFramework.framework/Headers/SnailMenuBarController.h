//
//  SnailMenuBarController.h
//  SnailKit
//
//  Created by liu on 2020/1/3.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SnailMenuBar.h"

@class SnailMenuBarController;

@protocol SnailMenuBarControllerProtocol <NSObject>

- (BOOL)SnailMenuBarControllerShouldSelected:(SnailMenuBarController *)menuController Controller:(UIViewController *)controller Index:(NSInteger)index;
- (void)SnailMenuBarControllerDidSelected:(SnailMenuBarController *)menuController Controller:(UIViewController *)controller Index:(NSInteger)index;

@end

@interface SnailMenuBarController : UIViewController

@property (nonatomic ,readonly) SnailMenuBar *menuBar;
@property (nonatomic ,strong) NSArray *controllers;

@property (nonatomic ,weak) id<SnailMenuBarControllerProtocol> protocol;

@property (nonatomic) NSInteger selectedIndex;

- (void)addMenuController:(UIViewController *)controller;
- (void)removeMenuController:(UIViewController *)controller;

@end

