//
//  SnailPostMan.h
//  SnailKit
//
//  Created by liu on 2020/1/9.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SnailPostManProtocol.h"

@interface SnailPostManFile : NSObject

@property (nonatomic ,strong) NSString *name;
@property (nonatomic ,strong) NSString *key;
@property (nonatomic ,strong) NSString *mimeType;

/**path data只需一个就好*/
@property (nonatomic ,strong) NSURL *path;
@property (nonatomic ,strong) NSData *data;

@end

/**
 优先级：
        url !=  nil 优先使用url进行请求
        serverPath != nil 优先使用改路径
 path ：服务器路径
 */
@interface SnailPostMan : NSObject

@property (nonatomic ,strong) NSString *path;
@property (nonatomic ,strong) NSString *serverPath;
@property (nonatomic ,strong) NSString *url;

@property (nonatomic ,strong) NSDictionary *params;

@property (nonatomic ,strong) NSArray<SnailPostManFile *> *files;

@property (nonatomic ,strong) id<SnailPostManRequestParamsCheck> paramsCheck;
@property (nonatomic ,strong) id<SnailPostManReponseCheck> responseCheck;
@property (nonatomic ,strong) NSArray<id<SnailPostManReponseFilter>> *responseFilters;

///为nil将使用默认服务器
@property (nonatomic ,strong) NSString *serverIdentifer;

@property (nonatomic) SnailPostManMethod method;
@property (nonatomic) NSTimeInterval timeLimit;
@property (nonatomic) SnailPostManRequestStrategy requestStrategy;
@property (nonatomic) SnailPostManCacheStrategy cacheStrategy;
@property (nonatomic ,strong) NSDictionary *cookies;
@property (nonatomic ,strong) NSDictionary *httpHeaderFileds;
@property (nonatomic ,copy) void(^successBlock)(id response,NSInteger tag,id context);
@property (nonatomic ,copy) void(^faliedBlock)(NSError *error,NSInteger tag,id context);
@property (nonatomic ,copy) void(^cancleBlock)(NSInteger tag,id context);
@property (nonatomic ,copy) void(^uploadProgressBlock)(NSProgress *progress,NSInteger tag,id context);
@property (nonatomic ,copy) void(^downloadProgressBlock)(NSProgress *progress,NSInteger tag,id context);

///返回所有的postMan的子类的path属性
+ (NSArray<NSString *> *)allPaths;

///返回所有的postMan的子类
+ (NSArray<NSString *> *)allPostMans;

@end
