//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBFavSDKContentServiceProtocol-Protocol.h"
#import "TBFavSDKGoodServiceProtocol-Protocol.h"

@class NSString, SRERuleEngine, TBFavoriteItemIdListModel;
@protocol TBFavSDKCacheProtocol, TBFavSDKNetworkProtocol, TBFavSDKServiceProtocol;

@interface TBFavSDKService : NSObject <TBFavSDKGoodServiceProtocol, TBFavSDKContentServiceProtocol>
{
    _Bool _isLoading;
    NSString *_bizCode;
    id <TBFavSDKServiceProtocol> _delegate;
    id <TBFavSDKNetworkProtocol> _networkService;
    id <TBFavSDKCacheProtocol> _cacheService;
    NSString *_cacheUserId;
    TBFavoriteItemIdListModel *_cacheModel;
    SRERuleEngine *_ruleEngine;
}

@property(retain, nonatomic) SRERuleEngine *ruleEngine; // @synthesize ruleEngine=_ruleEngine;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) TBFavoriteItemIdListModel *cacheModel; // @synthesize cacheModel=_cacheModel;
@property(retain, nonatomic) NSString *cacheUserId; // @synthesize cacheUserId=_cacheUserId;
@property(retain, nonatomic) id <TBFavSDKCacheProtocol> cacheService; // @synthesize cacheService=_cacheService;
@property(retain, nonatomic) id <TBFavSDKNetworkProtocol> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <TBFavSDKServiceProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *bizCode; // @synthesize bizCode=_bizCode;
- (void).cxx_destruct;
- (void)dealloc;
- (id)creatErrorWithErrorMsg:(id)arg1 ErrorCode:(id)arg2 error:(id)arg3;
- (void)refreshFavoritedCacheWithItemIds:(id)arg1;
- (_Bool)checkIsFavoriteWithItemId:(id)arg1;
- (void)validateData;
- (void)removeFavoriteWithItemId:(id)arg1;
- (void)addFavoriteWithItemId:(id)arg1;
- (void)removeCache;
- (_Bool)checkCacheIsUseful;
- (_Bool)isUseCollectionIds:(long long)arg1;
- (_Bool)isHitMode:(long long)arg1;
- (_Bool)isUseCache:(long long)arg1;
- (_Bool)isFavRightUser:(long long)arg1;
- (_Bool)isLimitLoading;
- (void)checkCollectRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getCollectionIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)isFavoriteItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addItemId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteItemIds:(id)arg1 service:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteItemIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteItemId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)urlDecodeString:(id)arg1;
- (id)urlEncodeString:(id)arg1;
- (id)dictionaryFromQueryComponents:(id)arg1;
- (id)sortParamsForURLString:(id)arg1;
- (long long)hashCode:(id)arg1;
- (id)getURLParamBlacklistConfigFromOrange;
- (_Bool)validateUrl:(id)arg1;
- (long long)generateFeedIdByURLString:(id)arg1;
- (void)isConentFavWithOutItemId:(id)arg1 bizId:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)removeConentFavWithOutItemId:(id)arg1 bizId:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)addConentFavWithOutItemId:(id)arg1 bizId:(id)arg2 title:(id)arg3 note:(id)arg4 picUrl:(id)arg5 contentUrl:(id)arg6 block:(CDUnknownBlockType)arg7;
- (_Bool)favServiceApiFilter:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

