//
//  SnailChatUIMessageIndicatorDefaultObjc.h
//  SnailKit
//
//  Created by liu on 2019/12/18.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import "SnailChatUIMessageIndicatorBaseObjc.h"

@protocol SnailChatUIMessageIndicatorDefaultObjcProtocol <NSObject>

@required
- (void)SnailChatUIMessageIndicatorDefaultObjcReadedChange;

@end

@interface SnailChatUIMessageIndicatorDefaultObjc : SnailChatUIMessageIndicatorBaseObjc

@property (nonatomic ,strong) UIColor *indicatorColor; //指示器颜色
@property (nonatomic) BOOL readed; //是否已读
@property (nonatomic ,strong) UIColor *readLblColor;

@end
