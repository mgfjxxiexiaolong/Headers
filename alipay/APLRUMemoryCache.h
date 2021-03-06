//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "APCacheProtocol-Protocol.h"

@class APLRUMemoryCacheNode, NSMutableDictionary, NSRecursiveLock, NSString;

@interface APLRUMemoryCache : NSObject <APCacheProtocol>
{
    _Bool _internal;
    long long _capacity;
    APLRUMemoryCacheNode *_head;
    APLRUMemoryCacheNode *_tail;
    NSMutableDictionary *_hash;
    NSRecursiveLock *_hashLock;
    _Bool _handleMemoryWarning;
}

@property(nonatomic) _Bool handleMemoryWarning; // @synthesize handleMemoryWarning=_handleMemoryWarning;
@property(readonly, nonatomic) long long capacity; // @synthesize capacity=_capacity;
@property(nonatomic) _Bool internal; // @synthesize internal=_internal;
- (void).cxx_destruct;
- (void)removeTailNodes;
- (void)moveNodeToHead:(id)arg1;
- (void)removeNode:(id)arg1;
- (id)findObjectAtTopSequenceForKey:(id)arg1 atTop:(_Bool *)arg2;
- (void)resetCapacity:(long long)arg1;
- (_Bool)objectExistsForKey:(id)arg1;
- (id)peekObjects:(long long)arg1 fromHead:(_Bool)arg2;
- (void)removeObjectsWithKeys:(id)arg1;
- (void)removeObjectsWithSuffix:(id)arg1;
- (void)removeObjectsWithPrefix:(id)arg1;
- (void)removeObjectsWithRegex:(id)arg1;
- (void)removeObjectsWithConditionBlock:(CDUnknownBlockType)arg1;
- (void)addObjects:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 expire:(double)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithCapacity:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

