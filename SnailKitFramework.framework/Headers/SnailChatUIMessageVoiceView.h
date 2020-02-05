//
//  SnailChatUIMessageVoiceView.h
//  SnailKit
//
//  Created by liu on 2019/12/17.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import "SnailChatUIMessageView.h"

NS_ASSUME_NONNULL_BEGIN

@interface SnailChatUIMessageVoiceView : SnailChatUIMessageView

@property (nonatomic ,strong) UIImageView *imageView;
@property (nonatomic ,strong) UILabel *durationLbl;

///播放
- (void)playAction;
///停止
- (void)stopAction;

@end

NS_ASSUME_NONNULL_END
