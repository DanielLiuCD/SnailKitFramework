//
//  SnailChatUIMessageDefaultIndicatorView.h
//  SnailKit
//
//  Created by liu on 2019/12/17.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import "SnailChatUIMessageIndicatorBaseView.h"
#import "SnailChatUIDefine.h"

NS_ASSUME_NONNULL_BEGIN

@interface SnailChatUIMessageDefaultIndicatorView : SnailChatUIMessageIndicatorBaseView

@property (nonatomic ,strong) UIActivityIndicatorView *indicatorView;
@property (nonatomic ,strong) UIButton *errorBtn;
@property (nonatomic ,strong) UILabel *readedStatusLbl;

- (void)setType:(SnailChatUIIndicatorType)indicatorType;

@end

NS_ASSUME_NONNULL_END
