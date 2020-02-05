//
//  SnailChatUIMessageView.h
//  SnailKit
//
//  Created by liu on 2019/12/17.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import "SnailChatUIMessageBaseView.h"
#import "SnailChatUIMessageDefaultIndicatorView.h"
#import "SnailChatUIMessageBubbleView.h"
#import "SnailChatUIMessage.h"

NS_ASSUME_NONNULL_BEGIN

@class SnailChatUIMessageView;

@protocol SnailChatUIMessageViewProtocol <NSObject>

@required
- (Class)SnailChatUIMessageViewTakeCustomeIndicatorViewClass:(SnailChatUIMessage *)message;

- (void)SnailChatUIMessageViewRemoteImage:(UIImageView *)imageView Path:(NSString *)path;

@optional
- (void)SnailChatUIMessageViewDidClickHead:(SnailChatUIMessageView *)messageView;

- (void)SnailChatUIMessageViewDidClickErrorIndicator:(SnailChatUIMessageView *)messageView;

- (void)SnailChatUIMessageViewDidClickImage:(SnailChatUIMessageView *)messageView;

- (void)SnailChatUIMessageViewDidClickVideo:(SnailChatUIMessageView *)messageView;

- (void)SnailChatUIMessageViewDidClickVoice:(SnailChatUIMessageView *)messageView;

@end

@interface SnailChatUIMessageView : SnailChatUIMessageBaseView

@property (nonatomic ,strong) UIView *headContainerView;
@property (nonatomic ,strong) UIView *contentContainerView;
@property (nonatomic ,strong) UIView *indicatorContainerView;

@property (nonatomic ,weak) id<SnailChatUIMessageViewProtocol> protocol;

/*------------------headContainerView-------------------------*/
@property (nonatomic ,strong) UIImageView *headImageView;

/*------------------indicatorContainerView-------------------------*/
@property (nonatomic ,strong) SnailChatUIMessageDefaultIndicatorView *indicatorView;

/*------------------contentContainerView-------------------------*/
@property (nonatomic ,strong) UILabel *nameLbl;
@property (nonatomic ,strong) SnailChatUIMessageBubbleView *bubbleView;
@property (nonatomic ,strong) UIView *contentView;

@end

NS_ASSUME_NONNULL_END
