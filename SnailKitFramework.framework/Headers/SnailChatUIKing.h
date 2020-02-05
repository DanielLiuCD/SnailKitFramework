//
//  SnailChatUIKing.h
//  SnailKit
//
//  Created by liu on 2020/1/6.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SnailChatUIManager.h"
#import "SnailChatConversationListUIManager.h"

@interface SnailChatUIKing : NSObject

@property (nonatomic ,strong ,readonly) SnailChatUIManager *uiManager;
@property (nonatomic ,strong ,readonly) SnailChatConversationListUIManager *listManager;

+ (instancetype)king;

/*---------------------Face------------------------*/
- (void)appendFace:(NSURL *)faceUrl;
- (void)appendFaces:(NSArray<NSURL *> *)faceUrls;

///库 管理本地表情  用于将下载的表情移动到库的表情文件夹中进行管理
- (void)localeManageFace:(NSURL *)faceLocaleUrl;
- (void)removeLocaleManageFace:(NSURL *)faceLocaleUrl;

///移除表情 如果是内存中的url会先移除url 如果是本地库管理的表情会移除本地的表情
- (void)removeFace:(NSURL *)faceUrl;
- (void)removeFaces:(NSArray<NSURL *> *)faces;

///获取所有的表情
- (NSArray<NSURL *> *)takeFaces;

@end
