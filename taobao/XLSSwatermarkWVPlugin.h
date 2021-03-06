//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WVDynamicHandler.h"

#import "MozartDecodeHandler-Protocol.h"
#import "MozartRecordHandler-Protocol.h"

@class NSString, NSTimer, XLSACRConfig, XLSACRResultConfig, XLSWaterBizConfig;

@interface XLSSwatermarkWVPlugin : WVDynamicHandler <MozartRecordHandler, MozartDecodeHandler>
{
    _Bool _activeSesion;
    _Bool _started;
    CDUnknownBlockType _callback;
    long long _sumTime;
    NSTimer *_acrTimer;
    XLSACRConfig *_acrConfig;
    XLSACRResultConfig *_acrResultConfig;
    unsigned long long _type;
    XLSWaterBizConfig *_waterConfig;
}

+ (unsigned long long)instanceScope;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) XLSWaterBizConfig *waterConfig; // @synthesize waterConfig=_waterConfig;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) XLSACRResultConfig *acrResultConfig; // @synthesize acrResultConfig=_acrResultConfig;
@property(retain, nonatomic) XLSACRConfig *acrConfig; // @synthesize acrConfig=_acrConfig;
@property(retain, nonatomic) NSTimer *acrTimer; // @synthesize acrTimer=_acrTimer;
@property(nonatomic) long long sumTime; // @synthesize sumTime=_sumTime;
@property(nonatomic) _Bool activeSesion; // @synthesize activeSesion=_activeSesion;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)pauseWithContext:(id)arg1;
- (void)handleRecordNoPermission:(_Bool)arg1;
- (void)handleRecordInputBuffer:(void *)arg1 withLength:(int)arg2;
- (void)onResultWithWaterData:(id)arg1;
- (void)getWifi:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (_Bool)calculateBufferSizeisGreaterMax;
- (void)handleData;
- (void)processTimetable;
- (void)startACR:(id)arg1;
- (void)stopACR:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)startACR:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)activeSesion:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)stopWatermark:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)startWatermark:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)processMozartDataCollection:(id)arg1;
- (void)start:(id)arg1;
- (void)enterForeground;
- (void)stop;
- (void)resetWVJSBridgeInstance;
- (void)releaseInstance;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

