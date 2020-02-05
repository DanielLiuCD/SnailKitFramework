//
//  SnailAlertController.h
//  SnailKit
//
//  Created by liu on 2020/1/8.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger,SnailAlertContainerControllerStyle) {
    SnailAlertContainerControllerStyleAlert,
    SnailAlertContainerControllerStyleSheet,
};

@interface SnailAlertContainerController : UIViewController

@property (nonatomic) BOOL backgroundClickHidden;
@property (nonatomic) BOOL displayToolBar;

@property (nonatomic ,strong) NSDictionary *toolBarLeftAttributes;
@property (nonatomic ,strong) NSDictionary *toolBarCenterAttributes;
@property (nonatomic ,strong) NSDictionary *toolBarRightAttributes;

@property (nonatomic ,strong) NSString *toolBarLeftText;
@property (nonatomic ,strong) NSString *toolBarCenterText;
@property (nonatomic ,strong) NSString *toolBarRightText;

@property (nonatomic ,copy) void(^toolBarLeftActionBlock)(void);
@property (nonatomic ,copy) void(^toolBarRightActionBlock)(void);
@property (nonatomic ,copy) void(^toolBarCenterActionBlock)(void);

@property (nonatomic ,strong) UIImage *toolBarBackgroundImage;
@property (nonatomic ,strong) UIColor *toolBarBackgroundColor;

@property (nonatomic ,strong) UIColor *backgroundColor;

- (instancetype)initWithView:(UIView *)view Style:(SnailAlertContainerControllerStyle)style;

@end

