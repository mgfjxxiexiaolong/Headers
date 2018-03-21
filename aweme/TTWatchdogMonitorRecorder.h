//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, TTMonitorReporter;
@protocol OS_dispatch_queue;

@interface TTWatchdogMonitorRecorder : NSObject
{
    TTMonitorReporter *_reporter;
    NSMutableArray *_threadHoldItems;
    NSObject<OS_dispatch_queue> *_threadhold_queue;
    double _lastRecorderTime;
}

@property(nonatomic) double lastRecorderTime; // @synthesize lastRecorderTime=_lastRecorderTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *threadhold_queue; // @synthesize threadhold_queue=_threadhold_queue;
@property(retain, nonatomic) NSMutableArray *threadHoldItems; // @synthesize threadHoldItems=_threadHoldItems;
@property(retain, nonatomic) TTMonitorReporter *reporter; // @synthesize reporter=_reporter;
- (void).cxx_destruct;
- (void)cancelWatchdogDetection;
- (void)_reportNow;
- (void)tryWatchdogDetection;
- (void)startMonitor;
- (double)monitorLength;
- (_Bool)monitorHasLength;
- (_Bool)isEnabled;
- (_Bool)isDebug;
- (void)appDidBecomeActive;
- (void)appWillResignActive;
- (void)dealloc;
- (id)init;

@end
