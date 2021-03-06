//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/APMidasCftPayDelegate-Protocol.h>
#import <QQMainProject/APMidasMbH5ViewControllerDelegate-Protocol.h>
#import <QQMainProject/APMidasMbInputViewControllerDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class APMidasBizManager, APMidasMbInputViewController, APMidasUIChannelOrderView, APMidasWechatPaySignBiz, NSMutableArray, NSString, QQNavigationController, UITableView;
@protocol APMidasUIQQPayChannelViewControllerDelegate;

@interface APMidasUIQQPayChannelViewController : QQViewController <APMidasCftPayDelegate, UIAlertViewDelegate, APMidasMbInputViewControllerDelegate, APMidasMbH5ViewControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    id <APMidasUIQQPayChannelViewControllerDelegate> channelVcDelegate;
    APMidasBizManager *bizManager;
    _Bool _paySuccessReturnFromCft;
    _Bool _payErrorReturnFromCft;
    unsigned long long _cftErrorCode;
    _Bool _wechatSignConfirmShow;
    APMidasWechatPaySignBiz *_wechatSignBiz;
    APMidasUIChannelOrderView *_orderView;
    NSMutableArray *_dispChannels;
    NSMutableArray *_moreDispChannels;
    APMidasMbInputViewController *_mbInputVc;
    QQNavigationController *_navVc;
    UITableView *_tableView;
}

+ (id)qqPayChannelViewController;
- (void)onMbH5InputClose;
- (void)onMbH5InputSuccess;
- (void)onMbInputViewControllerClose:(id)arg1;
- (void)onMbInputViewControllerConfirm:(id)arg1;
- (void)goToQQCardPayView;
- (void)goToMcardPayView;
- (_Bool)isSupportHf;
- (void)goToHFPayView;
- (void)payByWechat;
- (void)payByAcct;
- (void)payByQQWallet;
- (void)payByChannel:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)decorateWechatCell:(id)arg1 channelInfo:(id)arg2;
- (void)decorateQQWalletCell:(id)arg1 channelInfo:(id)arg2;
- (void)decorateBankCell:(id)arg1 channelInfo:(id)arg2;
- (void)decorateQCoinCell:(id)arg1 channelInfo:(id)arg2;
- (void)commonDecorateBankCell:(id)arg1;
- (void)checkOrderInfo;
- (void)onTenPayFinish:(id)arg1 errorCode:(long long)arg2;
- (void)lockCouponIfNeeded;
- (void)processRollbackFail;
- (void)rollbackIfNeeded;
- (void)onWechatPayFinish:(id)arg1;
- (id)getOtherCell:(id)arg1 indexPath:(id)arg2;
- (void)gotoResultBigPage;
- (void)callbackFromWechat;
- (void)onWechatPaySuccess;
- (void)onSaveSucceeded;
- (void)save:(_Bool)arg1;
- (void)dealForMb;
- (void)onSaveError:(long long)arg1 innerError:(id)arg2 msg:(id)arg3;
- (void)onNetworkError:(long long)arg1;
- (_Bool)needExclude:(id)arg1;
- (void)constructChannels;
- (id)getChannelInfoById:(id)arg1 inChannels:(id)arg2;
- (id)bankCellFroTableView:(id)arg1;
- (void)onCancel;
- (void)leftButtonClick:(id)arg1;
- (void)processCftReturnIfNeeded;
- (void)showError:(id)arg1;
- (id)GetCurrentTitle;
- (void)loadView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

