//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/APMidasToastContainerView.h>

#import <QQMainProject/APMidasUIImgVerifyCodeSubViewDelegate-Protocol.h>

@class NSString;
@protocol APMidasImgVerifyCodeViewDelegate;

@interface APMidasImgVerifyCodeView : APMidasToastContainerView <APMidasUIImgVerifyCodeSubViewDelegate>
{
    id <APMidasImgVerifyCodeViewDelegate> mImgvcViewDelegate;
    struct CGPoint _oldCenter;
}

- (void)onImgVerifyCodeSubViewTextWillChangeToString:(id)arg1;
- (void)onImgVerifyCodeSubViewResentBtnClicked:(id)arg1;
- (void)keyboardWillHiddenNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)clearInput;
- (void)showKeyBoard:(_Bool)arg1;
- (void)onRefreshSuccess;
- (void)onBtnClicked;
- (void)onClose;
- (void)dealloc;
- (id)initWithParentView:(id)arg1 btnTitle:(id)arg2 bizManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
