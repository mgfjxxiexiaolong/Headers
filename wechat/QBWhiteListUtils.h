//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QBWhiteList;

@interface QBWhiteListUtils : NSObject
{
    QBWhiteList *_performanceReportWhiteList;
    NSObject *_performanceReportLockObj;
    QBWhiteList *_dnsUDPWhiteList;
    NSObject *_dnsUDPLockObj;
    QBWhiteList *_forceProxyWhiteList;
    NSObject *_forceProxyLockObj;
    QBWhiteList *_qProxyWhiteList;
    NSObject *_QProxyLockObj;
    QBWhiteList *_atsVideoWhiteList;
    NSObject *_atsVideoLockObj;
    QBWhiteList *_urlReportWhiteList;
    NSObject *_urlReportLockObj;
    QBWhiteList *_dnsHTTPWhiteList;
    NSObject *_dnsHTTPLockObj;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)dnsHTTPWhiteList;
- (id)urlReportWhiteList;
- (id)ATSVideoWhiteList;
- (id)forceProxyWhiteList;
- (void)cleanForceProxyTempWhiteList;
- (id)qProxyWhiteList;
- (void)cleanQProxyTempWhiteList;
- (id)dnsUDPWhiteList;
- (id)performanceReportWhiteList;
- (id)init;

@end

