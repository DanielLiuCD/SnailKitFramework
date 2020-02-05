//
//  SnailChatUIManager.h
//  SnailKit
//
//  Created by liu on 2019/12/17.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SnailChatUIDefine.h"

NS_ASSUME_NONNULL_BEGIN

@interface SnailChatUIManager : NSObject<NSCopying>

///消息与消息之间的距离
@property (nonatomic) CGFloat spaceing;

///内容与界面边界前后距离
@property (nonatomic) CGFloat padding;

///头像与content之间的距离
@property (nonatomic) CGFloat headSpaceing;
@property (nonatomic) SnailChatUIHeadLocationType headLocationType;
@property (nonatomic) CGSize headSize;
@property (nonatomic) SnailChatUIHeadShapeStyle headShapeStyle;
@property (nonatomic) CGFloat headRadius;
@property (nonatomic) CGFloat headBorderValue;
@property (nonatomic) BOOL headerBorder;
@property (nonatomic ,strong) UIColor *headBorderColor;

@property (nonatomic ,strong) UIFont *messageNameFont;
@property (nonatomic ,strong) UIColor *messageNameColor;
///名称与内容或气泡之间的距离
@property (nonatomic) CGFloat messageNameSpaceing;

@property (nonatomic ,strong) UIFont *timeFont;
@property (nonatomic ,strong) UIColor *timeColor;
@property (nonatomic ,strong) UIColor *timeBackgroundColor;

@property (nonatomic ,strong) UIFont *notifyMessageFont;
@property (nonatomic ,strong) UIColor *notifyMessageColor;
@property (nonatomic ,strong) UIColor *notifyBackgroundColor;
///通知文字与背景的距离
@property (nonatomic) UIEdgeInsets notifyPadding;

@property (nonatomic ,strong) UIFont *textMessageFont;
@property (nonatomic ,strong) UIColor *textMessageColor;
///文字与四周的距离
@property (nonatomic) UIEdgeInsets textPadding;

///语音的最长时长，用于计算语音消息的长度
@property (nonatomic) NSTimeInterval voiceMaxDuration;
///语音最大的宽度比例
@property (nonatomic) CGFloat voiceWidthMaxScale;
@property (nonatomic ,strong) UIFont *voiceFont;
@property (nonatomic ,strong) UIColor *voiceColor;
///语音图标与气泡边缘的距离
@property (nonatomic) CGFloat voicePadding;
///语音图标与语言时长文字之间的距离
@property (nonatomic) CGFloat voiceSpaceing;
///语言图标的size
@property (nonatomic) CGSize voiceIconSize;

///图片最大的宽度比例
@property (nonatomic) CGFloat imageWidthMaxScale;
///图片最大的高度比例
@property (nonatomic) CGFloat imageHeightMaxScale;

@property (nonatomic ,strong) UIFont *videoFont;
@property (nonatomic ,strong) UIColor *videoColor;
///视频图标的size
@property (nonatomic) CGSize videoIconSize;

@end

NS_ASSUME_NONNULL_END
