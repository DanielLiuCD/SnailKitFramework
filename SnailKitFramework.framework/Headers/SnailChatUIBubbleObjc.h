//
//  SnailChatUIBubbleObjc.h
//  SnailKit
//
//  Created by liu on 2019/12/17.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger,SnailChatUIBubbleConfigureType) {
    ///json文件
    SnailChatUIBubbleConfigureType_JSON,
    ///文本文件
    SnailChatUIBubbleConfigureType_TEXT,
    ///plist文件
    SnailChatUIBubbleConfigureType_PLIST,
};

typedef NS_ENUM(NSInteger, SnailChatUIBubbleType) {
    ///图片
    SnailChatUIBubbleType_Image,
    ///序列帧
    SnailChatUIBubbleType_ImageFrame,
};

typedef NS_ENUM(NSInteger, SnailChatUIBubblePlatformType) {
    ///通用
    SnailChatUIBubblePlatformType_All,
    ///iOS
    SnailChatUIBubblePlatformType_IOS,
    ///Android
    SnailChatUIBubblePlatformType_Android,
};

NS_ASSUME_NONNULL_BEGIN

@interface SnailChatUIBubbleImageObjc : NSObject

@property (nonatomic ,strong) NSString *name;
@property (nonatomic ,strong) NSString *path;
@property (nonatomic) UIEdgeInsets resizableInsets;
@property (nonatomic) UIEdgeInsets safeInsets;
@property (nonatomic) NSTimeInterval time;

@end

@interface SnailChatUIBubbleObjc : NSObject

@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) SnailChatUIBubbleConfigureType configureType;
@property (nonatomic, readonly) SnailChatUIBubblePlatformType platformType;
@property (nonatomic, readonly) SnailChatUIBubbleType type;

@property (nonatomic, readonly) NSURL *folder;
@property (nonatomic, readonly) NSBundle *bundle;

@property (nonatomic, readonly) SnailChatUIBubbleImageObjc *leftImage;
@property (nonatomic, readonly) SnailChatUIBubbleImageObjc *rightImage;

@property (nonatomic, readonly) NSArray<SnailChatUIBubbleImageObjc *> *leftImages;
@property (nonatomic, readonly) NSArray<SnailChatUIBubbleImageObjc *> *rightImages;

@property (nonatomic, readonly) UIEdgeInsets leftDefaultResizableInsets;
@property (nonatomic, readonly) UIEdgeInsets rightDefaultResizableInsets;

@property (nonatomic, readonly) UIEdgeInsets leftDefaultSafeInsets;
@property (nonatomic, readonly) UIEdgeInsets rightDefaultSafeInsets;

@property (nonatomic, readonly) NSTimeInterval timeSpaceing;
@property (nonatomic, readonly) NSTimeInterval leftTimeSpaceing;
@property (nonatomic, readonly) NSTimeInterval rightTimeSpaceing;

- (instancetype)initWithFolder:(NSURL *)folder;

@end

@interface SnailChatUIBubbleObjc(Private)

- (UIEdgeInsets)takeLeftSafeInsets;
- (UIEdgeInsets)takeRightSafeInsets;

@end

NS_ASSUME_NONNULL_END
