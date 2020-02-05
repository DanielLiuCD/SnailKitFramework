//
//  SnailChatUIBaseMessage.h
//  SnailKit
//
//  Created by liu on 2020/1/2.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SnailChatUIManager.h"
#import "SnailChatUIMessageBaseLayout.h"
#import "SnailChatUIDefine.h"

@class SnailChatUIBaseMessage;

@protocol SnailChatUIBaseMessageProtocol <NSObject>

@optional
///获取消息显示界面的宽度
- (CGFloat)snailChatUIMessageGetWidth:(SnailChatUIBaseMessage *)message;
///获取消息显示界面的高度
- (CGFloat)snailChatUIMessageGetHeight:(SnailChatUIBaseMessage *)message;
///获取消息显示配置
- (SnailChatUIManager *)snailChatUIMessageGetUIManager:(SnailChatUIBaseMessage *)message;
///获取布局
- (SnailChatUIMessageBaseLayout *)snailChatUIMessageGetLayout:(SnailChatUIBaseMessage *)message;

@end

@interface SnailChatUIBaseMessage : NSObject

@property (nonatomic) NSTimeInterval timestamp;
@property (nonatomic) BOOL displayTime;
@property (nonatomic ,readonly) NSString *timeString;

@property (nonatomic ,readonly) SnailChatUIMessageType type;

///特别处理 如果某个消息需要单独设置 优先级最高
@property (nonatomic) CGFloat width;
///特别处理 如果某个消息需要单独设置 优先级最高
@property (nonatomic) CGFloat height;
///特别处理 如果某个消息需要单独设置 优先级最高
@property (nonatomic ,strong) SnailChatUIManager *manager;

//刷新数据前请先调用clear
//子类先调用父类的clear
- (void)clear;

@end

@interface SnailChatUIBaseMessage(Private)

@property (nonatomic ,weak) id<SnailChatUIBaseMessageProtocol> ___baseProtocol;

- (CGFloat)takeUIWidth;
- (CGFloat)takeUIHeight;
- (SnailChatUIManager *)takeUIManage;
///layout
- (SnailChatUIMessageBaseLayout *)takeLayout;

- (void)setType:(SnailChatUIMessageType)type;

///获取时间的尺寸
- (CGSize)takeTimeSize;

@end

