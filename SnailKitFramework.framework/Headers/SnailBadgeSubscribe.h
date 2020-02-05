//
//  SnailBadgeSubscribe.h
//  SnailKit
//
//  Created by liu on 2020/1/13.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SnailBadgeSubscribe : NSObject

@property (nonatomic ,readonly) NSString *identifer;
@property (nonatomic ,readonly) NSString *path;
@property (nonatomic ,readonly) void(^numberBlock)(NSInteger count);
@property (nonatomic ,readonly) void(^stringBlock)(NSString *string);

- (void)clear;

@end
