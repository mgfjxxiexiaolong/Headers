//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWBaseController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class APSegmentedControl, NSMutableArray, NSString, UITableView, UIView, WCLoanCaculator, WCSmallDataShowView;

@interface WCPayDetailViewController : WWBaseController <UITableViewDataSource, UITableViewDelegate>
{
    APSegmentedControl *_segmentedCtrl;
    UITableView *_tableView;
    UIView *_headerView;
    NSMutableArray *_modelArray;
    WCSmallDataShowView *_smallShowView;
    int _currentPayType;
    WCLoanCaculator *_bizCaculator;
    WCLoanCaculator *_pubCaculator;
}

- (void).cxx_destruct;
- (void)segmentChanged:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillLayoutSubviews;
- (void)setTableView;
- (void)setDataHeaderView;
- (void)generateModels;
- (void)resetBigScreen;
- (void)viewDidLoad;
- (id)initWithPayData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

