//
//  SnailAudioRecord.h
//  YingKeBao
//
//  Created by JobNewMac1 on 2018/7/9.
//  Copyright © 2018年 com.jonnew. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SnailAudioHeader.h"

@interface SnailAudioRecorder : NSObject

@property (nonatomic ,copy) void(^powerLevelBlock)(SnailAudioRecordLevel level);
@property (nonatomic ,copy) NSTimeInterval(^miniTimeBlock)(void);
@property (nonatomic ,copy) NSTimeInterval(^maxTimeBlock)(void);  //时间不能小于3秒
@property (nonatomic ,copy) NSString *(^savePathBlock)(void);
@property (nonatomic ,copy) void(^willRecordBlock)(void);
@property (nonatomic ,copy) void(^clearBlock)(void);
@property (nonatomic ,copy) void(^recordTimeBlock)(NSTimeInterval maxTime ,NSTimeInterval currentTime);
@property (nonatomic ,copy) void(^successBlock)(NSURL *path,NSTimeInterval totalTime);
@property (nonatomic ,copy) void(^faliedBlock)(SnailAudioRecordErrorType type);
@property (nonatomic ,copy) void(^cancleRecordBlock)(void);

- (void)startRecord;

- (void)stopRecord;

- (void)cancleRecord;

- (void)clear;

@end
