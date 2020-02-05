//
//  SnailChatUIFaceContent.h
//  SnailKit
//
//  Created by liu on 2019/12/30.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SnailChatUIFaceObjc.h"
#import "SnailChatUIFaceContentViewProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@protocol SnailChatUIFaceContentProtocol <NSObject>

@required
- (void)SnailChatUIFaceContentDidSelectedAtIndex:(NSInteger)index;
- (void)SnailChatUIFaceContentCustomeView:(UIView<SnailChatUIFaceContentViewProtocol> *)view Objc:(SnailChatUIFaceCustomeObjc *)objc;

- (void)SnailChatUIFaceContentImageViewRemoteUrl:(NSString *)url ImageView:(UIImageView *)imageView;
- (void)SnailChatUIFaceContentImageViewDidSelectedFace:(NSString *)facePath Url:(NSString *)url;

@end

@interface SnailChatUIFaceContent : UIView

@property (nonatomic ,weak) id<SnailChatUIFaceContentProtocol> protocol;

//注入显示的 数据源
- (void)registerDisplaySource:(NSArray<SnailChatUIFaceObjc *> *)source;

- (void)registerCustomeObjc:(SnailChatUIFaceCustomeObjc *)objc;

- (void)selectedAtIndex:(NSInteger)index;

- (void)reload;

@end

NS_ASSUME_NONNULL_END
