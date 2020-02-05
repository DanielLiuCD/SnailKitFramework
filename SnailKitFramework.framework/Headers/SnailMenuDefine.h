//
//  SnailMenuDefine.m
//  SnailKit
//
//  Created by liu on 2020/1/4.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger ,SnailMenuBarAskOrderType) {
    ///询问是否可以选中时 依次先后询问在向前询问
    SnailMenuBarAskOrderType_Right,
    ///询问是否可以选中时 依次先前询问在向后询问
    SnailMenuBarAskOrderType_Left,
};
