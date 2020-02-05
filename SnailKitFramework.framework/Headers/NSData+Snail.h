//
//  NSData+Snail.h
//  SnailKit
//
//  Created by liu on 2020/1/7.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (Snail)

- (NSData *)snail_ase_encode_pcks7pading_aes128:(NSString *)key IV:(NSString *)iv;

- (NSData *)snail_ase_decode_pcks7pading_aes128:(NSString *)key IV:(NSString *)iv;

@end

