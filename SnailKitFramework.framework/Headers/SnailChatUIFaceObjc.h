//
//  SnailChatUIFaceObjc.h
//  SnailKit
//
//  Created by liu on 2019/12/30.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, SnailChatUIFaceType) {
    ///工具模式 只提供图标共工具栏使用
    SnailChatUIFaceType_ToolKit,
    ///图片表情
    SnailChatUIFaceType_ImageFace,
    ///自定义
    SnailChatUIFaceType_Custome,
};

typedef NS_ENUM(NSInteger,SnailChatUIFaceImageType) {
    SnailChatUIFaceImage,
    SnailChatUIFaceImageGif,
};

@interface SnailChatUIFaceImageObjc : NSObject

@property (nonatomic ,readonly) NSString *name;
@property (nonatomic ,readonly) SnailChatUIFaceImageType type;
@property (nonatomic ,readonly) NSString *url; //若name存在优先使用name对应的图片

@end

@interface SnailChatUIFaceObjc : NSObject

@property (nonatomic ,readonly) SnailChatUIFaceType type;
@property (nonatomic ,readonly) NSString *name;
@property (nonatomic ,readonly) UIImage *iconImage;
@property (nonatomic ,strong) id extend;

- (instancetype)initWithName:(NSString *)name Icon:(UIImage *)icon;
- (instancetype)initWithName:(NSString *)name Icon:(UIImage *)icon Extend:(id)extend;

@end

@interface SnailChatUIFaceToolKitObjc : SnailChatUIFaceObjc

@end

@interface SnailChatUIFaceCustomeObjc : SnailChatUIFaceObjc

@property (nonatomic ,strong) Class viewClass;
@property (nonatomic ,strong) NSString *identifer;

@end

@interface SnailChatUIFaceContentImageObjc : SnailChatUIFaceObjc

@property (nonatomic ,readonly) NSURL *folder;
@property (nonatomic ,readonly) NSBundle *bundle;
@property (nonatomic ,readonly) NSString *iconName;
@property (nonatomic ,readonly) NSString *version;
@property (nonatomic ,readonly) NSArray<SnailChatUIFaceImageObjc *> *imgs;

- (instancetype)initWithFolder:(NSURL *)folder;

@end

@interface SnailChatUIFaceObjc(Private)

@property (nonatomic) BOOL ___selected;

@end
