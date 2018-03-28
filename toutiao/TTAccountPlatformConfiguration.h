//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TTAccountPlatformConfiguration : NSObject
{
    _Bool _useDefaultWAPLogin;
    _Bool _tryCustomLoginWhenSDKFailure;
    _Bool _bootOptimization;
    _Bool _snsBarHidden;
    long long _platformType;
    NSString *_consumerKey;
    NSString *_consumerSecret;
    NSString *_platformName;
    NSString *_platformAppId;
    NSString *_platformAppDisplayName;
    NSString *_platformRedirectUrl;
    NSString *_authCallbackSchemeUrl;
    CDUnknownBlockType _laziedRegisterPlatformHandler;
    NSString *_snsBarText;
    NSString *_platformAppInstallUrl;
    NSArray *_platformInstalledURLSchemes;
    NSArray *_platformSupportedURLSchemes;
}

@property(copy, nonatomic) NSArray *platformSupportedURLSchemes; // @synthesize platformSupportedURLSchemes=_platformSupportedURLSchemes;
@property(copy, nonatomic) NSArray *platformInstalledURLSchemes; // @synthesize platformInstalledURLSchemes=_platformInstalledURLSchemes;
@property(copy, nonatomic) NSString *platformAppInstallUrl; // @synthesize platformAppInstallUrl=_platformAppInstallUrl;
@property(nonatomic) _Bool snsBarHidden; // @synthesize snsBarHidden=_snsBarHidden;
@property(copy, nonatomic) NSString *snsBarText; // @synthesize snsBarText=_snsBarText;
@property(nonatomic) _Bool bootOptimization; // @synthesize bootOptimization=_bootOptimization;
@property(nonatomic) _Bool tryCustomLoginWhenSDKFailure; // @synthesize tryCustomLoginWhenSDKFailure=_tryCustomLoginWhenSDKFailure;
@property(nonatomic) _Bool useDefaultWAPLogin; // @synthesize useDefaultWAPLogin=_useDefaultWAPLogin;
@property(copy, nonatomic) CDUnknownBlockType laziedRegisterPlatformHandler; // @synthesize laziedRegisterPlatformHandler=_laziedRegisterPlatformHandler;
@property(copy, nonatomic) NSString *authCallbackSchemeUrl; // @synthesize authCallbackSchemeUrl=_authCallbackSchemeUrl;
@property(copy, nonatomic) NSString *platformRedirectUrl; // @synthesize platformRedirectUrl=_platformRedirectUrl;
@property(copy, nonatomic) NSString *platformAppDisplayName; // @synthesize platformAppDisplayName=_platformAppDisplayName;
@property(copy, nonatomic) NSString *platformAppId; // @synthesize platformAppId=_platformAppId;
@property(copy, nonatomic) NSString *platformName; // @synthesize platformName=_platformName;
@property(copy, nonatomic) NSString *consumerSecret; // @synthesize consumerSecret=_consumerSecret;
@property(copy, nonatomic) NSString *consumerKey; // @synthesize consumerKey=_consumerKey;
@property(nonatomic) long long platformType; // @synthesize platformType=_platformType;
- (void).cxx_destruct;
- (id)init;

@end
