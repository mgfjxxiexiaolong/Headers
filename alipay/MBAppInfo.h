//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface MBAppInfo : NSObject
{
    _Bool _hasMenuFunction;
    unsigned long long _appType;
    NSString *_recentContactUserID;
    NSString *_recentContactUserType;
    NSString *_recentDisplayName;
    NSString *_mainTitle;
    NSString *_settingDetailIntro;
    NSString *_syncBizKey;
    NSString *_tableNamePrefix;
    NSString *_latestCheckClearDateKey;
    NSString *_friendTabCreateTimeKey;
    NSString *_dataBaseMergedKey;
    NSString *_mainIcon;
    NSString *_hasNewMsgNotifyKey;
    NSString *_clearMsgNotifyKey;
}

@property(nonatomic) _Bool hasMenuFunction; // @synthesize hasMenuFunction=_hasMenuFunction;
@property(copy, nonatomic) NSString *clearMsgNotifyKey; // @synthesize clearMsgNotifyKey=_clearMsgNotifyKey;
@property(copy, nonatomic) NSString *hasNewMsgNotifyKey; // @synthesize hasNewMsgNotifyKey=_hasNewMsgNotifyKey;
@property(copy, nonatomic) NSString *mainIcon; // @synthesize mainIcon=_mainIcon;
@property(copy, nonatomic) NSString *dataBaseMergedKey; // @synthesize dataBaseMergedKey=_dataBaseMergedKey;
@property(copy, nonatomic) NSString *friendTabCreateTimeKey; // @synthesize friendTabCreateTimeKey=_friendTabCreateTimeKey;
@property(copy, nonatomic) NSString *latestCheckClearDateKey; // @synthesize latestCheckClearDateKey=_latestCheckClearDateKey;
@property(copy, nonatomic) NSString *tableNamePrefix; // @synthesize tableNamePrefix=_tableNamePrefix;
@property(copy, nonatomic) NSString *syncBizKey; // @synthesize syncBizKey=_syncBizKey;
@property(copy, nonatomic) NSString *settingDetailIntro; // @synthesize settingDetailIntro=_settingDetailIntro;
@property(copy, nonatomic) NSString *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(copy, nonatomic) NSString *recentDisplayName; // @synthesize recentDisplayName=_recentDisplayName;
@property(copy, nonatomic) NSString *recentContactUserType; // @synthesize recentContactUserType=_recentContactUserType;
@property(copy, nonatomic) NSString *recentContactUserID; // @synthesize recentContactUserID=_recentContactUserID;
@property(nonatomic) unsigned long long appType; // @synthesize appType=_appType;
- (void).cxx_destruct;

@end
