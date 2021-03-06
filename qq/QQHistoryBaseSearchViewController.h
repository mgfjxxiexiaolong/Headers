//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/QQHistorySearchLogicEngineDelegate-Protocol.h>
#import <QQMainProject/QQSearchBaseLogicEngineDelegate-Protocol.h>

@class NSString, QQEmptyView, QQHistorySearchLogicEngine, QQHistroySearchTableView, UISearchBar, UITableView;

@interface QQHistoryBaseSearchViewController : QQViewController <QQHistorySearchLogicEngineDelegate, QQSearchBaseLogicEngineDelegate>
{
    int _searchPage;
    _Bool _hasMoreData;
    _Bool _isFirstIn;
    NSString *_uin;
    NSString *_nick;
    long long _sourceType;
    UITableView *_tableView;
    UISearchBar *_searchBar;
    QQHistorySearchLogicEngine *_logicEngine;
    QQHistroySearchTableView *_searchTableView;
    QQEmptyView *_emptyView;
}

@property(retain, nonatomic) QQEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) QQHistroySearchTableView *searchTableView; // @synthesize searchTableView=_searchTableView;
@property(retain, nonatomic) QQHistorySearchLogicEngine *logicEngine; // @synthesize logicEngine=_logicEngine;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
- (void)actionGetSearchResult:(id)arg1;
- (void)refreshSearchResultWithMsgList:(id)arg1;
- (void)requestGetSearchResultWithKeyWord:(id)arg1;
- (_Bool)searchResultCellDidSelect:(id)arg1;
- (void)searchBarShouldReturn:(id)arg1;
- (void)searchBar:(id)arg1 cancelButtonClick:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchBarValueChange:(id)arg1;
- (void)searchBarEndEdit:(id)arg1;
- (void)searchBarStartEdit:(id)arg1;
- (void)historyLoadMore;
- (void)startSearchKeyword:(id)arg1;
- (void)resignSearchBarFirstResponder;
- (void)didSelectMessageModel:(id)arg1;
- (void)hiddenEmptyView;
- (void)showEmptyView;
- (void)refreshSearchResultTable;
- (_Bool)getGroupDicussSearchFlag:(id)arg1;
- (id)getSearBarButton;
- (id)getSearchBarTextFiled;
- (void)layoutViewsIfNeeds:(id)arg1;
- (void)createEmptyView;
- (void)createIndexTableView;
- (void)createSearchBar;
- (void)createSearchTableView;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUin:(id)arg1 nick:(id)arg2 source:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

