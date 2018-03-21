//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UIImage;
@protocol ABFaceFrame, ABFacePromptViewTouchDelegate;

@protocol ABViewDelegate <NSObject>
- (void)hideAnimation;
- (void)showErrorPrompt:(int)arg1 withTitle:(NSString *)arg2 withMsg:(NSString *)arg3 withPositiveText:(NSString *)arg4 withPositiveDelegate:(id <ABFacePromptViewTouchDelegate>)arg5 withNegativeText:(NSString *)arg6 withNegativeDelegate:(id <ABFacePromptViewTouchDelegate>)arg7 showOtherButton:(_Bool)arg8;
- (_Bool)isErrorPromptShowed;
- (void)showStartAnimation:(void (^)(void))arg1;
- (void)setMaskAlphaAnimation:(float)arg1 withDuration:(double)arg2;
- (void)showResultIconView:(_Bool)arg1;
- (void)resetDarkView;
- (void)showDarkView;
- (void)showProcessingView:(UIImage *)arg1;
- (void)showFaceDetectedCircleAnimation;
- (void)showFinishIcon;
- (void)onError:(int)arg1 withData:(NSDictionary *)arg2;
- (void)onMessage:(int)arg1 withData:(NSDictionary *)arg2;
- (void)onVolumeNotify:(float)arg1;
- (void)onLivenessSuccess;
- (void)onGoBack;
- (void)onRestartDetect;
- (void)onApplicationDidBecomeActive;
- (void)onApplicationWillResignActive;
- (void)showEnvironmentView:(id <ABFaceFrame>)arg1;
- (void)playPhaseSound;
- (void)showPhaseView;
@end
