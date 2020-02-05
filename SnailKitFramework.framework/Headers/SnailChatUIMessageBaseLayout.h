//
//  SnailChatUIConversionLayout.h
//  SnailKit
//
//  Created by liu on 2019/12/17.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SnailChatUIMessageBaseLayout : NSObject

@property (nonatomic) CGRect topContainerViewFrame;
@property (nonatomic) CGRect middleContainerViewFrame;
@property (nonatomic) CGRect bottomContainerViewFrame;

@property (nonatomic) CGRect timeContainerFrame;
@property (nonatomic) CGRect timeFrame;

///message 的 rect
@property (nonatomic) CGSize size;

@end

NS_ASSUME_NONNULL_END
