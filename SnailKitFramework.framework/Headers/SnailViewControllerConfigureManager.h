//
//  SnailViewControllerConfigureManager.h
//  SnailKit
//
//  Created by liu on 2020/1/9.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SnailViewControllerConfigure <NSObject>

@optional
///导航栏的半透明
+ (BOOL)translucent;
///是否显示导航栏底部黑线
+ (BOOL)navagationBarLine;
///导航栏背景颜色
+ (UIColor *)navagationBarBackgroundColor;
///导航栏背景图片
+ (UIImage *)navagationBarBackgroundImage;
///导航栏标题颜色
+ (NSDictionary *)navagationBarTitleAttributes;
///导航栏TintColor
+ (UIColor *)navagationBarTintColor;
///返回按钮图片
+ (UIImage *)navagationBackItemImage;
///controller背景颜色
+ (UIColor *)viewControllerBackgroundColor;
///该方法在 controller自身方法之前调用
+ (void)viewDidLoad:(UIViewController *)controller;

@end

@interface UIViewController(SnailViewControllerManager)

@property (nonatomic ,readonly) BOOL snailViewControllerConfigureManagerRun;

///导航栏返回事件
- (void)snailBackAction;

/**以下事件在controller viewDidLoad之前执行*/
///对象初始化
- (void)snailSetupObjects;
///UI创建时间
- (void)snailSetupDefaultUI;

/**以下事件在controller viewDidLoad之后执行*/
///创建完成后第一次执行
- (void)snailFirstAction;

@end

@interface SnailViewControllerConfigureManager : NSObject

+ (instancetype)defaultManager;

- (void)registerForController:(Class)controllerClass Configure:(Class<SnailViewControllerConfigure>)configureClass;
///只为当前类进行替换 与 register方法互斥
- (void)justForcontroller:(Class)controllerClass Configure:(Class<SnailViewControllerConfigure>)configureClass;

- (void)pauseForController:(Class)controllerClass;
- (void)resumseForController:(Class)controllerClass;
- (void)removeForController:(Class)controllerClass;

- (void)appendBlackList:(Class)controllerClass;
- (void)removeBlackList:(Class)controllerClass;

- (void)appendStringBlackList:(NSString *)controllerClassString;
- (void)removeStringBlackList:(NSString *)controllerClassString;

- (void)appenPrefixBlackList:(NSString *)controllerClassPrefixString;
- (void)removePrefixBlackList:(NSString *)controllerClassPrefixString;

- (NSArray<Class> *)blackList;
- (NSArray<NSString *> *)stringBlackList;
- (NSArray<NSString *> *)prefixBlackList;

- (void)pauseAll;
- (void)resumeAll;
- (void)clear;

@end
