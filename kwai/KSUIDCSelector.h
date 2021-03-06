//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSUIDCSelectorProtocol-Protocol.h"

@class KSKeyValues, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSURLSession;
@protocol NSObject;

@interface KSUIDCSelector : NSObject <KSUIDCSelectorProtocol>
{
    NSArray *_types;
    NSArray *_httpsTypes;
    NSDictionary *_typeHostsLocal;
    NSMutableDictionary *_typeResultMaps;
    NSMutableArray *_waitTestList;
    NSURLSession *_session;
    double _prevTestTime;
    NSDictionary *_resultSnap;
    KSKeyValues *_resultCache;
    double _timeoutHttpInterval;
    double _timeoutSpeedResult;
    struct KSUIDCSpeedTester *_speedTester;
    _Bool _serverIdcOnly;
    int _goodIdcThresholdMs;
    NSDictionary *_idc_list;
    NSArray *_speedTestTypeAndOrder;
    NSString *_ssid;
    id <NSObject> _monitorToken;
}

+ (id)shareInstance;
@property(retain, nonatomic) id <NSObject> monitorToken; // @synthesize monitorToken=_monitorToken;
@property(copy) NSString *ssid; // @synthesize ssid=_ssid;
@property(nonatomic) int goodIdcThresholdMs; // @synthesize goodIdcThresholdMs=_goodIdcThresholdMs;
@property(copy, nonatomic) NSArray *speedTestTypeAndOrder; // @synthesize speedTestTypeAndOrder=_speedTestTypeAndOrder;
@property(nonatomic) _Bool serverIdcOnly; // @synthesize serverIdcOnly=_serverIdcOnly;
@property(copy, nonatomic) NSDictionary *idc_list; // @synthesize idc_list=_idc_list;
- (void).cxx_destruct;
- (void)snapshotForType:(id)arg1;
- (void)onSpeedTestFinishedWithResult:(shared_ptr_3b51eea2)arg1 withStatus:(_Bool)arg2 forType:(basic_string_a490aa4c *)arg3;
- (void)speedTestCrossPlatform:(_Bool)arg1;
- (id)_filterByHostType:(id)arg1 whiteList:(id)arg2 idc_list:(id)arg3;
- (id)combineList:(id)arg1 withOtherList:(id)arg2;
- (id)getResult:(id)arg1 withHostType:(id)arg2 withHttps:(_Bool)arg3 withSSID:(id)arg4;
- (void)clearTimeout;
- (void)setResult:(id)arg1;
- (void)clearTestList;
- (void)pushTest:(id)arg1;
- (id)popTest;
- (int)testOneSync;
- (id)snapshot:(id)arg1 needSendLog:(_Bool)arg2;
- (void)makeSnapshot:(_Bool)arg1;
- (void)addTaskInList:(id)arg1;
- (void)load;
- (void)save;
- (void)onReachabilityChanged:(long long)arg1;
- (id)hostListOfHostType:(id)arg1;
- (id)hostOfHostType:(id)arg1 withPrevHost:(id)arg2;
- (void)speedTestPlatformDependent:(_Bool)arg1;
- (void)speedTest:(_Bool)arg1;
- (id)refresh_ssid;
- (void)setPrevTime:(double)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

