//
//  SnailChatUIInputController.h
//  SnailKit
//
//  Created by liu on 2020/1/6.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SnailChatUIFaceObjc.h"
#import "SnailChatUIExtensionItem.h"

typedef NS_ENUM(NSInteger,SnailChatUIInputControllerType) {
    ///空白
    SnailChatUIInputControllerType_Empty,
    ///表情视图
    SnailChatUIInputControllerType_FACE,
    ///扩展视图
    SnailChatUIInputControllerType_EXTEND,
};

@protocol SnailChatUIInputControllerProtocol <NSObject>

/*-------------------展开关闭------------------*/
- (void)SnailChatUIInputControllerHaveOpen;
- (void)SnailChatUIInputControllerHaveClose;
- (void)SnailChatUIInputControllerHeightChange:(CGFloat)height;

/*-------------------语言录制------------------*/
- (void)SnailChatUIInputControllerVoiceInputDownAction;
- (void)SnailChatUIInputControllerVoiceInputUpInSideAction;
- (void)SnailChatUIInputControllerVoiceInputUpOutSideAction;
- (void)SnailChatUIInputControllerVoiceInputDragOutSideAction;
- (void)SnailChatUIInputControllerVoiceInputDragInSideAction;

/*-------------------表情------------------*/
- (void)SnailChatUIInputControllerFaceRemoteUrl:(NSString *)url ImageView:(UIImageView *)imageView;
- (void)SnailChatUIInputControllerDidSelectedFace:(NSString *)facePath Url:(NSString *)url;
- (void)SnailChatUIInputControllerDidSelectedToolKit:(SnailChatUIFaceToolKitObjc *)objc;

/*--------------------扩展-------------------*/
- (void)SnailChatUIInputControllerDidSelectedExtension:(NSInteger)tag;

@end

@interface SnailChatUIInputController : UIViewController

@property (nonatomic ,readonly) BOOL voiceInput;
@property (nonatomic ,readonly) BOOL open;
@property (nonatomic ,readonly) SnailChatUIInputControllerType type;
@property (nonatomic ,weak) id<SnailChatUIInputControllerProtocol> protocol;

- (void)openWithType:(SnailChatUIInputControllerType)type;
- (void)close;

- (void)appendItem:(SnailChatUIExtensionItem *)item;
- (void)appendItems:(NSArray<SnailChatUIExtensionItem *> *)items;

- (void)removeItemWithTag:(NSInteger)tag;
- (void)removeItemWithTags:(NSArray<NSNumber *> *)tags;

- (void)appendFaceObjc:(SnailChatUIFaceObjc *)faceObjc;
- (void)appendFaceObjecs:(NSArray<SnailChatUIFaceObjc *> *)faceObjecs;

@end
