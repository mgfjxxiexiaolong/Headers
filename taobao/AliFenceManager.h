//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AMapGeoFenceManagerDelegate-Protocol.h"

@class AMapGeoFenceManager, NSMutableArray, NSMutableDictionary, NSString, NSTimer;
@protocol OS_dispatch_semaphore;

@interface AliFenceManager : NSObject <AMapGeoFenceManagerDelegate>
{
    NSTimer *_timer;
    NSMutableArray *_detectFences;
    NSObject<OS_dispatch_semaphore> *_lock;
    NSObject<OS_dispatch_semaphore> *_lock2;
    CDUnknownBlockType _orderFencesCallBack;
    NSString *_bizID;
    NSMutableDictionary *_holdFences;
    NSMutableDictionary *_holdRegions;
    AMapGeoFenceManager *_geoFenceManager;
}

+ (id)makeSceneObject:(id)arg1;
+ (_Bool)enableBeaconMonitor;
+ (void)setEnableBeaconMonitor:(_Bool)arg1;
@property(retain, nonatomic) AMapGeoFenceManager *geoFenceManager; // @synthesize geoFenceManager=_geoFenceManager;
@property(retain, nonatomic) NSMutableDictionary *holdRegions; // @synthesize holdRegions=_holdRegions;
@property(retain, nonatomic) NSMutableDictionary *holdFences; // @synthesize holdFences=_holdFences;
@property(copy, nonatomic) NSString *bizID; // @synthesize bizID=_bizID;
@property(copy, nonatomic) CDUnknownBlockType orderFencesCallBack; // @synthesize orderFencesCallBack=_orderFencesCallBack;
- (void).cxx_destruct;
- (_Bool)makeGeoManager;
- (void)regionsCollect;
- (void)regionsCompare:(id)arg1;
- (void)amapGeoFenceManager:(id)arg1 didGeoFencesStatusChangedForRegion:(id)arg2 customID:(id)arg3 error:(id)arg4;
- (void)amapGeoFenceManager:(id)arg1 didAddRegionForMonitoringFinished:(id)arg2 customID:(id)arg3 error:(id)arg4;
- (_Bool)addNFFence:(id)arg1;
- (_Bool)addGeoFence:(id)arg1;
- (_Bool)removeAliFence:(id)arg1;
- (_Bool)addAliFence:(id)arg1;
- (id)initWithBizID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

