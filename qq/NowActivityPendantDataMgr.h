//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMutableDictionary, NSTimer, NowActivityPendantAllConfig, NowActivityPendantSettingModel, QQAsynUrlImageView, QQSpringFestvival2018PendantData;

@interface NowActivityPendantDataMgr : NSObject
{
    CADisplayLink *_checkDispplayLink;
    NSTimer *_activityCheckTimer;
    _Bool _springFestivalPackAcitityIng;
    NowActivityPendantAllConfig *_allConfig;
    NSMutableDictionary *_pushItemDic;
    QQSpringFestvival2018PendantData *_curSpringFestvivalPendantData;
    NowActivityPendantSettingModel *_userSettingModel;
    QQAsynUrlImageView *_cacheImageView;
}

+ (unsigned long long)curTime;
+ (void)handleNowActivityPendantConfigPushResponse:(const void *)arg1 dataLen:(int)arg2;
+ (id)shareInstance;
@property(retain, nonatomic) QQAsynUrlImageView *cacheImageView; // @synthesize cacheImageView=_cacheImageView;
@property(retain, nonatomic) NowActivityPendantSettingModel *userSettingModel; // @synthesize userSettingModel=_userSettingModel;
@property(retain, nonatomic) QQSpringFestvival2018PendantData *curSpringFestvivalPendantData; // @synthesize curSpringFestvivalPendantData=_curSpringFestvivalPendantData;
@property(nonatomic) _Bool springFestivalPackAcitityIng; // @synthesize springFestivalPackAcitityIng=_springFestivalPackAcitityIng;
@property(retain, nonatomic) NSMutableDictionary *pushItemDic; // @synthesize pushItemDic=_pushItemDic;
@property(retain, nonatomic) NowActivityPendantAllConfig *allConfig; // @synthesize allConfig=_allConfig;
- (void).cxx_destruct;
- (void)recoverModelState;
- (void)setAllowShowNowActivityPendant:(_Bool)arg1;
- (_Bool)allowShowNowActivityPendant;
- (_Bool)showNowActivitySettingEnter;
- (void)handleLuckyPackAllFinish:(id)arg1;
- (void)handleLuckyPackStateFinish:(id)arg1;
- (void)handleLuckyPackStateChanage:(id)arg1;
- (void)handleSpringFestivalPack;
- (void)enterForeground;
- (void)enterBackGround;
- (void)userlogout:(id)arg1;
- (void)userLoginIn;
- (id)parseVersionDicForOriginDic:(id)arg1;
- (id)loadPushItem;
- (void)savePushConfig:(id)arg1;
- (void)removeInvaildPushItem;
- (void)loadAllConfig;
- (void)forceFinishTasksExceptType:(unsigned long long)arg1;
- (void)forceFinishAllTask;
- (_Bool)isAllTaskFinish;
- (void)notifyEnd:(id)arg1;
- (void)notifyStart:(id)arg1;
- (void)updateAllConfigWithPushItem:(id)arg1;
- (void)stopStateCheckTimer;
- (void)stopActivityCheckTimer;
- (void)checkState;
- (void)startStateCheckTimer;
- (void)checkAndStartTask;
- (void)checkAndFinishTask;
- (void)acitivityCheck;
- (void)startActivityCheckTimer;
- (_Bool)shouldStartActivityCheckTimer;
- (void)loadTask;
- (void)requestNowActivityConfigData;
- (void)checkAndPredownloadConfigImage;
- (void)checkLocalConfig:(id)arg1;
- (void)resetNowActivityConfig:(id)arg1;
- (void)finishCurrentTask:(unsigned long long)arg1;
- (void)recvNowActivityConfig:(id)arg1;
- (id)currentConfigforType:(unsigned long long)arg1;
- (id)init;
- (void)processNowActivityPendantConfigPushResponse:(id)arg1;

@end

