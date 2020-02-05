//
//  SnailPostManSession.h
//  SnailKit
//
//  Created by liu on 2020/1/10.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SnailPostMan.h"

UIKIT_EXTERN NSString * const SnailPostManSessionDefaultServer;

FOUNDATION_EXTERN NSErrorDomain const SnailPostManError;

@interface NSObject(SnailPostManSession)

- (NSURLResponse *)snail_postman_seeion_url_response;

@end

@interface SnailPostManSession : NSObject

+ (void)send:(SnailPostMan *)postman Response:(id<SnailPostManResponse>)response Tag:(NSInteger)tag Context:(id)context;

+ (void)cancle:(SnailPostMan *)postman Tag:(NSInteger)tag;

+ (void)registerServer:(Class<SnailPostManServer>)server Identifer:(NSString *)identifer;

/**identifer == nil 将使用默认服务器*/
+ (NSString *)createUrlWithPath:(NSString *)path ServerIdentifer:(NSString *)identifer;

+ (NSArray *)servers;

@end
