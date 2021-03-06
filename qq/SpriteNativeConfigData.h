//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, SpriteGamePkgModel;

@interface SpriteNativeConfigData : NSObject
{
    NSMutableArray *_packgeList;
    NSMutableArray *_actionsList;
    NSMutableArray *_hotActionsList;
    NSMutableArray *_freshActionsList;
    SpriteGamePkgModel *_gamePkgModel;
    NSMutableArray *_favoriteList;
    NSMutableArray *_collectionList;
    NSMutableArray *_joinList;
    NSMutableArray *_todayFreeJoinList;
    NSMutableArray *_slaveList;
    NSMutableArray *_payedByGoldList;
    unsigned long long _actionTimeStamp;
}

@property(readonly, nonatomic) NSArray *payedByGoldList; // @synthesize payedByGoldList=_payedByGoldList;
@property(readonly, nonatomic) NSArray *slaveList; // @synthesize slaveList=_slaveList;
@property(readonly, nonatomic) NSArray *todayFreeJoinList; // @synthesize todayFreeJoinList=_todayFreeJoinList;
@property(readonly, nonatomic) NSArray *joinList; // @synthesize joinList=_joinList;
@property(readonly, nonatomic) NSArray *collectionList; // @synthesize collectionList=_collectionList;
@property(readonly, nonatomic) NSArray *favoriteList; // @synthesize favoriteList=_favoriteList;
@property(readonly, nonatomic) SpriteGamePkgModel *gamePkgModel; // @synthesize gamePkgModel=_gamePkgModel;
@property(readonly, nonatomic) NSArray *freshActionsList; // @synthesize freshActionsList=_freshActionsList;
@property(readonly, nonatomic) NSArray *hotActionsList; // @synthesize hotActionsList=_hotActionsList;
@property(readonly, nonatomic) NSArray *actionsList; // @synthesize actionsList=_actionsList;
@property(readonly, nonatomic) NSArray *packgeList; // @synthesize packgeList=_packgeList;
@property(nonatomic) unsigned long long actionTimeStamp; // @synthesize actionTimeStamp=_actionTimeStamp;
- (void)p_clearActionData;
- (void)removeAllPayedByGoldCollection;
- (void)removePayedByGoldObject:(id)arg1;
- (void)addPayedByGoldObject:(id)arg1;
- (void)removeAllSlaveCollection;
- (void)removeSlaveObject:(id)arg1;
- (void)addSlaveObject:(id)arg1;
- (void)removeAllTodayFreeJoin;
- (void)removeTodayFreeJoinObject:(id)arg1;
- (void)addTodayFreeJoinObject:(id)arg1;
- (void)removeAllJoinActive;
- (void)removeJoinActiveObject:(id)arg1;
- (void)addJoinActiveObject:(id)arg1;
- (void)removeAllCollection;
- (void)removeCollectionObject:(id)arg1;
- (void)addCollectionObject:(id)arg1;
- (void)removeAllFavorite;
- (void)removeFavoriteObject:(id)arg1;
- (void)addFavoriteObject:(id)arg1;
- (void)addHotOrNewActionIfNeed:(id)arg1;
- (void)addActionObject:(id)arg1;
- (void)addPackgeObject:(id)arg1;
- (void)modifyPayedByGoldDataWith:(id)arg1;
- (void)modifySlaveDataWith:(id)arg1;
- (void)modifyTodayFreeDataWith:(id)arg1;
- (void)modifyJoinActiveDataWith:(id)arg1;
- (void)modifyCollectionActionDataWith:(id)arg1;
- (void)modifyFavActionDataWith:(id)arg1;
- (void)modifyGameDataWithGameJsonDic:(id)arg1;
- (void)modifyHotAndNewActionByActionList;
- (void)modifyActionDataWithAnother:(id)arg1;
- (id)init;
- (void)dealloc;

@end

