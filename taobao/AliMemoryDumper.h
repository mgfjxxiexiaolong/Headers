//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AliHAPluginProtocol-Protocol.h"

@class NSString;
@protocol AliHAContextProtocol, OS_dispatch_source;

@interface AliMemoryDumper : NSObject <AliHAPluginProtocol>
{
    _Bool _isEnumerating;
    unsigned long long _dumpTime;
    unsigned long long _suspectedAlertCount;
    id <AliHAContextProtocol> _context;
    NSObject<OS_dispatch_source> *_gcdTimer;
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *gcdTimer; // @synthesize gcdTimer=_gcdTimer;
@property(retain, nonatomic) id <AliHAContextProtocol> context; // @synthesize context=_context;
@property(nonatomic) unsigned long long suspectedAlertCount; // @synthesize suspectedAlertCount=_suspectedAlertCount;
@property unsigned long long dumpTime; // @synthesize dumpTime=_dumpTime;
@property _Bool isEnumerating; // @synthesize isEnumerating=_isEnumerating;
- (void).cxx_destruct;
- (id)automationDirectory;
- (void)_check:(unsigned long long)arg1 virtualSize:(unsigned long long)arg2 free:(unsigned long long)arg3;
- (void)onPluginDestory;
- (void)onPluginInit:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
