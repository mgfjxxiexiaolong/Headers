//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPSearchBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTRpcAsyncCaller, NSString, PPFootView;

@interface PPCommendViewController : PPSearchBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isRequestNextPage;
    _Bool _needRequest;
    PPFootView *_footerMessageView;
    DTRpcAsyncCaller *_addSearchRPC;
}

@property(nonatomic) __weak DTRpcAsyncCaller *addSearchRPC; // @synthesize addSearchRPC=_addSearchRPC;
- (void).cxx_destruct;
- (void)receiveAddSucessMsg:(id)arg1;
- (void)requestRecommendOfficialTypes:(id)arg1;
- (void)requestNextPage:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)addButtonClickedInCell:(id)arg1 withDicInfo:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewWillDestroy;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

