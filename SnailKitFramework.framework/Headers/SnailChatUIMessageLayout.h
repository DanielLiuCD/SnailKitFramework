//
//  SnailChatUIMessageLayout.h
//  SnailKit
//
//  Created by liu on 2019/12/17.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import "SnailChatUIMessageBaseLayout.h"

NS_ASSUME_NONNULL_BEGIN

@interface SnailChatUIMessageLayout : SnailChatUIMessageBaseLayout

@property (nonatomic) CGRect headContainerFrame;
@property (nonatomic) CGRect contentContainerFrame;
@property (nonatomic) CGRect indicatorContainerFrame;

@property (nonatomic) CGRect headFrame;

@property (nonatomic) CGRect nameFrame;
@property (nonatomic) CGRect bubbleFrame;
@property (nonatomic) CGRect contentFrame;

@end

NS_ASSUME_NONNULL_END
