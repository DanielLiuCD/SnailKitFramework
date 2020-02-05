//
//  SnailBadge.h
//  SnailKit
//
//  Created by liu on 2020/1/14.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol SnailBadgeToken<NSObject>

@property (nonatomic ,readonly) NSString *path;
@property (nonatomic ,readonly) NSString *identifer;
- (void)dispose;

@end

@interface SnailBadge : NSObject

+ (instancetype)shared;

- (id<SnailBadgeToken>)subscribe:(NSString *)path NumberBlock:(void(^)(NSInteger number))numberBlock;
- (id<SnailBadgeToken>)subscribe:(NSString *)path StringBlock:(void(^)(NSString *string))stringBlock;
- (void)dispath:(NSString *)path Number:(NSInteger)number;
- (void)dispath:(NSString *)path String:(NSString *)string;
- (void)removeSubscribe:(NSString *)path;
- (void)clear;

@end
