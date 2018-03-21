//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class AWECaptchaViewController, AWELoginButton, AWELoginGradientView, AWEPhoneNumberInputView, AWERegisterViewController, NSString, UIButton, UILabel;

@interface AWEAccountPhoneNumberViewController : UIViewController <UITextFieldDelegate, BTDRouterViewControllerProtocol>
{
    _Bool _isCounting;
    _Bool _fromCharge;
    UILabel *_titleLabel;
    UILabel *_hintLabel;
    AWEPhoneNumberInputView *_phoneNumberInputView;
    AWELoginButton *_nextButton;
    UIButton *_backButton;
    AWELoginGradientView *_backgroundView;
    NSString *_phoneNumber;
    NSString *_captchaValue;
    unsigned long long _useType;
    NSString *_enterFrom;
    AWECaptchaViewController *_captchaViewController;
    AWERegisterViewController *_bindViewController;
}

+ (void)load;
@property(retain, nonatomic) AWERegisterViewController *bindViewController; // @synthesize bindViewController=_bindViewController;
@property(retain, nonatomic) AWECaptchaViewController *captchaViewController; // @synthesize captchaViewController=_captchaViewController;
@property(nonatomic) _Bool fromCharge; // @synthesize fromCharge=_fromCharge;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(nonatomic) unsigned long long useType; // @synthesize useType=_useType;
@property(retain, nonatomic) NSString *captchaValue; // @synthesize captchaValue=_captchaValue;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) AWELoginGradientView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) AWELoginButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) AWEPhoneNumberInputView *phoneNumberInputView; // @synthesize phoneNumberInputView=_phoneNumberInputView;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool isCounting; // @synthesize isCounting=_isCounting;
- (void).cxx_destruct;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)backAction;
- (void)nextAction;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)_dismiss;
- (void)_stopLoading;
- (void)_startLoading;
- (void)_configureUseType;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithType:(unsigned long long)arg1;
- (id)initWithRouterParamDict:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
