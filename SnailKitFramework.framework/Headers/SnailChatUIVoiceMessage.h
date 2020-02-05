//
//  SnailChatUIVoiceMessage.h
//  SnailKit
//
//  Created by liu on 2019/12/25.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import "SnailChatUIMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface SnailChatUIVoiceMessage : SnailChatUIMessage

@property (nonatomic ,strong) NSString *filePath;
@property (nonatomic) NSTimeInterval duration;

@end

@interface SnailChatUIVoiceMessage(Private)

@property (nonatomic ,readonly) NSString *durationString;
@property (nonatomic ,readonly) NSAttributedString *durationAttributeString;
@property (nonatomic ,readonly) CGSize durationStringSize;

@end

@interface SnailChatUIVoiceMessage(Public)

@property (nonatomic ,readonly) BOOL playing;

@end

NS_ASSUME_NONNULL_END
