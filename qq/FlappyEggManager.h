//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSRecursiveLock, NSTimer, UITableView;

@interface FlappyEggManager : NSObject
{
    NSArray *_configList;
    NSRecursiveLock *_configListLock;
    int _eggNum;
    NSTimer *_timer;
    NSMutableArray *_eggs;
    int _eggJDBidCount;
    _Bool _hasJDEggRequested;
    UITableView *_tableView;
}

+ (id)defaultManager;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (_Bool)isShowingFlappyEgg;
- (void)updateEmojiEggFlappyWithID:(id)arg1;
- (void)_updateEmojiEggFlappy:(id)arg1;
- (void)retSetJDEggRequested;
- (void)calculateFlappyEggCount:(id)arg1;
- (_Bool)checkBussinessEggConfigModel:(id)arg1;
- (id)_getReportConfigIDParameter:(id)arg1;
- (id)_getReportSessionParameter:(unsigned long long)arg1;
- (void)reportStructuredMsgWithSessionType:(long long)arg1;
- (void)_reportUserDataWithMatchResultArray:(id)arg1 matchType:(long long)arg2;
- (id)_flappyEggDirectoryPath;
- (id)_configDirectoryPath;
- (id)_configListPath;
- (id)_loadConfigList;
- (_Bool)unZipAndReloadConfigList:(id)arg1;
- (void)enableEggWithIDs:(id)arg1;
- (void)disableEggWithIDs:(id)arg1;
- (id)_emojiImageWithString:(id)arg1;
- (id)_getImageFromFlappyEggImageModel:(id)arg1;
- (id)_getImagesFromFlappyEggConfigModel:(id)arg1;
- (unsigned long long)calculateCombosCountOfMessage:(id)arg1 withLastMessage:(id)arg2;
- (id)getResultOfMatchType:(long long)arg1 fromResultArray:(id)arg2;
- (id)_filterRedundancyMessages:(id)arg1;
- (id)_matchKeywordWithMessageModel:(id)arg1 isLastMessage:(_Bool)arg2;
- (id)_matchKeyword:(id)arg1;
- (void)matchKeyword:(id)arg1 withActionBlock:(CDUnknownBlockType)arg2;
- (id)filterAtChar:(id)arg1;
- (void)matchKeywordAndPlayAnimation:(id)arg1 withInfo:(id)arg2;
- (void)_showStoreyTipWithKeywordMatchResult:(id)arg1 withInfo:(id)arg2;
- (void)showStoreyTip:(id)arg1 count:(int)arg2;
- (void)_showFlappyEggsWithKeywordMatchResult:(id)arg1;
- (void)showFlappyEggs:(id)arg1 count:(unsigned long long)arg2;
- (void)showFlappyEgg;
- (void)reset;
- (id)configList;
- (id)init;

@end

