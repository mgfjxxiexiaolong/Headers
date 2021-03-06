//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TBXSearchErrorViewDelegate-Protocol.h"
#import "XSearchSDKDelegate-Protocol.h"

@class NSDictionary, NSString, TBSearchInput, TBXSearchEmptyView, TBXSearchErrorView, TBXSearchFloatView, TBXSearchLoadingView, XSearchConfig, XSearchContext, XSearchRegModel, XSearchSDKViewController, XSearchService;

@interface TBXSearchLandingViewController : UIViewController <TBXSearchErrorViewDelegate, XSearchSDKDelegate>
{
    NSString *_apiName;
    NSString *_apiVersion;
    XSearchService *_searchService;
    XSearchContext *_searchContext;
    XSearchSDKViewController *_searchVC;
    NSDictionary *_savedQuery;
    XSearchRegModel *_regModel;
    XSearchConfig *_config;
    TBSearchInput *_searchBar;
    TBXSearchLoadingView *_loadingView;
    TBXSearchEmptyView *_emptyView;
    TBXSearchErrorView *_errorView;
    TBXSearchFloatView *_floatBar;
}

@property(retain, nonatomic) TBXSearchFloatView *floatBar; // @synthesize floatBar=_floatBar;
@property(retain, nonatomic) TBXSearchErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) TBXSearchEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) TBXSearchLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) TBSearchInput *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) XSearchConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) XSearchRegModel *regModel; // @synthesize regModel=_regModel;
@property(retain, nonatomic) NSDictionary *savedQuery; // @synthesize savedQuery=_savedQuery;
@property(retain, nonatomic) XSearchSDKViewController *searchVC; // @synthesize searchVC=_searchVC;
@property(retain, nonatomic) XSearchContext *searchContext; // @synthesize searchContext=_searchContext;
@property(retain, nonatomic) XSearchService *searchService; // @synthesize searchService=_searchService;
@property(retain, nonatomic) NSString *apiVersion; // @synthesize apiVersion=_apiVersion;
@property(retain, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
- (void).cxx_destruct;
- (void)fixSearchFail:(id)arg1;
- (void)fixSearchSuccess;
- (void)fixSearchStart;
- (void)removeStatusView;
- (void)refreshAgain;
- (void)registerComponent;
- (void)dealloc;
- (void)updatePageNameAndArgs;
- (void)goToTop;
- (void)dataProcess:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)searchBarDataLoaded;
- (void)searchScrollViewDidScroll:(id)arg1;
- (void)configNavBar;
- (void)configFloatBar;
- (void)viewDidLoad;
- (void)searchWithParams:(id)arg1;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)addEventForService:(id)arg1;
- (void)setFixedParams:(id)arg1;
- (void)fixedSearch:(id)arg1;
- (void)initRegModel;
- (id)getNewQuery:(id)arg1;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

