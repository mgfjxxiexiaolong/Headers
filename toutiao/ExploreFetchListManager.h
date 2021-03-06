//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ListDataOperationManager.h"

#import "SSDataOperationDelegate-Protocol.h"

@class NSArray, NSSet, NSString;

@interface ExploreFetchListManager : ListDataOperationManager <SSDataOperationDelegate>
{
    _Bool _loadMoreHasMore;
    _Bool _isLoading;
    _Bool _lastFetchRiseError;
    NSArray *_items;
    NSString *_categoryID;
    double _tableviewOffset;
    NSArray *_silentFetchedItems;
    CDUnknownBlockType _fetchFinishBlock;
    CDUnknownBlockType _silentFetchFinishBlock;
    long long _silentFetchTimes;
    double _silentFetchTimeInterval;
    double _lastSilentFetchInsertTime;
    unsigned long long _refrshType;
    NSSet *_specialOriginalDataClass;
}

@property(retain, nonatomic) NSSet *specialOriginalDataClass; // @synthesize specialOriginalDataClass=_specialOriginalDataClass;
@property(nonatomic) unsigned long long refrshType; // @synthesize refrshType=_refrshType;
@property(nonatomic) double lastSilentFetchInsertTime; // @synthesize lastSilentFetchInsertTime=_lastSilentFetchInsertTime;
@property(nonatomic) double silentFetchTimeInterval; // @synthesize silentFetchTimeInterval=_silentFetchTimeInterval;
@property(nonatomic) long long silentFetchTimes; // @synthesize silentFetchTimes=_silentFetchTimes;
@property(copy, nonatomic) CDUnknownBlockType silentFetchFinishBlock; // @synthesize silentFetchFinishBlock=_silentFetchFinishBlock;
@property(copy, nonatomic) CDUnknownBlockType fetchFinishBlock; // @synthesize fetchFinishBlock=_fetchFinishBlock;
@property(retain, nonatomic) NSArray *silentFetchedItems; // @synthesize silentFetchedItems=_silentFetchedItems;
@property(nonatomic) double tableviewOffset; // @synthesize tableviewOffset=_tableviewOffset;
@property(nonatomic) _Bool lastFetchRiseError; // @synthesize lastFetchRiseError=_lastFetchRiseError;
@property(retain, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool loadMoreHasMore; // @synthesize loadMoreHasMore=_loadMoreHasMore;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)insertItems:(id)arg1 atIndex:(long long)arg2;
- (void)insertObjectFromDict:(id)arg1 listType:(unsigned long long)arg2;
- (id)insertObjectToTopFromDict:(id)arg1 listType:(unsigned long long)arg2;
- (void)checkFollowCategoryFollowStatus;
- (_Bool)isExistInItems:(id)arg1;
- (void)updateAllItemsForNextCellType;
- (void)removeAllItems;
- (void)addOrderedData:(id)arg1 listType:(unsigned long long)arg2;
- (void)prependObjects:(id)arg1;
- (void)replaceObjectAtIndex:(long long)arg1 withObject:(id)arg2;
- (void)removeItemArray:(id)arg1;
- (void)removeItemForIndexIfExist:(unsigned long long)arg1;
- (void)removeItemIfExist:(id)arg1;
- (void)refreshItemsForListType:(unsigned long long)arg1;
- (void)dataOperation:(id)arg1 increaseData:(id)arg2 error:(id)arg3 userInfo:(id)arg4;
- (void)dataOperationInterruptExecute:(id)arg1;
- (void)dataOperationStartExecute:(id)arg1;
- (id)imprDictForOrderedData:(id)arg1 cardID:(id)arg2 categoryID:(id)arg3;
- (_Bool)hasBeenSeenForOrderedData:(id)arg1;
- (void)reportItemsHasNotBeenSeen;
- (void)tryInsertSilentFetchedItem;
- (void)updateLastSilentFetchTime;
- (long long)lastWitnessedIndex;
- (void)cancelAllOperations;
- (_Bool)canSilentFetchItems;
- (void)setupSilentFetchSettings;
- (void)reloadSilentFetchSettings;
- (void)updateRefreshPara:(id)arg1;
- (id)init;
- (void)resetManager;
- (void)startExecuteWithCondition:(id)arg1 fromLocal:(_Bool)arg2 fromRemote:(_Bool)arg3 getMore:(_Bool)arg4 isDisplyView:(_Bool)arg5 listType:(unsigned long long)arg6 listLocation:(unsigned long long)arg7 finishBlock:(CDUnknownBlockType)arg8;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

