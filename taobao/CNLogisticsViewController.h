//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "UIViewControllerTBNavigator-Protocol.h"

@class CNLogisticOrderListItem, CNLogisticService, CNLogisticsDetailView, CNLogisticsListView, NSDate, NSString, TBModelStatusHandler;

@interface CNLogisticsViewController : TBViewController <UIViewControllerTBNavigator>
{
    _Bool _isLoadFinish;
    _Bool _isH5Action;
    _Bool _isWhenAppearLoadData;
    NSString *_strOrderFormId;
    CNLogisticOrderListItem *_nativeItem;
    CDUnknownBlockType _appearLoadDataBlock;
    CNLogisticService *_service;
    NSDate *_lastRefreshDate;
    TBModelStatusHandler *_statusHandler;
    CNLogisticsListView *_listView;
    CNLogisticsDetailView *_detailView;
    CDUnknownBlockType _loadDataBlock;
    CDUnknownBlockType _whenAppearLoadDataBlock;
}

@property(copy, nonatomic) CDUnknownBlockType whenAppearLoadDataBlock; // @synthesize whenAppearLoadDataBlock=_whenAppearLoadDataBlock;
@property(copy, nonatomic) CDUnknownBlockType loadDataBlock; // @synthesize loadDataBlock=_loadDataBlock;
@property(nonatomic) _Bool isWhenAppearLoadData; // @synthesize isWhenAppearLoadData=_isWhenAppearLoadData;
@property(retain, nonatomic) CNLogisticsDetailView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) CNLogisticsListView *listView; // @synthesize listView=_listView;
@property(nonatomic) _Bool isH5Action; // @synthesize isH5Action=_isH5Action;
@property(retain, nonatomic) TBModelStatusHandler *statusHandler; // @synthesize statusHandler=_statusHandler;
@property(nonatomic) _Bool isLoadFinish; // @synthesize isLoadFinish=_isLoadFinish;
@property(retain, nonatomic) NSDate *lastRefreshDate; // @synthesize lastRefreshDate=_lastRefreshDate;
@property(retain, nonatomic) CNLogisticService *service; // @synthesize service=_service;
@property(copy, nonatomic) CDUnknownBlockType appearLoadDataBlock; // @synthesize appearLoadDataBlock=_appearLoadDataBlock;
@property(retain, nonatomic) CNLogisticOrderListItem *nativeItem; // @synthesize nativeItem=_nativeItem;
@property(retain, nonatomic) NSString *strOrderFormId; // @synthesize strOrderFormId=_strOrderFormId;
- (void).cxx_destruct;
- (void)backItemClicked:(id)arg1;
- (void)clear;
- (void)viewDidUnload;
- (void)dealloc;
- (void)removeEmptyView;
- (void)loadData;
- (void)showDetailView:(id)arg1;
- (void)showListView:(id)arg1 partOutPackage:(_Bool)arg2 unDeliverItemList:(id)arg3;
- (void)internalLoadData;
- (void)openH5;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

