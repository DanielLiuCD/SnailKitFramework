//
//  UIColor+Snail.h
//  SnailKit
//
//  Created by liu on 2020/1/7.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (Snail)

+ (instancetype)snail_color_from_hex:(NSUInteger)hex;

+ (instancetype)snail_color_from_r:(float)red g:(float)green b:(float)blue;

+ (instancetype)snail_color_from_r:(float)red g:(float)green b:(float)blue a:(float)alpha;

///获取颜色的16进制表示
- (NSString *)snail_color_hex_string;

@end
