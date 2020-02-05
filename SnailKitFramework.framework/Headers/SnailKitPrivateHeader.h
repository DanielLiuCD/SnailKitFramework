//
//  SnailKitPrivateHeader.m
//  SnailKit
//
//  Created by liu on 2020/2/5.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#define SNAILKIT_CURRENT_BUNDLE [NSBundle bundleForClass:self.class]
#define SNAILKIT_ASSETS_BUNDLE [NSBundle bundleWithPath:[SNAILKIT_CURRENT_BUNDLE pathForResource:@"SnailKitAssets" ofType:@"bundle"]]
#define SNAILKIT_IMAGE_NAME(NAME) [UIImage imageNamed:NAME inBundle:SNAILKIT_ASSETS_BUNDLE compatibleWithTraitCollection:nil]
#define SNAILKIT_CHATUI_DEFAULT_BUNDLE_PATH [SNAILKIT_ASSETS_BUNDLE pathForResource:@"SnailChatUIDefaultBubble" ofType:@"bundle"]
#define SNAILKIT_CHATUI_DEFAULT_BUNDLE [NSBundle bundleWithPath:SNAILKIT_CHATUI_DEFAULT_BUNDLE_PATH]
