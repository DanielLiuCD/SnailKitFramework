//
//  SnailChatConversationListUIManager.h
//  SnailKit
//
//  Created by liu on 2020/1/21.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface SnailChatConversationListUIManager : NSObject<NSCopying>

@property (nonatomic ,strong) UIFont *titleFont;
@property (nonatomic ,strong) UIColor *titleColor;

@property (nonatomic ,strong) UIFont *contentFont;
@property (nonatomic ,strong) UIColor *contentColor;

@property (nonatomic ,strong) UIFont *timeFont;
@property (nonatomic ,strong) UIColor *timeColor;

@property (nonatomic) CGSize iconSize;
@property (nonatomic) CGFloat iconLeading;
@property (nonatomic) CGFloat iconTop;

@end

