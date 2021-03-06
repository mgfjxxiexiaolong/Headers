//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseLoginInputView.h"

@class NSLayoutConstraint, NSTimer, UIActivityIndicatorView, UIButton, UITextField;

@interface KSLoginCaptchaInputView : KSBaseLoginInputView
{
    short _secondsLeft;
    CDUnknownBlockType _sendButtonPressed;
    UITextField *_captchaTextField;
    UIButton *_sendButton;
    UIActivityIndicatorView *_loadingView;
    NSTimer *_timer;
    double _widthBeforeSent;
    double _widthAfterSent;
    NSLayoutConstraint *_buttonWidthConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *buttonWidthConstraint; // @synthesize buttonWidthConstraint=_buttonWidthConstraint;
@property(nonatomic) double widthAfterSent; // @synthesize widthAfterSent=_widthAfterSent;
@property(nonatomic) double widthBeforeSent; // @synthesize widthBeforeSent=_widthBeforeSent;
@property(nonatomic) short secondsLeft; // @synthesize secondsLeft=_secondsLeft;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UITextField *captchaTextField; // @synthesize captchaTextField=_captchaTextField;
@property(copy, nonatomic) CDUnknownBlockType sendButtonPressed; // @synthesize sendButtonPressed=_sendButtonPressed;
- (void).cxx_destruct;
- (double)_buttonWidthWithText:(id)arg1;
- (void)startCountDown;
- (void)reset;
- (void)pressSendButton;
- (id)inputAccessoryView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

