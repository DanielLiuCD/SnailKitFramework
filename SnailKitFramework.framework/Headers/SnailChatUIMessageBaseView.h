//
//  SnailChatUIConversionView.h
//  SnailKit
//
//  Created by liu on 2019/12/17.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SnailChatUIBaseMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface SnailChatUIMessageBaseView : UIView

@property (nonatomic ,strong) UIView *topContainerView;
@property (nonatomic ,strong) UIView *middleContainerView;
@property (nonatomic ,strong) UIView *bottomContainerView;

@property (nonatomic ,strong) UIView *timeContainer;
@property (nonatomic ,strong) UILabel *timeLbl;

- (void)configureWithMessage:(SnailChatUIBaseMessage *)message;

@end

@interface SnailChatUIMessageBaseView(Private)

@property (nonatomic ,weak) SnailChatUIBaseMessage *____message;

- (void)clear;

@end

NS_ASSUME_NONNULL_END
