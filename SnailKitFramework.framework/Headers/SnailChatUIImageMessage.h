//
//  SnailChatUIImageMessage.h
//  SnailKit
//
//  Created by liu on 2019/12/25.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import "SnailChatUIMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface SnailChatUIImageMessage : SnailChatUIMessage

///图片本地路径
@property (nonatomic ,strong) NSString *filePath;
///图片服务器地址
@property (nonatomic ,strong) NSString *remoteFilePath;
@property (nonatomic) CGSize imageSize;

@end

NS_ASSUME_NONNULL_END
