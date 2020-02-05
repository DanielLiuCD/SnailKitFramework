//
//  SnailChatUIFaceController.h
//  SnailKit
//
//  Created by liu on 2019/12/30.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SnailChatUIFaceObjc.h"
#import "SnailChatUIFaceContentViewProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@protocol SnailChatUIFaceControllerProtocol <NSObject>

@required
- (void)SnailChatUIFaceControllerDidSelectedToolKit:(SnailChatUIFaceToolKitObjc *)objc;
- (void)SnailChatUIFaceControllerCustomeView:(UIView<SnailChatUIFaceContentViewProtocol> *)customeView Objc:(SnailChatUIFaceCustomeObjc *)objc;

- (void)SnailChatUIFaceControllerRemoteUrl:(NSString *)url ImageView:(UIImageView *)imageView;
- (void)SnailChatUIFaceControllerDidSelectedFace:(NSString *)facePath Url:(NSString *)url;

@end

@interface SnailChatUIFaceController : UIViewController

@property (nonatomic ,weak) id<SnailChatUIFaceControllerProtocol> protocol;

- (void)appendFaceObjc:(SnailChatUIFaceObjc *)faceObjc;
- (void)appendFaceObjecs:(NSArray<SnailChatUIFaceObjc *> *)faceObjecs;

@end

NS_ASSUME_NONNULL_END
