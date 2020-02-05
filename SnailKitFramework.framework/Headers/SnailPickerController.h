//
//  SnailPickerController.h
//  SnailKit
//
//  Created by liu on 2020/1/8.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import "SnailAlertContainerController.h"

@interface SnailPickerController : SnailAlertContainerController

@property (nonatomic ,copy) NSInteger(^numberOfComponentsBlock)(void);
@property (nonatomic ,copy) NSInteger(^numberOfRowsInComponentBlock)(NSInteger component);
@property (nonatomic ,copy) CGFloat(^rowHeightForComponentBlock)(NSInteger component);
@property (nonatomic ,copy) NSString *(^titleForRowBlock)(NSInteger row,NSInteger component);
@property (nonatomic ,copy) NSDictionary *(^titleAttributesForRowBlock)(NSInteger row,NSInteger component);
@property (nonatomic ,copy) void(^didSelectRow)(NSInteger row,NSInteger compont);

@property (nonatomic ,copy) void(^completeBlock)(NSArray<NSNumber *> *selectedIndexs);

- (instancetype)initWithPickerHeight:(CGFloat)height;
- (instancetype)initWithPickerHeight:(CGFloat)height SelectedIndexs:(NSArray<NSNumber *> *)indexs;

- (void)reload;
- (void)reloadCompont:(NSInteger)compont;
- (void)selectedRow:(NSInteger)row Compont:(NSInteger)compont;
- (NSInteger)takeSelectedRowInCompont:(NSInteger)compont;

@end
