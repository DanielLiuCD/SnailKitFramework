//
//  SnailChatUIVideoMessage.h
//  SnailKit
//
//  Created by liu on 2019/12/25.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import "SnailChatUIMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface SnailChatUIVideoMessage : SnailChatUIMessage

@property (nonatomic ,strong) NSString *filePath;
///视频服务器地址
@property (nonatomic ,strong) NSString *remoteFilePath;
@property (nonatomic) NSTimeInterval duration;

@property (nonatomic ,strong) NSString *coverFilePath;
@property (nonatomic ,strong) NSString *remoteCoverFilePath;
@property (nonatomic) CGSize coverSize;

@end

@interface SnailChatUIVideoMessage(Private)

@property (nonatomic ,readonly) NSString *durationString;
@property (nonatomic ,readonly) CGSize durationStringSize;
@property (nonatomic ,readonly) NSAttributedString *durationAttributeString;

@end

NS_ASSUME_NONNULL_END
