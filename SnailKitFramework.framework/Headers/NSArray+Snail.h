//
//  NSArray+Snail.h
//  SnailKit
//
//  Created by liu on 2020/1/7.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (Snail)

- (NSMutableArray *)snail_mutable_array;

- (NSArray *)snail_filter_array;

- (NSString *)snail_json;

@end

