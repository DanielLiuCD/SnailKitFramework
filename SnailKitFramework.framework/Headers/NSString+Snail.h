//
//  NSString+Snail.h
//  SnailKit
//
//  Created by liu on 2020/1/7.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NSString (Snail)

- (CGSize)snail_calculate_size:(CGSize)size attribute:(NSDictionary *)attributes;

- (NSString *)snail_md5_lower;
- (NSString *)snail_md5_upper;

- (NSString *)snail_url_encode;
- (NSString *)snail_url_decode;

- (NSDictionary *)snail_http_params_decode;

///提取字符串中所有的数字
- (NSString *)snail_number_string;

/**
 过滤json字符串中多余的换行
 */
- (NSString *)snail_filter_json_space_line;

/**
 进行正则表达式匹配
 */
- (BOOL)snail_check_regex_match:(NSString *)regx;

@end
