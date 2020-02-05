//
//  SnailSimpleLocaleCache.h
//  SnailKit
//
//  Created by liu on 2020/1/7.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger,SnailSimpleLocaleCacheType) {
    SnailSimpleLocaleCache_UserDefaults,
    SnailSimpleLocaleCache_Disk,
    ///保存在内存中，最多保存20M
    SnailSimpleLocaleCache_Memory,
};

@interface SnailSimpleLocaleCache : NSObject

+ (BOOL)saveInteger:(NSInteger)value Name:(NSString *)name Type:(SnailSimpleLocaleCacheType)type;

+ (BOOL)saveFloat:(CGFloat)value Name:(NSString *)name Type:(SnailSimpleLocaleCacheType)type;

+ (BOOL)saveImage:(UIImage *)value Name:(NSString *)name Type:(SnailSimpleLocaleCacheType)type;

+ (NSInteger)takeIntergerValueWithName:(NSString *)name Type:(SnailSimpleLocaleCacheType)type;

+ (CGFloat)takeFloatValueWithName:(NSString *)name Type:(SnailSimpleLocaleCacheType)type;

+ (UIImage *)takeImageValueWithName:(NSString *)name Type:(SnailSimpleLocaleCacheType)type;

+ (BOOL)saveValue:(id)value Name:(NSString *)name Type:(SnailSimpleLocaleCacheType)type;

+ (BOOL)removeValueWithName:(NSString *)name Type:(SnailSimpleLocaleCacheType)type;

+ (id)takeValueWithName:(NSString *)name Type:(SnailSimpleLocaleCacheType)type;

+ (BOOL)registerCustomeActionWithIdentifer:(NSString *)identifer Block:(BOOL(^)(id value ,NSString *name))block;

+ (BOOL)registerCustomeRemoveActionWithIdentifer:(NSString *)identifer Block:(BOOL(^)(NSString *name))block;

+ (BOOL)registerCustomeTakeValueActionWithIdentifer:(NSString *)identifer Block:(id(^)(NSString *name))block;

+ (BOOL)removeCustomeActionWithIdentifer:(NSString *)identifer;

+ (BOOL)saveValue:(id)value Name:(NSString *)name CustomeIdentifer:(NSString *)identifer;

+ (BOOL)removeValueWithName:(NSString *)name CustomeIdentifer:(NSString *)identifer;

+ (id)takeValueWithName:(NSString *)name CustomeIdentifer:(NSString *)identifer;

@end
