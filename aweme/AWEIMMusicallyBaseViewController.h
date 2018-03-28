//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEIMBaseDataControllerDelegate-Protocol.h"
#import "AWEIMChatListViewControllerDelegate-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"

@class AWEIMBaseNavView, AWEIMChatListViewController, NSString;

@interface AWEIMMusicallyBaseViewController : UIViewController <AWEIMBaseDataControllerDelegate, AWEIMChatListViewControllerDelegate, BTDRouterViewControllerProtocol>
{
    AWEIMBaseNavView *_navView;
    AWEIMChatListViewController *_chatListVC;
}

+ (void)load;
@property(retain, nonatomic) AWEIMChatListViewController *chatListVC; // @synthesize chatListVC=_chatListVC;
@property(retain, nonatomic) AWEIMBaseNavView *navView; // @synthesize navView=_navView;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)_setupUI;
- (void)backBtnClicked:(id)arg1;
- (void)contactBtnClicked:(id)arg1;
- (void)didTransferToChat:(id)arg1;
- (void)willDeleteChat:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didReloadChatList;
- (void)didReloadChatListAtIndex:(long long)arg1;
- (void)didAddNewMessage;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)configWithRouterParamDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
