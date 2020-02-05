//
//  SnailChaUIBaseConversationController.h
//  SnailKit
//
//  Created by liu on 2019/12/28.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SnailChatUIMessage.h"
#import "SnailChatUITextMessage.h"
#import "SnailChatUIImageMessage.h"
#import "SnailChatUIVoiceMessage.h"
#import "SnailChatUIVideoMessage.h"
#import "SnailChatUINotifyMessage.h"
#import "SnailChatUIMessageView.h"
#import "SnailChatUIExtensionItem.h"
#import "SnailChatUIFaceObjc.h"

@interface SnailChaUIConversationController : UIViewController

@end

@interface SnailChaUIConversationController(Public)

///注册自定义消息
- (void)registerCustomeMessage:(Class)messageClass View:(Class)viewClass Identifer:(NSString *)identifer;
///自定义消息将要显示
- (void)customeMessageDisplay:(SnailChatUIMessage *)message View:(UIView *)view;

///设置是否显示名称
- (void)setDisplayName:(BOOL)displayName;
///设置背景
- (void)setBackgroundImage:(UIImage *)img;
- (void)setBackgroundImageUrl:(NSString *)imageUrl;

///显示网络图片
- (void)remoteImage:(UIImageView *)imageView Url:(NSString *)url;

///返回自定义指示器视图的view
- (Class)SnailChatUIMessageViewTakeCustomeIndicatorViewClass:(SnailChatUIMessage *)message;

///插入消息
- (void)appendMessage:(SnailChatUIBaseMessage *)message;
- (void)appendMessages:(NSArray<SnailChatUIBaseMessage *> *)messages;

///设置显示时间的间隔 默认180秒
- (void)setDisplayTimeSpace:(NSTimeInterval)time;

///更新自定义输入框高度
- (void)updateCustomeInputBarHeight:(CGFloat)inputBarHeight;
///自定义输入框
- (void)setCustomeInputBar:(UIView *)customeInputBar;

///头像点击
- (void)didSelectedHeadWithIndexPath:(NSIndexPath *)indexPath Message:(SnailChatUIBaseMessage *)message;
///图片点击
- (void)didSelectedImageWithIndexPath:(NSIndexPath *)indexPath Message:(SnailChatUIImageMessage *)message;
///音频点击
- (void)didSelectedVoiceWithIndexPath:(NSIndexPath *)indexPath Message:(SnailChatUIVoiceMessage *)message;
///视频点击
- (void)didSelectedVideoWithIndexPath:(NSIndexPath *)indexPath Message:(SnailChatUIVideoMessage *)message;
///发送失败指示器点击
- (void)didSelectedIndicatorErrorWithIndexPath:(NSIndexPath *)indexPath Message:(SnailChatUIBaseMessage *)message;

///添加长按弹框选项
- (void)appendPopMenuItemWithTitles:(NSArray<NSString *> *)titles;
///添加长按弹框选项某一特定消息
- (void)appendPopMenuItemWithTitles:(NSArray<NSString *> *)titles Message:(Class)messageClass;

///长按弹框点击事件
- (void)popMenuDidSelected:(NSString *)title IndexPath:(NSIndexPath *)indexPath Message:(SnailChatUIBaseMessage *)message;

///播放音频
- (void)playVoiceAtIndexPath:(NSIndexPath *)indexPath;
///停止当前正在播放的音频
- (void)stopCurrentPlayingVoice;

///音频录制完成
- (void)voiceRecodeSuccess:(NSURL *)voicePath Duration:(NSTimeInterval)duration;

///选择表情 表情有url才会有
- (void)didSelectedFace:(NSString *)facePath Url:(NSString *)url;

///点击扩展
- (void)didSelectedExtendsion:(NSInteger)tag;
///点击表情工具栏
- (void)didSelectedFaceToolKit:(SnailChatUIFaceToolKitObjc *)objc;

///添加扩展
- (void)appendExtendsionItem:(SnailChatUIExtensionItem *)item;
- (void)appendExtendsionItems:(NSArray<SnailChatUIExtensionItem *> *)items;

///移除扩展
- (void)removeExtendsionItemWithTag:(NSInteger)tag;
- (void)removeExtendsionItemWithTags:(NSArray<NSNumber *> *)tags;

///添加表情
- (void)appendFaceObjc:(SnailChatUIFaceObjc *)faceObjc;
- (void)appendFaceObjecs:(NSArray<SnailChatUIFaceObjc *> *)faceObjecs;

@end
