//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BeeAudioPlayerDelegate-Protocol.h"
#import "PSDPluginProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface BeeAudioPlayerJSPlugin : NSObject <PSDPluginProtocol, BeeAudioPlayerDelegate>
{
    NSMutableArray *_registerVCArray;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *name;
- (void)handleEvent:(id)arg1;
- (void)playedInfo:(id)arg1;
- (void)callHandlerWithName:(id)arg1 dic:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

