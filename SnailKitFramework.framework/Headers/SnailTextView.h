//
//  LNTextView.h
//  SZHangKongIMIOS
//
//  Created by JobNewMac1 on 2017/12/11.
//  Copyright © 2017年 com.jobnew. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
    @class     LNTextView
    @brief     具有PlaceHolder的TextView.
    @details   一个具有PlaceHolder的TextView.
 */
@interface SnailTextView : UITextView

///占位字符
@property (nonatomic ,strong) NSString *placeHolder;
///占位字符的颜色
@property (nonatomic ,strong) UIColor *placeHolderColor;
///数字改变回调
@property (nonatomic ,copy) void(^textChangedBlock)(UITextView *textView);
///可输入的最大字符数
@property (nonatomic) NSInteger characterNumberLimit;

@end
