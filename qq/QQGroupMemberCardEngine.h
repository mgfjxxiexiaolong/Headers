//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSString;

@interface QQGroupMemberCardEngine : NSObject <IEngineDispatchDelegate>
{
    NSMutableDictionary *_schoolCardCache;
    NSMutableDictionary *_requestParamCache;
    NSMutableDictionary *_cache;
    int _cacheCapacity;
    int _cacheExpiredTime;
    NSMapTable *_delegateSet;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)setModelInCache:(id)arg1 withGroupCode:(id)arg2 memberUin:(id)arg3;
- (void)setSchoolModelInCache:(id)arg1 withGroupCode:(id)arg2 memberUin:(id)arg3;
- (id)getSchoolModelInCacheWithGroupCode:(id)arg1 memberUin:(id)arg2;
- (void)modifySchoolMemberCardInfo:(id)arg1 memberUin:(id)arg2 indentify:(unsigned int)arg3 cardName:(id)arg4 delegate:(id)arg5;
- (void)reqestSchoolMemberCardInfoWithGroupCode:(id)arg1 memberUin:(id)arg2 delegate:(id)arg3;
- (void)cancelMemberCardInfoRequestByDelegate:(id)arg1;
- (void)reqestMemberCardInfoWithGroupCode:(id)arg1 memberUin:(id)arg2 delegate:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

