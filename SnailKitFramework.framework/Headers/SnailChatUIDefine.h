//
//  SnailChatUIDefine.h
//  SnailKit
//
//  Created by liu on 2019/12/17.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#ifndef SnailChatUIDefine_h
#define SnailChatUIDefine_h

typedef NS_ENUM(NSInteger ,SnailChatUILayoutDirection) {
    ///left layout
    SnailChatUILayoutDirection_Left,
    ///right layout
    SnailChatUILayoutDirection_Right,
};

typedef NS_ENUM(NSInteger ,SnailChatUIHeadShapeStyle) {
    ///矩形
    SnailChatUIHeadShapeStyle_Rect,
    ///圆角矩形
    SnailChatUIHeadShapeStyle_Radius,
    ///圆形
    SnailChatUIHeadShapeStyle_Circle,
};

typedef NS_ENUM(NSInteger ,SnailChatUIHeadLocationType) {
    ///头像在上
    SnailChatUIHeadLocationType_Top,
    ///头像在中
    SnailChatUIHeadLocationType_Middle,
    ///头像在下
    SnailChatUIHeadLocationType_Bottom,
};

typedef NS_ENUM(NSInteger ,SnailChatUIIndicatorType) {
    ///指示器
    SnailChatUIIndicatorType_HUD,
    ///错误
    SnailChatUIIndicatorType_Error,
    ///消息是否已读状态
    SnailChatUIIndicatorType_ReadedStatus,
    ///自定义
    SnailChatUIIndicatorType_Custome,
};

typedef NS_ENUM(NSInteger ,SnailChatUIMessageType) {
    SnailChatUIMessageType_TEXT,
    SnailChatUIMessageType_IMAGE,
    SnailChatUIMessageType_VOICE,
    SnailChatUIMessageType_VIDEO,
    SnailChatUIMessageType_NOTIFY,
    SnailChatUIMessageType_CUSTOME,
};

#endif /* SnailChatUIDefine_h */
