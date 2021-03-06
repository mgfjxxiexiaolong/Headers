//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQWalletConfigManagerDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, QQMessageModel;

@interface QQWalletGoldMsgCenter : NSObject <QQWalletConfigManagerDelegate>
{
    NSMutableArray *_taskQueue;
    _Bool _isPaying;
    NSMutableDictionary *_pushModelDic;
    long long _taskSeq;
    NSMutableDictionary *_taskDic;
    double _nextGrabTime;
    NSMutableDictionary *_goldMsgAIOFlagMap;
    QQMessageModel *_lastSendMessage;
}

+ (id)sharedInstance;
+ (id)getSessionIDForVideo:(id)arg1:(id)arg2;
+ (long long)getSessionTypeForVideo:(id)arg1;
+ (_Bool)isBelowIphone5;
+ (void)downloadGoldMsgOCSResource;
+ (_Bool)shouldShowGoldMsgCoinAnimationWithMsg:(id)arg1;
+ (id)optainCurrentVC;
+ (_Bool)shouldShowAIOGoldMsgAnimationWithMsg:(id)arg1;
+ (id)_uniquelTagForSessionType:(long long)arg1;
+ (id)_uniquelTagForSessionType:(long long)arg1 sessionID:(id)arg2;
@property(retain, nonatomic) QQMessageModel *lastSendMessage; // @synthesize lastSendMessage=_lastSendMessage;
@property(retain, nonatomic) NSMutableDictionary *goldMsgAIOFlagMap; // @synthesize goldMsgAIOFlagMap=_goldMsgAIOFlagMap;
- (id)init;
- (void)reloadAIOTableView;
- (void)receiveGoldMsgForUin:(id)arg1;
- (id)filterPopupMenuItems:(id)arg1 goldMsg:(id)arg2;
- (void)_handleWalletJSNotifyViewUpdateNotification:(id)arg1;
- (void)parseGoldMsgConfig:(id)arg1;
- (void)didRefreshConfig:(id)arg1 forKey:(id)arg2;
- (void)_handleGoldMsgCenterGrayTipsNotification:(id)arg1;
- (id)getGoldMsgPriceConfig;
- (long long)getGoldMsgPriceByFriendUin:(id)arg1;
- (void)saveGoldMsgPrice:(long long)arg1 forFriendUin:(id)arg2;
- (long long)getMinPriceByMe:(id)arg1;
- (_Bool)isGMSwitchOpenByMe:(id)arg1;
- (void)requestGoldMsgStatusWithFriendUin:(id)arg1 type:(int)arg2;
- (int)goldMsgStatusOfFriendUin:(id)arg1;
- (long long)getMinPriceByFriendUin:(id)arg1;
- (_Bool)isGMSwitchOpenByFriendUin:(id)arg1;
- (_Bool)isGoldMsgEntryNew;
- (id)goldMsgEntryConfig;
- (_Bool)isGoldMsgLimitEntryOpen;
- (_Bool)isGoldMsgEntryOpen:(long long)arg1;
- (id)getDataCache:(long long)arg1 sessionID:(id)arg2;
- (id)getDefaultDataCache;
- (_Bool)isAIOGoldMsgMode:(long long)arg1 sessionID:(id)arg2;
- (void)setAIOGoldMsgMode:(_Bool)arg1 sessionType:(long long)arg2 sessionID:(id)arg3;
- (_Bool)isAIOGoldMsgModeOfChatModel:(id)arg1;
- (_Bool)isAIOGoldMsgMode:(id)arg1;
- (void)setAIOGoldMsgMode:(_Bool)arg1 sessionID:(id)arg2;
- (id)getCacheDataForKey:(id)arg1;
- (void)removeCacheDataForKey:(id)arg1;
- (void)cacheData:(id)arg1 withKey:(id)arg2;
- (void)dealloc;
- (void)configNotification;

@end

