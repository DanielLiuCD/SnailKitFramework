//
//  NSDictionary+Snail.h
//  SnailKit
//
//  Created by liu on 2020/1/7.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NSDictionary (Snail)

- (NSInteger)snail_integer_value:(NSString *)key;
- (CGFloat)snail_float_value:(NSString *)key;
- (NSString *)snail_string_value:(NSString *)key;

/*
 将字典转换为可变字典 嵌套
 会执行过滤操作，即过滤掉Null
 */
- (NSMutableDictionary *)snail_mutable_dictionary;

/*
 执行过滤操作，即过滤掉Null
 */
- (NSDictionary *)snail_filter_dictionary;

/**
 json
 */
- (NSString *)snail_json;

/**
网络请求的参数拼接
 */
- (NSString *)snail_http_params_string;

@end
