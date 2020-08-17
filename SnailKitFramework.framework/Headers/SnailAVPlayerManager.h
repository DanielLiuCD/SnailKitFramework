//
//  SnailAVPlayerManager.h
//  SnailKit
//
//  Created by liu on 2020/2/6.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVKit/AVKit.h>

@class SnailAVPlayerView;

@interface UIView(SnailAVPlayerView)

- (SnailAVPlayerView *)snail_avplayer_view;
- (void)snail_play_video_with_url:(NSURL *)url;
- (void)snail_replay_video_with_url:(NSURL *)url;
- (void)snail_stop_video_with_url:(NSURL *)url;
- (void)snail_pause_video_with_url:(NSURL *)url;

@end

@interface SnailAVPlayerView : NSObject

@property (nonatomic ,readonly) AVPlayerLayer *layer;

@end

@interface SnailAVPlayerVideo : NSObject

@property (nonatomic,copy) void(^prepareToPlayBlock)(void);
@property (nonatomic,copy) void(^playDoneBlock)(void);
@property (nonatomic,copy) void(^playErrorBlock)(void);
@property (nonatomic,copy) void(^playProgressBlock)(NSTimeInterval time,NSTimeInterval prepareTime,NSTimeInterval duration);
@property (nonatomic ,readonly) NSURL *url;

@property (nonatomic) BOOL circlePlay; //是否循环播放

- (SnailAVPlayerView *)displayOnView:(UIView *)view;

- (void)stop;

- (void)pause;
- (void)play;
- (void)replay;

@end

@interface SnailAVPlayerManager : NSObject

+ (instancetype)shared;

- (SnailAVPlayerVideo *)playVideoWithUrl:(NSURL *)url;

- (SnailAVPlayerVideo *)takeVideoWithUrl:(NSURL *)url;

@end
