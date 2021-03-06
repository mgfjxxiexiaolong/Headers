//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MBKRideHailingNetworkManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_statusTimer;
    NSObject<OS_dispatch_source> *_carPositionTimer;
    long long _statusTimeoutCount;
    long long _carTimeoutCount;
    NSString *_orderId;
    CDUnknownBlockType _rideHailingStatusBlock;
    CDUnknownBlockType _rideHailingCarBlock;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType rideHailingCarBlock; // @synthesize rideHailingCarBlock=_rideHailingCarBlock;
@property(copy, nonatomic) CDUnknownBlockType rideHailingStatusBlock; // @synthesize rideHailingStatusBlock=_rideHailingStatusBlock;
@property(readonly, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (void)carPositionTimerAction:(id)arg1 driverId:(id)arg2;
- (void)updateRideHailingCarLoopFrequencyWithOrderId:(id)arg1 driverId:(id)arg2 loopFrequency:(long long)arg3;
- (void)stopMonitoringRideHailingCar;
- (void)startMonitoringRideHailingCarWithOrderId:(id)arg1 driverId:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)statusTimerFireAction:(id)arg1;
- (void)manualRefreshOrderStatus;
- (void)stopMonitoringRideHailingStatus;
- (void)updateRideHailingStatusLoopFrequencyWithOrderId:(id)arg1 loopFrequency:(long long)arg2;
- (void)startMonitoringRideHailingStatusWithOrderId:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)init;

@end

