//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL, VACDataReport;

@interface QQWalletAppPay : NSObject
{
    NSString *_urlScheme;
    NSString *_tempBundleID;
    NSURL *_tempUrl;
    VACDataReport *_currentReport;
}

+ (_Bool)needHandleTask;
+ (_Bool)canHandleURL:(id)arg1 sourceApplication:(id)arg2;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)showCoverViewController;
- (void)handleTaskAfterLogin;
- (void)responseToAppWithCode:(unsigned long long)arg1 errStr:(id)arg2;
- (void)handleURL:(id)arg1 bundleID:(id)arg2;

@end
