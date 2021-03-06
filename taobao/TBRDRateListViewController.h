//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBRDBaseViewController.h"

#import "TBCEventHandleProtocol-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class NSString, TBCEmptyView, TBCNineBlockImageComponent, TBCTableView, TBCVideoPlayView, TBRDAskAllView, TBRDFilterTagView, TBRDRateListAllLoadedFooterView, TBRDRateListDefaultPraiseView, TBRDRateListLoadingView, TBRDRateListViewDataController;

@interface TBRDRateListViewController : TBRDBaseViewController <TBCEventHandleProtocol, UIActionSheetDelegate>
{
    _Bool isFilterViewLoad;
    _Bool isAudioHandle;
    _Bool isCanShowShopGardenCard;
    _Bool isHandleShopGardenCard;
    _Bool isHandleAlbumCard;
    _Bool isShowAlbumCard;
    NSString *_expression;
    CDUnknownBlockType _requestCompleteCallback;
    TBRDRateListViewDataController *_dataController;
    TBRDAskAllView *_askView;
    TBRDFilterTagView *_filterTagView;
    TBCTableView *_tableView;
    TBRDRateListLoadingView *_loadingView;
    TBRDRateListDefaultPraiseView *_defaultPraiseVie;
    TBCEmptyView *_emptyView;
    TBRDRateListAllLoadedFooterView *_allLoadedFooterView;
    NSString *_rateIdForUnLike;
    TBCVideoPlayView *_videoPlayView;
    TBCNineBlockImageComponent *_currentPlayingVideoC;
    NSString *_orangeAutoVideoPlayResult;
    NSString *_orangeAlbumEntranceResult;
}

@property(copy, nonatomic) NSString *orangeAlbumEntranceResult; // @synthesize orangeAlbumEntranceResult=_orangeAlbumEntranceResult;
@property(copy, nonatomic) NSString *orangeAutoVideoPlayResult; // @synthesize orangeAutoVideoPlayResult=_orangeAutoVideoPlayResult;
@property(retain, nonatomic) TBCNineBlockImageComponent *currentPlayingVideoC; // @synthesize currentPlayingVideoC=_currentPlayingVideoC;
@property(retain, nonatomic) TBCVideoPlayView *videoPlayView; // @synthesize videoPlayView=_videoPlayView;
@property(copy, nonatomic) NSString *rateIdForUnLike; // @synthesize rateIdForUnLike=_rateIdForUnLike;
@property(retain, nonatomic) TBRDRateListAllLoadedFooterView *allLoadedFooterView; // @synthesize allLoadedFooterView=_allLoadedFooterView;
@property(retain, nonatomic) TBCEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) TBRDRateListDefaultPraiseView *defaultPraiseVie; // @synthesize defaultPraiseVie=_defaultPraiseVie;
@property(retain, nonatomic) TBRDRateListLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) TBCTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) TBRDFilterTagView *filterTagView; // @synthesize filterTagView=_filterTagView;
@property(retain, nonatomic) TBRDAskAllView *askView; // @synthesize askView=_askView;
@property(retain, nonatomic) TBRDRateListViewDataController *dataController; // @synthesize dataController=_dataController;
@property(copy, nonatomic) CDUnknownBlockType requestCompleteCallback; // @synthesize requestCompleteCallback=_requestCompleteCallback;
@property(copy, nonatomic) NSString *expression; // @synthesize expression=_expression;
- (void).cxx_destruct;
- (void)dealloc;
- (void)zangStateUpdateNotificationAction:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleFullScreenPlayVoice:(id)arg1;
- (void)showVideoPlayViewAtComponent:(id)arg1;
- (void)cleanCurrentVideoPlayView;
- (void)handleVideoplayViewClickEvent;
- (void)hanldeOutScreenAutoPlayView;
- (void)handleAutoPlay;
- (id)videoPlayFiltrationRule;
- (void)clickTrack:(id)arg1 context:(id)arg2 extra:(id)arg3;
- (void)clickImageOrVideoAtIndex:(long long)arg1 imageViews:(id)arg2 imagePaths:(id)arg3 rateId:(id)arg4 complete:(CDUnknownBlockType)arg5;
- (void)backToItemDetail:(id)arg1;
- (void)onHandleEvent:(CDStruct_89ddc8e1)arg1;
- (void)showFooterViewAtPage:(long long)arg1;
- (void)showAlbumCard;
- (void)hanldeAlbumEntranceCardData;
- (void)handleShopGardenCardRequestComplete:(CDUnknownBlockType)arg1;
- (void)setupFilterTagView;
- (void)setupTableViewDelegate;
- (void)refreshViewController;
- (void)updateZangStateOfRate:(id)arg1 withAlreadyLike:(id)arg2 withLikeCount:(id)arg3;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

