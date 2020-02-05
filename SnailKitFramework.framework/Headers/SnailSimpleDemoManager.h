//
//  SnailSimpleDemoManager.h
//  SnailKit
//
//  Created by liu on 2020/1/9.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SnailSimpleDemoManager : NSObject

+ (instancetype)sharedInstance;

- (NSString *)demoNickName;
- (NSString *)demoString;
- (NSString *)demoImageUrl;
- (NSString *)demoEmptyString;
- (NSString *)demoLongString;
- (NSString *)demoShortString;
- (NSInteger)demoNumber;
- (NSInteger)demoNumberInRange:(NSRange)range;
- (NSInteger)demoLargeNumber;
- (CGFloat)demoFloat;


@end
