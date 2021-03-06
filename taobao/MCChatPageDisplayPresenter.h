//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCMessageListPresenter.h"

#import "MCChatInputComponentPresenterDelegate-Protocol.h"
#import "MCChatMessageListVoDelegate-Protocol.h"
#import "MCChatPageDisplayPresenterForCellAndBubbleInterface-Protocol.h"
#import "MCChatPageDisplayPresenterInterface-Protocol.h"
#import "MCChatPageDisplayViewDelegate-Protocol.h"

@class MCBaseMessageListVo, MCCCellManager, MCChatPageConfig, MCChatPageDisplayView, NSDictionary, NSMutableSet, NSString;
@protocol MCChatDisplayHeaderViewDelegate, MCChatDisplayWeexFixCardDelegate, MCChatInputComponentPresenterProtocol;

@interface MCChatPageDisplayPresenter : MCMessageListPresenter <MCChatInputComponentPresenterDelegate, MCChatMessageListVoDelegate, MCChatPageDisplayViewDelegate, MCChatPageDisplayPresenterInterface, MCChatPageDisplayPresenterForCellAndBubbleInterface>
{
    _Bool _hasloadData;
    _Bool _isActive;
    MCCCellManager *_cellManager;
    NSMutableSet *_decorateComponentList;
    double _beginLoadTime;
}

@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) _Bool hasloadData; // @synthesize hasloadData=_hasloadData;
@property(nonatomic) double beginLoadTime; // @synthesize beginLoadTime=_beginLoadTime;
@property(retain, nonatomic) NSMutableSet *decorateComponentList; // @synthesize decorateComponentList=_decorateComponentList;
@property(retain, nonatomic) MCCCellManager *cellManager; // @synthesize cellManager=_cellManager;
- (void).cxx_destruct;
- (void)reloadData;
- (void)headImageDidLongPressForMessage:(id)arg1;
- (id)getNextUnReadSoundMessageByCurrentMessage:(id)arg1;
- (void)userChange:(id)arg1;
- (void)sessionChange:(id)arg1;
- (void)doPageLoadPerformanceMonitor;
- (void)reloadDataWithScrollStyle:(unsigned long long)arg1;
- (void)insertRowAtIndex:(long long)arg1 scrollStyle:(unsigned long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)unReadClickAndScroll;
- (void)aiTaClickAndScroll;
- (void)showOrHiddenUnreadAitaLocator;
- (void)refreshDataAndUI;
- (void)updateCellHeader:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 baseVC:(id)arg2 bizKey:(id)arg3 sesssionID:(id)arg4 config:(id)arg5 inputPresenter:(id)arg6;

// Remaining properties
@property(retain, nonatomic) MCChatPageDisplayView *chatPageDisplayView;
@property(nonatomic) __weak id <MCChatInputComponentPresenterProtocol> chatPageInptuPresenter;
@property(retain, nonatomic) MCChatPageConfig *config;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <MCChatDisplayHeaderViewDelegate> headerViewDelegate;
@property(retain, nonatomic) MCBaseMessageListVo *listVo;
@property(retain, nonatomic) NSString *sessionID;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSDictionary *userInfo;
@property(nonatomic) __weak id <MCChatDisplayWeexFixCardDelegate> weexFixCardDelegate;

@end

