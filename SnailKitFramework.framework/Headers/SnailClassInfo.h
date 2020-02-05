//
//  SnailClassInfo.h
//  SnailKit
//
//  Created by liu on 2020/1/11.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>

typedef NS_ENUM(NSInteger,SnailTypeEncoding) {
    SnailTypeEncoding_Char,
    SnailTypeEncoding_Int,
    SnailTypeEncoding_Short,
    SnailTypeEncoding_Long,
    SnailTypeEncoding_LongLong,
    SnailTypeEncoding_UnsignedChar,
    SnailTypeEncoding_UnsignedInt,
    SnailTypeEncoding_UnsignedShort,
    SnailTypeEncoding_UnsignedLong,
    SnailTypeEncoding_UnsignedLongLong,
    SnailTypeEncoding_Float,
    SnailTypeEncoding_Double,
    SnailTypeEncoding_Bool,
    SnailTypeEncoding_Void,
    SnailTypeEncoding_CString,//char *
    SnailTypeEncoding_Object,
    SnailTypeEncoding_Class,
    SnailTypeEncoding_Selector,
    SnailTypeEncoding_Array,
    SnailTypeEncoding_Struct,
    SnailTypeEncoding_Union,
    SnailTypeEncoding_Bitnum,
    SnailTypeEncoding_Pointer,
    SnailTypeEncoding_Unknow,
    
    SnailMethodEncoding_Const,
    SnailMethodEncoding_In,
    SnailMethodEncoding_Inout,
    SnailMethodEncoding_Out,
    SnailMethodEncoding_Bycopy,
    SnailMethodEncoding_Byred,
    SnailMethodEncoding_Oneway,
};

typedef NS_OPTIONS(NSInteger,SnailPropertyEncoding) {
    SnailPropertyEncoding_Empty = 0,
    SnailPropertyEncoding_Readonly = 1 << 1,
    SnailPropertyEncoding_Copy = 1 << 2,
    SnailPropertyEncoding_Retain = 1 << 3,
    SnailPropertyEncoding_Nonatomic = 1 << 4,
    SnailPropertyEncoding_CustomeGetter = 1 << 5,
    SnailPropertyEncoding_CustomeSetter = 1 << 6,
    SnailPropertyEncoding_Dynamic = 1 << 7,
    SnailPropertyEncoding_Weak = 1 << 8,
    SnailPropertyEncoding_GarbageCollection = 1 << 9,
};

extern SnailTypeEncoding SnailClassValueEncodingFunction(const char *encod);
extern Class SnailClassValueClassFunction(const char *encod);

#define SnailClassValueEncoding(value) SnailClassValueEncodingFunction(@encode(__type__(value)))

@class SnailClassIvar,SnailClassMethod,SnailClassProperty,SnailClassInfo;

@interface SnailClassProperty : NSObject

@property (nonatomic ,readonly) NSString *name;
@property (nonatomic ,readonly) SnailPropertyEncoding encoding;
@property (nonatomic ,readonly) SnailTypeEncoding typeEndocing;
@property (nonatomic ,readonly) NSString *encodingString;
@property (nonatomic ,readonly) NSString *variable;
@property (nonatomic ,readonly) NSString *getterName;
@property (nonatomic ,readonly) NSString *setterName;
@property (nonatomic ,readonly) Class cls;
@property (nonatomic ,readonly) objc_property_t property_t;

@end

@interface SnailClassIvar : NSObject

@property (nonatomic ,readonly) NSString *name;
@property (nonatomic ,readonly) SnailTypeEncoding typeEndocing;
@property (nonatomic ,readonly) NSString *encodingString;
@property (nonatomic ,readonly) Class cls;

@end

@interface SnailClassMethod : NSObject

@property (nonatomic ,readonly) NSString *name;
@property (nonatomic ,readonly) NSString *encodingString;
@property (nonatomic ,readonly) Method method;

@end

@interface SnailClassProtocol : NSObject

@property (nonatomic ,readonly) NSString *name;
@property (nonatomic ,readonly) NSArray<SnailClassMethod *> *required_methods;
@property (nonatomic ,readonly) NSArray<SnailClassMethod *> *optional_methods;

@property (nonatomic ,readonly) NSArray<SnailClassProperty *> *required_propertys;
@property (nonatomic ,readonly) NSArray<SnailClassProperty *> *optional_propertys;

@property (nonatomic ,readonly) NSArray<SnailClassMethod *> *optional_metaMethods;
@property (nonatomic ,readonly) NSArray<SnailClassMethod *> *required_metaMethods;

@property (nonatomic ,readonly) NSArray<SnailClassProperty *> *optional_metaPropertys;
@property (nonatomic ,readonly) NSArray<SnailClassProperty *> *required_metaPropertys;

@property (nonatomic ,readonly) NSArray<SnailClassProtocol *> *protocols;
@property (nonatomic ,readonly) Protocol *protocol;

@end

@interface SnailClassInfo : NSObject

//默认不会存在 调用requestSupperClassInfo后生成
@property (nonatomic ,readonly) SnailClassInfo *supperInfo;
@property (nonatomic ,readonly) SnailClassInfo *metaInfo;

@property (nonatomic ,readonly) Class cls;
@property (nonatomic ,readonly) NSString *name;

@property (nonatomic ,readonly) NSArray<SnailClassProperty *> *propertys;
@property (nonatomic ,readonly) NSArray<SnailClassIvar *> *ivars;
@property (nonatomic ,readonly) NSArray<SnailClassMethod *> *methods;
@property (nonatomic ,readonly) NSArray<SnailClassProtocol *> *protocols;

@property (nonatomic ,readonly) BOOL meta;

///生成完整信息
- (instancetype)initWithClass:(Class)cls;

- (void)requestSupperClassInfo;

///请求到指定父类即停止查找
- (void)requestSupperClassInfoToClass:(Class)cls;

///方法打印
- (void)printMethods;
///打印属性
- (void)printProperty;
///打印变量
- (void)printVariable;

@end
