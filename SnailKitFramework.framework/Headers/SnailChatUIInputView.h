//
//  SnailChatUIInputView.h
//  SnailKit
//
//  Created by liu on 2020/1/2.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SnailChatUIInputView;

@protocol SnailChatUIInputViewProtocol <NSObject>

@required
- (void)SnailChatUIInputViewVoiceAction:(SnailChatUIInputView *)inputView;
- (void)SnailChatUIInputViewFaceAction:(SnailChatUIInputView *)inputView;
- (void)SnailChatUIInputViewExtendAction:(SnailChatUIInputView *)inputView;
- (void)SnailChatUIInputViewKeyboardAction:(SnailChatUIInputView *)inputView;

- (void)SnailChatUIInputViewVoiceInputDownAction:(SnailChatUIInputView *)inputView;
- (void)SnailChatUIInputViewVoiceInputUpInSideAction:(SnailChatUIInputView *)inputView;
- (void)SnailChatUIInputViewVoiceInputUpOutSideAction:(SnailChatUIInputView *)inputView;
- (void)SnailChatUIInputViewVoiceInputDragOutSideAction:(SnailChatUIInputView *)inputView;
- (void)SnailChatUIInputViewVoiceInputDragInSideAction:(SnailChatUIInputView *)inputView;

@end

@interface SnailChatUIInputView : UIView

@property (nonatomic ,weak) id<SnailChatUIInputViewProtocol> protocol;

@property (nonatomic ,strong) UIButton *voiceBtn;
@property (nonatomic ,strong) UIButton *keybordBtn;
@property (nonatomic ,strong) UIButton *faceBtn;
@property (nonatomic ,strong) UIButton *extensionBtn;
@property (nonatomic ,strong) UITextView *inputTextView;
@property (nonatomic ,strong) UIButton *voiceInputBtn;

@property (nonatomic ,copy) void(^heightChangeBlock)(CGFloat height);

@end
