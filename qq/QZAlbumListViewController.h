//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZPhotoModuleViewController.h>

#import <QQMainProject/QWSubscriber-Protocol.h>
#import <QQMainProject/QZAlbumEditViewControllerDelegate-Protocol.h>
#import <QQMainProject/QZCommonPhotoCellDelegate-Protocol.h>
#import <QQMainProject/QZPhotoModuleCellDelegate-Protocol.h>
#import <QQMainProject/QZPhotoModuleDownloaderInterfaceDelegate-Protocol.h>

@class NSString, QZAlbumListBanner, QZAlbumListCellDelegate, QZAlbumListLoader, QZAlbumListStore;

@interface QZAlbumListViewController : QZPhotoModuleViewController <QWSubscriber, QZPhotoModuleCellDelegate, QZAlbumEditViewControllerDelegate, QZCommonPhotoCellDelegate, QZPhotoModuleDownloaderInterfaceDelegate>
{
    _Bool _reloadDataWhenWillAppear;
    double _layoutDrawingBeginTime;
    _Bool _isFirstLoad;
    _Bool _fromTabViewController;
    _Bool _isAutoRefreshWhenWillAppear;
    QZAlbumListStore *_store;
    QZAlbumListLoader *_loader;
    QZAlbumListBanner *_banner;
    QZAlbumListCellDelegate *_cellDelegate;
}

@property(retain, nonatomic) QZAlbumListCellDelegate *cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(retain, nonatomic) QZAlbumListBanner *banner; // @synthesize banner=_banner;
@property(retain, nonatomic) QZAlbumListLoader *loader; // @synthesize loader=_loader;
@property(retain, nonatomic) QZAlbumListStore *store; // @synthesize store=_store;
@property(nonatomic) _Bool isAutoRefreshWhenWillAppear; // @synthesize isAutoRefreshWhenWillAppear=_isAutoRefreshWhenWillAppear;
@property(nonatomic) _Bool fromTabViewController; // @synthesize fromTabViewController=_fromTabViewController;
- (void)onClickAdvButton:(id)arg1 shownKey:(id)arg2;
- (void)showBanner;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)emptyCell:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)rowNum;
- (void)onCreateAlbumSucceeded:(id)arg1 selectedPhotoList:(id)arg2;
- (void)enterAlbumEditViewController:(id)arg1 selectedPhotoList:(id)arg2;
- (void)onEnterCreateAlbum;
- (void)checkFootViewState;
- (id)navigationTitleView;
- (id)albumList;
- (long long)uin;
- (void)handleEnterForeground;
- (void)handleEnterBackground;
- (_Bool)shouldShowAlbumBanner;
- (void)updateNavigationActiveViewState:(_Bool)arg1;
- (_Bool)onHasMore;
- (_Bool)onLoadMore;
- (_Bool)onRefresh;
- (_Bool)hasNoFeeds;
- (_Bool)isTransparentRefreshControl;
- (void)initNotificationObservers:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)afterViewDidAppear;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)newState:(id)arg1;
- (id)initWithUIN:(unsigned long long)arg1 nickname:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

