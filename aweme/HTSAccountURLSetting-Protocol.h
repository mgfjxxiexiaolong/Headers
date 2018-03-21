//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol HTSAccountURLSetting <NSObject>
- (NSString *)registerByTicketURLString;
- (NSString *)preRegisterURLString;
- (NSString *)feedbackFAQURLString;
- (NSString *)uploadUserPhotoURLString;
- (NSString *)updateUserURLString;
- (NSString *)userInfoURLString;
- (NSString *)PRChangeBindingPhoneURLString;
- (NSString *)PRUnbindPhoneURLString;
- (NSString *)PRBindPhoneWithPasswordURLString;
- (NSString *)PRBindPhoneURLString;
- (NSString *)PRChangePasswordURLString;
- (NSString *)PRResetPasswordURLString;
- (NSString *)PRLoginURLString;
- (NSString *)PRRefreshCaptchaURLString;
- (NSString *)PRRegisterURLString;
- (NSString *)PRValidateCodeURLString;
- (NSString *)PRSendVoiceCodeURLString;
- (NSString *)PRSendCodeURLString;
- (NSString *)logoutAccountURLString;
- (NSString *)logoutURLString;
- (NSString *)authLoginSuccessURLString;
- (NSString *)SSOBindURLString;
- (NSString *)SSOCallbackURLString;
- (void)setDomain:(NSString *)arg1;
@end
