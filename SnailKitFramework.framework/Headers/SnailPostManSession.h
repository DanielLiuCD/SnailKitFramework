//
//  SnailPostManSession.h
//  SnailKit
//
//  Created by liu on 2020/1/10.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SnailPostMan.h"

NS_ASSUME_NONNULL_BEGIN

UIKIT_EXTERN NSString * const SnailPostManSessionDefaultServer;

///发送请求时 context如果是字典 字典中特殊作用的key
typedef NSString *SnailPostManContextKey NS_STRING_ENUM;

///跳过服务器处理响应阶段 只要 context中包含该字段 且为true 则跳过服务器处理响应的过程
UIKIT_EXTERN SnailPostManContextKey const SnailPostManSkipServerHandleKey;

FOUNDATION_EXTERN NSErrorDomain const SnailPostManError;

@interface NSObject(SnailPostManSession)

- (NSURLResponse *)snail_postman_seeion_url_response;
- (id _Nullable)snail_postman_session_url_response_data;
- (NSString * _Nullable)snail_postman_session_url_response_data_string;

@end

@interface SnailPostManSession : NSObject

/**
 发起网络请求
 如果context不存在，那么系统会自动生成一个对象
 context中会保存最原始的响应（NSURLResponse）可通过snail_postman_seeion_url_response获取
 context中会保存响应的数据 可通过snail_postman_session_url_response_data获取
 context中会保存响应的对应的字符串 可通过snail_postman_session_url_response_data_string获取
 */
+ (void)send:(SnailPostMan *)postman Response:(id<SnailPostManResponse> _Nullable)response Tag:(NSInteger)tag Context:(id _Nullable)context;

/**
 取消网络请求
 */
+ (void)cancle:(SnailPostMan *)postman Tag:(NSInteger)tag;

/**必须注册一个默认的服务器
 即identifer为SnailPostManSessionDefaultServer的服务器
 */
+ (void)registerServer:(Class<SnailPostManServer>)server Identifer:(NSString *)identifer;

/**identifer == nil 将使用默认服务器*/
+ (NSString *)createUrlWithPath:(NSString *)path ServerIdentifer:(NSString * _Nullable)identifer;

+ (NSArray *)servers;

+ (void)enableDebuge;
+ (void)disableDebuge;

@end

NS_ASSUME_NONNULL_END
