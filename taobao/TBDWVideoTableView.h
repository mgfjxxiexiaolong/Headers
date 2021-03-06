//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "DWPlayerLifecycleProtocol-Protocol.h"
#import "TBDWVideoTableViewCellDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DWInstance, NSDictionary, NSMutableArray, NSString, TBDWVideoTableViewCell, UITableViewCell;
@protocol TBDWTNodViewActionProtocol, TBDWVideoTableViewNextTipProtocol;

@interface TBDWVideoTableView : UITableView <UITableViewDataSource, UITableViewDelegate, DWPlayerLifecycleProtocol, UIScrollViewDelegate, TBDWVideoTableViewCellDelegate>
{
    _Bool _showFooterView;
    _Bool _isRefreshing;
    _Bool _isGoodListShow;
    _Bool _nextTipsShow;
    _Bool _autoPlayInNotWifi;
    _Bool _showDanmaku;
    _Bool _lastVideoTime;
    NSMutableArray *_data;
    DWInstance *_firstInstance;
    DWInstance *_videoInstance;
    TBDWVideoTableViewCell *_playingCell;
    long long _currentVideoIndex;
    id <TBDWTNodViewActionProtocol> _actionDelegate;
    id <TBDWVideoTableViewNextTipProtocol> _nextTipDelegate;
    NSDictionary *_controls;
    NSString *_from;
    NSString *_scm;
    NSString *_spm;
    CDUnknownBlockType _scrollBlock;
    unsigned long long _bottomType;
    CDUnknownBlockType _videoStatusChangedBlock;
    double _footerHeight;
    UITableViewCell *_firstCell;
    NSString *_cellStatus;
}

@property(nonatomic) _Bool lastVideoTime; // @synthesize lastVideoTime=_lastVideoTime;
@property(retain, nonatomic) NSString *cellStatus; // @synthesize cellStatus=_cellStatus;
@property(retain, nonatomic) UITableViewCell *firstCell; // @synthesize firstCell=_firstCell;
@property(nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
@property(copy, nonatomic) CDUnknownBlockType videoStatusChangedBlock; // @synthesize videoStatusChangedBlock=_videoStatusChangedBlock;
@property(nonatomic) unsigned long long bottomType; // @synthesize bottomType=_bottomType;
@property(copy, nonatomic) CDUnknownBlockType scrollBlock; // @synthesize scrollBlock=_scrollBlock;
@property(nonatomic) _Bool showDanmaku; // @synthesize showDanmaku=_showDanmaku;
@property(nonatomic) _Bool autoPlayInNotWifi; // @synthesize autoPlayInNotWifi=_autoPlayInNotWifi;
@property(nonatomic) _Bool nextTipsShow; // @synthesize nextTipsShow=_nextTipsShow;
@property(retain, nonatomic) NSString *spm; // @synthesize spm=_spm;
@property(retain, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(retain, nonatomic) NSDictionary *controls; // @synthesize controls=_controls;
@property(nonatomic) __weak id <TBDWVideoTableViewNextTipProtocol> nextTipDelegate; // @synthesize nextTipDelegate=_nextTipDelegate;
@property(nonatomic) __weak id <TBDWTNodViewActionProtocol> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(nonatomic) _Bool isGoodListShow; // @synthesize isGoodListShow=_isGoodListShow;
@property(nonatomic) long long currentVideoIndex; // @synthesize currentVideoIndex=_currentVideoIndex;
@property(nonatomic) _Bool isRefreshing; // @synthesize isRefreshing=_isRefreshing;
@property(nonatomic) _Bool showFooterView; // @synthesize showFooterView=_showFooterView;
@property(retain, nonatomic) TBDWVideoTableViewCell *playingCell; // @synthesize playingCell=_playingCell;
@property(retain, nonatomic) DWInstance *videoInstance; // @synthesize videoInstance=_videoInstance;
@property(retain, nonatomic) DWInstance *firstInstance; // @synthesize firstInstance=_firstInstance;
@property(retain, nonatomic) NSMutableArray *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)onVideoNormalScreen;
- (void)scrollToVideoCell:(id)arg1;
- (void)videoCompleted;
- (void)onVideoTapToPause:(id)arg1;
- (void)clickPlayButtonToPlay:(id)arg1;
- (void)tapVideoToPlay:(id)arg1;
- (void)hideNextTips;
- (void)willPlayNextVideo:(id)arg1;
- (void)videoPlaying:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)refreshAnimationFinish;
- (id)getVideoInstanceWithModel:(id)arg1;
- (void)visibalCellScrollToTop:(long long)arg1;
- (void)handleScrollDidEndDragging:(_Bool)arg1;
- (void)handleCellStatus:(id)arg1 indexPath:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

