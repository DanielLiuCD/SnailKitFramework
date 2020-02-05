//
//  SnailChatConversationListObject.h
//  SnailKit
//
//  Created by liu on 2020/1/21.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SnailChatConversationListLayout : NSObject

@property (nonatomic) CGRect iconFrame;
@property (nonatomic) CGRect titleFrame;
@property (nonatomic) CGRect contentFrame;
@property (nonatomic) CGRect timeFrame;
@property (nonatomic) CGRect badgeFrame;

@property (nonatomic) CGFloat height;

@end

@class SnailChatConversationListObject;

@protocol SnailChatConversationListObjectProtocol <NSObject>

@required
- (SnailChatConversationListLayout *)SnailChatConversationListObject_Takelayout:(SnailChatConversationListObject *)object;

- (void)SnailChatConversationListObject_Update:(SnailChatConversationListObject *)object;

- (CGRect)SnailChatConversationListObject_TakeBadgeFrame:(SnailChatConversationListObject *)object;

@end

@interface SnailChatConversationListBaseObject : NSObject

@property (nonatomic) BOOL sticky;

@end

@interface SnailChatConversationListObject : SnailChatConversationListBaseObject

@property (nonatomic ,strong) NSArray<NSString *> *icons;
@property (nonatomic ,strong) NSString *title;
@property (nonatomic ,strong) NSString *content;
@property (nonatomic ,strong) NSString *time;
@property (nonatomic ,strong) NSString *badge;

- (void)clear;
- (void)update;

@end

@interface SnailChatConversationListCustomeObject : SnailChatConversationListBaseObject

@property (nonatomic) CGFloat height;

@end
