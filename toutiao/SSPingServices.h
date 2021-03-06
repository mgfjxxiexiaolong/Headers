//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SimplePingDelegate-Protocol.h"

@class NSMutableArray, NSString, SimplePing;

@interface SSPingServices : NSObject <SimplePingDelegate>
{
    _Bool _hasStarted;
    _Bool _isTimeout;
    long long _repingTimes;
    long long _icmpSequence;
    NSMutableArray *_pingItems;
    double _timeoutMilliseconds;
    unsigned long long _maximumPingTimes;
    NSString *_address;
    SimplePing *_simplePing;
    CDUnknownBlockType _callbackHandler;
}

+ (id)startPingAddress:(id)arg1 callbackHandler:(CDUnknownBlockType)arg2;
+ (void)getIPAddressWithDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType callbackHandler; // @synthesize callbackHandler=_callbackHandler;
@property(retain, nonatomic) SimplePing *simplePing; // @synthesize simplePing=_simplePing;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) unsigned long long maximumPingTimes; // @synthesize maximumPingTimes=_maximumPingTimes;
@property(nonatomic) double timeoutMilliseconds; // @synthesize timeoutMilliseconds=_timeoutMilliseconds;
- (void).cxx_destruct;
- (void)simplePing:(id)arg1 didReceivePingResponsePacket:(id)arg2 timeElasped:(double)arg3;
- (void)simplePing:(id)arg1 didFailToSendPacket:(id)arg2 error:(id)arg3;
- (void)simplePing:(id)arg1 didSendPacket:(id)arg2 ICMPHeader:(struct ICMPHeader *)arg3;
- (void)simplePing:(id)arg1 didFailWithError:(id)arg2;
- (void)simplePing:(id)arg1 didStartWithAddress:(id)arg2;
- (void)cancel;
- (void)_handlePingItem:(id)arg1;
- (void)_timeoutActionFired;
- (void)reping;
- (void)startPing;
- (id)initWithAddress:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

