//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class APMsgInputView, NSString, UIImage, UITextView;

@protocol MsgInputViewDelegate <NSObject>

@optional
- (_Bool)shouldShowKeyboard;
- (void)inputBoxFrameChanged;
- (void)inputBoxHideAnimatedEnd;
- (void)inputBoxHideAnimatedBegin;
- (void)inputBoxShowAnimatedEnd;
- (void)inputBoxShowAnimatedBegin;
- (void)toolBarButtonAction:(long long)arg1;
- (void)changeToolBarAction:(APMsgInputView *)arg1 hasDoAnimate:(_Bool)arg2;
- (void)changeInputMode:(long long)arg1;
- (void)willPasteImage:(UIImage *)arg1;
- (_Bool)textView:(UITextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)textViewDidChange:(UITextView *)arg1;
- (void)textMsgSendBtnClick:(NSString *)arg1;
- (void)keyBoardChange;
- (void)keyBoardChangeFrame:(double)arg1;
- (void)inputTextMsgViewIsUp:(_Bool)arg1;
@end
