//
//  SnailChatUIFaceContentCell.h
//  SnailKit
//
//  Created by liu on 2019/12/30.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SnailChatUIFaceObjc.h"

@protocol SnailChatUIFaceContentImageViewProtocol <NSObject>

@required
- (void)SnailChatUIFaceContentImageViewRemoteUrl:(NSString *)url ImageView:(UIImageView *)imageView;
- (void)SnailChatUIFaceContentImageViewDidSelectedFace:(NSString *)facePath Url:(NSString *)url;

@end

@interface SnailChatUIFaceContentImageView : UIView

@property (nonatomic ,weak) id<SnailChatUIFaceContentImageViewProtocol> protocol;

- (void)configuewWithObjc:(SnailChatUIFaceContentImageObjc *)objc;

@end
