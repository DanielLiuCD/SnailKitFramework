//
//  SnailDatePickerController.h
//  SnailKit
//
//  Created by liu on 2020/1/8.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import "SnailAlertContainerController.h"

@interface SnailDatePickerController : SnailAlertContainerController

@property (nonatomic) UIDatePickerMode dateMode;
@property (nonatomic ,strong) NSDate *date;
@property (nonatomic ,strong) NSDate *minDate;
@property (nonatomic ,strong) NSDate *maxDate;
@property (nonatomic ,strong) NSLocale *locale;

@property (nonatomic ,strong) void(^completeBlock)(NSDate *date);

- (instancetype)initWithPickerHeight:(CGFloat)height;
- (instancetype)initWithPickerHeight:(CGFloat)height Date:(NSDate *)date;

@end
