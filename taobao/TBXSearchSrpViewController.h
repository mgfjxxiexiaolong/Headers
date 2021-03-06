//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TBXSearchSrpViewModelDelegate-Protocol.h"
#import "XSearchSDKDelegate-Protocol.h"

@class NSDictionary, NSString, NSURL, TBXSearchFloatView, TBXSearchSrpViewModel, XSearchContext, XSearchSDKViewController;

@interface TBXSearchSrpViewController : UIViewController <XSearchSDKDelegate, TBXSearchSrpViewModelDelegate>
{
    XSearchContext *_searchContext;
    XSearchSDKViewController *_searchVC;
    NSDictionary *_savedQuery;
    NSURL *_url;
    TBXSearchSrpViewModel *_viewModel;
    TBXSearchFloatView *_floatBar;
}

@property(retain, nonatomic) TBXSearchFloatView *floatBar; // @synthesize floatBar=_floatBar;
@property(retain, nonatomic) TBXSearchSrpViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSDictionary *savedQuery; // @synthesize savedQuery=_savedQuery;
@property(retain, nonatomic) XSearchSDKViewController *searchVC; // @synthesize searchVC=_searchVC;
@property(retain, nonatomic) XSearchContext *searchContext; // @synthesize searchContext=_searchContext;
- (void).cxx_destruct;
- (void)setSDKVCViewFrame;
- (double)statusBarHeight;
- (void)tabBarComponentClickTabItem:(id)arg1;
- (void)goToTop;
- (void)searchScrollViewDidScroll:(id)arg1;
- (void)onMoreItemClicked:(id)arg1;
- (void)onBackItemClicked:(id)arg1;
- (void)addGlobalEvent;
- (void)addEventForService:(id)arg1;
- (void)registerComponents;
- (void)filterSearchFail:(id)arg1;
- (void)filterSearchSuccess;
- (void)filterSearchStart;
- (void)fixSearchFail:(id)arg1;
- (void)fixSearchSuccess;
- (void)fixSearchStart;
- (void)tabDidHiddenForPageDisAppear;
- (void)updatePageNameAndArgs;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)searchWithParams:(id)arg1;
- (void)fixedSearch:(id)arg1;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (id)loadViewModel;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

