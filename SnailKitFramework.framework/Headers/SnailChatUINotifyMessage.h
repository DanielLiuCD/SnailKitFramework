//
//  SnailChatUINotifyMessage.h
//  SnailKit
//
//  Created by liu on 2020/1/2.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import "SnailChatUIBaseMessage.h"

@interface SnailChatUINotifyMessage : SnailChatUIBaseMessage

@property (nonatomic ,strong) NSString *text;

///返回显示类容的大小
- (CGSize)contentSize;

@end
