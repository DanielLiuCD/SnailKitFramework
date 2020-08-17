//
//  SnailNumberFiled.h
//  SnailKit
//
//  Created by liu on 2020/3/30.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 密码输入框 只能输入0-9的数字
 */
@interface SnailNumberFiled : UIControl

@property (nonatomic) NSUInteger limitLength; //位数 必须设置,不能为0 默认为4
@property (nonatomic) NSUInteger limitNumber; //最大的数字
@property (nonatomic) CGFloat spaceing; //数字之间的间隔 默认为0;
@property (nonatomic ,strong) UIColor *passwordBackgroundColor; //每一位密码的背景颜色
@property (nonatomic) CGFloat passwordBackgroundCorner; //每一位密码背景的圆角 默认为0

@property (nonatomic ,strong) UIColor *separtorLineColor; //密码之间分割线的颜色

@property (nonatomic ,strong) UIColor *secureTextColor; //安全显示的文字颜色

@property(nonatomic,getter=isSecureTextEntry) BOOL secureTextEntry; //默认为true

@property (nonatomic ,strong) UIFont *font;
@property (nonatomic ,strong) UIColor *textColor;

@property (nonatomic ,strong) NSString *text;

@end
