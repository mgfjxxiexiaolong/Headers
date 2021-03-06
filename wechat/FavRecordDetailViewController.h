//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FavBaseDetailViewController.h"

#import "BaseScanLogicDelegate-Protocol.h"
#import "FavFileDetailDelegate-Protocol.h"
#import "FavForwardLogicDelegate-Protocol.h"
#import "FavRecordNodeViewDelegate-Protocol.h"
#import "FavSightViewDelegate-Protocol.h"
#import "FavVideoDetailDelegate-Protocol.h"
#import "ForwardMessageLogicDelegate-Protocol.h"
#import "ViewLocationDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "scrollViewDelegate-Protocol.h"

@class FavForwardLogicController, FavSightView, FavoritesItemDataField, ForwardMessageLogicController, NSString, ScanQRCodeLogicController, UIView, WCActionSheet;

@interface FavRecordDetailViewController : FavBaseDetailViewController <ForwardMessageLogicDelegate, BaseScanLogicDelegate, WCActionSheetDelegate, scrollViewDelegate, FavSightViewDelegate, FavRecordNodeViewDelegate, ViewLocationDelegate, FavFileDetailDelegate, FavVideoDetailDelegate, FavForwardLogicDelegate>
{
    FavForwardLogicController *m_favForwardController;
    FavSightView *m_sightView;
    unsigned int m_uiLongPressedIndex;
    _Bool m_hasIllegalData;
    NSString *m_chatDate;
    NSString *m_chatDatePrefix;
    UIView *m_headerView;
    UIView *m_headerContainView;
    UIView *m_headerSepLine;
    UIView *m_statusBarBkgView;
    double lastContentOffset;
    _Bool isDragging;
    ForwardMessageLogicController *m_forwardLogic;
    ScanQRCodeLogicController *_scanQRCodeLogic;
    int m_qrcodeActionSheetIndex;
    WCActionSheet *favImgLongPressAction;
    FavoritesItemDataField *_scrollToData;
}

+ (id)genHeaderViewWithTitle:(id)arg1;
@property(retain, nonatomic) FavoritesItemDataField *scrollToData; // @synthesize scrollToData=_scrollToData;
- (void).cxx_destruct;
- (void)onScanEnds;
- (void)onJumpToViewDetail:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onExitFullScreen;
- (id)getFavForawrdViewController;
- (void)OpenVideoFavDataWrap:(id)arg1;
- (void)OpenVideoFileByFavDataWrap:(id)arg1;
- (void)OnFavoritesItemDownloadFinished:(id)arg1 ErrCode:(int)arg2;
- (void)OnDownloadFavoritesItemFail:(id)arg1 LocalDataId:(id)arg2;
- (void)OnDownloadFavoritesItemOK:(id)arg1 LocalDataId:(id)arg2;
- (void)onSendLocationToFriend:(id)arg1 ViewController:(id)arg2;
- (id)getCurrentViewController;
- (void)onClickOnNode:(id)arg1;
- (void)onFavViewSizeDidChange:(id)arg1 withFavData:(id)arg2;
- (void)onLongPressImgNode:(id)arg1;
- (void)onWillLongPressImgNode:(id)arg1;
- (void)onClickOnImgNode:(id)arg1 DataIndex:(unsigned int)arg2;
- (void)didFinishedLoading:(id)arg1;
- (void)checkScrollToBottom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)showTopBar;
- (void)resetHeader:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onSaveFavDataImg;
- (void)onForwardFavDataWrap2WC;
- (void)onForwardFavDataWrap2Msg;
- (void)onAction:(id)arg1;
- (void)genContent:(id)arg1 indexPath:(id)arg2;
- (void)genTimeCell:(id)arg1;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (long long)getRowsInContentSection;
- (void)adjustViewAndNavBarRect;
- (void)pulseAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)makeCellSelectionSyleNoneAtIndexPath:(id)arg1;
- (void)unhighlightRowAtIndexPath:(id)arg1;
- (void)highlightRowAtIndexPath:(id)arg1;
- (void)scrollToIndex:(long long)arg1 atScrollPosition:(long long)arg2 needHighlight:(_Bool)arg3 animation:(_Bool)arg4;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)useTransparentNavibar;
- (void)initNavigationBar;
- (void)dealloc;
- (id)initWithFavItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

