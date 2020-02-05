//
//  SnailSimpleInputController.h
//  SnailKit
//
//  Created by liu on 2020/1/8.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SnailSimpleTextInputController : UIViewController

@property (nonatomic ,copy) NSString *text;
@property (nonatomic ,copy) NSString *placeHolder;
@property (nonatomic ,strong) UIColor *placeHolderColor;
@property (nonatomic ,strong) UIFont *font;
@property (nonatomic ,strong) void(^completeBlock)(NSString *text);

@end
