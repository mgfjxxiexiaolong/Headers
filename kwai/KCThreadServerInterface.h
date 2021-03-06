//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KLPushDelegate-Protocol.h"

@class NSString;
@protocol KCThreadServerInterfaceDelegate;

@interface KCThreadServerInterface : NSObject <KLPushDelegate>
{
    id <KCThreadServerInterfaceDelegate> _delegate;
    long long _ongoingSyncOffset;
}

@property long long ongoingSyncOffset; // @synthesize ongoingSyncOffset=_ongoingSyncOffset;
@property(nonatomic) __weak id <KCThreadServerInterfaceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setSyncOffset:(long long)arg1 parentThread:(id)arg2;
- (long long)syncOffsetForParentThread:(id)arg1;
- (id)syncPreKeyForParentThread:(id)arg1;
- (id)messageFromPBMessage:(id)arg1 type:(int)arg2 threadID:(id)arg3;
- (id)threadFromPB:(id)arg1 pThreadID:(id)arg2;
- (id)threadUpdateArrayFromPBSessions:(id)arg1 pThreadID:(id)arg2;
- (id)threadUpdateArrayFromResponse:(id)arg1 pThreadID:(id)arg2;
- (void)_pullOldThreadsBeforeCursor:(id)arg1 parentThread:(id)arg2 countLimit:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_syncMessageWithOffset:(long long)arg1 parentThread:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_readACKForThread:(id)arg1 type:(int)arg2 readSeq:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeThread:(id)arg1 type:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pullOldThreadsBeforeCursor:(id)arg1 parentThread:(id)arg2 countLimit:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)readACKForThread:(id)arg1 type:(long long)arg2 readSeq:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)syncWithParentThread:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)callbackQueue;
- (_Bool)didRecvPacket:(id)arg1;
- (_Bool)shouldRecvPacket:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

