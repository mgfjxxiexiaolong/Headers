//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AUGGwCommonRes.h"

@class ALIUSERGWExistUserInfo, NSString;

@interface AUGRegStatusRes : AUGGwCommonRes
{
    _Bool _directLogin;
    _Bool _optionStatus;
    _Bool _removePaymentPass;
    NSString *_h5Url;
    NSString *_headImgUrl;
    NSString *_loginToken;
    ALIUSERGWExistUserInfo *_existUserInfo;
    NSString *_showOptionalInfo;
    NSString *_agreementURL;
}

@property(nonatomic) _Bool removePaymentPass; // @synthesize removePaymentPass=_removePaymentPass;
@property(nonatomic) _Bool optionStatus; // @synthesize optionStatus=_optionStatus;
@property(retain, nonatomic) NSString *agreementURL; // @synthesize agreementURL=_agreementURL;
@property(retain, nonatomic) NSString *showOptionalInfo; // @synthesize showOptionalInfo=_showOptionalInfo;
@property(retain, nonatomic) ALIUSERGWExistUserInfo *existUserInfo; // @synthesize existUserInfo=_existUserInfo;
@property(nonatomic) _Bool directLogin; // @synthesize directLogin=_directLogin;
@property(retain, nonatomic) NSString *loginToken; // @synthesize loginToken=_loginToken;
@property(retain, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl=_headImgUrl;
@property(retain, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
- (void).cxx_destruct;

@end

