//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBWVConfiguration : NSObject
{
}

+ (id)newWindowWhiteList;
+ (unsigned long long)newWindowLimitation;
+ (id)thirdPartyNotiText;
+ (_Bool)isAllowThirdOpenClient;
+ (_Bool)isAllowOpenClient;
+ (id)openClientWhiteList;
+ (id)openClientBlackList;
+ (id)userScripts:(id)arg1;
+ (long long)defaultFestivalStyle;
+ (long long)zcacheStatus;
+ (_Bool)demoteWVConfigBaseURL;
+ (id)secureTokenHosts;
+ (_Bool)testWKWebVieURL:(id)arg1 withPatternJson:(id)arg2;
+ (_Bool)isUseUIWebView:(id)arg1;
+ (_Bool)isUseWKWebView:(id)arg1;
+ (_Bool)fixWKWebViewPostBody;
+ (_Bool)syncWKWebViewCookie;
+ (_Bool)useWKURLProtocol;
+ (_Bool)defaultUseWKWebView;
+ (_Bool)useOldJAEHandler;

@end
