//
//  SnailPostManProtocol.h
//  SnailKit
//
//  Created by liu on 2020/1/9.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger ,SnailPostManMethod) {/**请求方式*/
    SnailPostManMethodUnknown,
    ///GET
    SnailPostManMethodGET,
    ///POST
    SnailPostManMethodPOST,
    ///JSON
    SnailPostManMethodPOST_JSON,
    ///PUT
    SnailPostManMethodPUT,
    ///DELETE
    SnailPostManMethodDELETE,
};

typedef NS_ENUM(NSInteger ,SnailPostManRequestStrategy) { /**请求策略*/
    SnailPostManRequestStrategyUnknown,
    SnailPostManRequestStrategyDefault,
    ///如果同一接口还有请求没完成,取消之前的
    SnailPostManRequestStrategyCancleLast,
    ///如果同一接口还有请求没完成,取消现在的
    SnailPostManRequestStrategyCancleCurrent,
};

typedef NS_ENUM(NSInteger ,SnailPostManCacheStrategy) {/**缓存策略*/
    SnailPostManCacheStrategyUnknown,
    ///按照网络协议标准中实现的缓存策略
    SnailPostManCacheStrategyProtocolCache,
    ///不使用缓存
    SnailPostManCacheStrategyIgnoringLocalCacheData,
    ///无论缓存是否过期，有缓存则使用缓存，否则重新请求原始数据
    SnailPostManCacheStrategyCacheDataElseLoad,
    ///无论缓存是否过期，有缓存则使用缓存，否则视为失败，不会重新请求原始数据
    SnailPostManCacheStrategyCacheDataDontLoad,
};

/**响应回调协议*/
@protocol SnailPostManResponse <NSObject>

@required
///请求成功返回 注意进入组后不会走这里回调
- (void)SnailPostManSuccessResponse:(id)response Class:(Class)cls Tag:(NSInteger)tag Context:(id)context;
///请求错误返回 注意进入组后不一定会走这里回调
- (void)SnailPostManFaliedResponse:(NSError *)error Class:(Class)cls Tag:(NSInteger)tag Context:(id)context;

@optional
///请求取消返回
- (void)SnailPostManCancleResponse:(Class)cls Tag:(NSInteger)tag Context:(id)context;
///上传进度回调
- (void)SnailPostManUploadResponse:(NSProgress *)progress Class:(Class)cls Tag:(NSInteger)tag Context:(id)context;
///下载进度回调
- (void)SnailPostManDownloadResponse:(NSProgress *)progress Class:(Class)cls Tag:(NSInteger)tag Context:(id)context;

@end

/**响应验证协议*/
@protocol SnailPostManReponseCheck <NSObject>

- (NSError *)SnailPostManReponseCheck:(id)response Class:(Class)cls Tag:(NSInteger)tag Context:(id)context;

@end

/**请求参数验证协议*/
@protocol SnailPostManRequestParamsCheck <NSObject>

- (NSError *)SnailPostManRequestParamsCheck:(NSDictionary *)params Class:(Class)cls Tag:(NSInteger)tag Context:(id)context;

@end

/**响应数据处理协议*/
@protocol SnailPostManReponseFilter <NSObject>

- (id)SnailPostManReponseFilter:(id)response Class:(Class)cls Tag:(NSInteger)tag Context:(id)context;

@end

/**服务器协议
 该协议的优先级要地狱postMan自身
 */
@protocol SnailPostManServer <NSObject>

@required
///拼接服务器地址
+ (NSString *)handlePath:(NSString *)path;
///处理请求参数
+ (NSDictionary *)handleParams:(NSDictionary *)params Class:(Class)cls Tag:(NSInteger)tag Context:(id)context;
///请求方式
+ (SnailPostManMethod)method;
///超时时间
+ (NSTimeInterval)timeLimit;
///处理响应数据
+ (void)handleResponse:(id)response SuccessBlock:(void(^)(id response))successBlock FaliedBlock:(void(^)(NSError *error))faliedBlock;

@optional
///服务器版本
+ (NSString *)version;
///服务器说明字符串
+ (NSString *)descriptionString;
///cookie
+ (NSDictionary *)cookies;
///request header
+ (NSDictionary *)httpHeaderFileds;
///请求策略
+ (SnailPostManRequestStrategy)requestStrategy;
///缓存策略
+ (SnailPostManCacheStrategy)cacheStrategy;

@end
