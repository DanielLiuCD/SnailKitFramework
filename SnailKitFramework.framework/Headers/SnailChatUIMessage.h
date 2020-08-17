//
//  SnailChatUIMessage.h
//  SnailKit
//
//  Created by liu on 2019/12/17.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import "SnailChatUIBaseMessage.h"
#import "SnailChatUIBubbleObjc.h"
#import "SnailChatUIMessageIndicatorDefaultObjc.h"
#import "SnailChatUIMessageLayout.h"

@class SnailChatUIMessage;

NS_ASSUME_NONNULL_BEGIN

@protocol SnailChatUIMessageProtocol <NSObject>

@optional
///获取消息气泡
- (SnailChatUIBubbleObjc *)snailChatUIMessageGetBubble:(SnailChatUIMessage *)message;
///获取是否显示名称
- (BOOL)snailChatUIMessageGetDisplayName:(SnailChatUIMessage *)message;


@end

@interface SnailChatUIMessage : SnailChatUIBaseMessage

@property (nonatomic) SnailChatUILayoutDirection direction;

@property (nonatomic ,strong) NSString *headUrl;
@property (nonatomic ,strong) NSString *name;

///指示器类型
@property (nonatomic) SnailChatUIIndicatorType indicatorType;
///指示器是否显示
@property (nonatomic) BOOL indicatorShow;
///默认指示器的数据模型
@property (nonatomic ,readonly) SnailChatUIMessageIndicatorDefaultObjc *indicatorObjc;
///自定义指示器的数据模型
@property (nonatomic ,strong) SnailChatUIMessageIndicatorBaseObjc *customeIndicatorObjc;

///特别处理 如果某个消息需要单独设置气泡样式使用 优先级最高
@property (nonatomic ,strong) SnailChatUIBubbleObjc *bubbleObjc;

///用于存储自定义数据
@property (nonatomic ,strong) id extendObjc;

///返回显示类容的大小
- (CGSize)contentSize;

@end

@interface SnailChatUIMessage(Private)

@property (nonatomic ,weak) id<SnailChatUIMessageProtocol> ___protocol;
@property (nonatomic ,readonly) NSAttributedString *nameAttributeString;

- (SnailChatUIBubbleObjc *)takeBubble;

- (BOOL)takeDisplayName;

///获取content的合理的宽度
- (CGFloat)takeContentAvailableWidth;

///返回名称的size
- (CGSize)takeNameSize;

@end

NS_ASSUME_NONNULL_END
