//
//  SnailChatUIExtensionItem.h
//  SnailKit
//
//  Created by liu on 2019/12/30.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SnailChatUIExtensionItem : NSObject

@property (nonatomic ,strong) NSString *title;
@property (nonatomic ,strong) UIImage *image;
///唯一标识item
@property (nonatomic) NSInteger tag;

@end

NS_ASSUME_NONNULL_END
