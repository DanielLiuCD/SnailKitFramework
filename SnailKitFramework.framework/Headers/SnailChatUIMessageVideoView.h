//
//  SnailChatUIMessageVideoView.h
//  SnailKit
//
//  Created by liu on 2019/12/17.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import "SnailChatUIMessageView.h"

NS_ASSUME_NONNULL_BEGIN

@interface SnailChatUIMessageVideoView : SnailChatUIMessageView

@property (nonatomic ,strong) UIImageView *imageView;
@property (nonatomic ,strong) UIButton *playBtn;
@property (nonatomic ,strong) UILabel *durationTitleLbl;

@end

NS_ASSUME_NONNULL_END
