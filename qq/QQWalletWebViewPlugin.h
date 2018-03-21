//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQWebViewPluginQQBizBase.h>

#import <QQMainProject/ABPeoplePickerNavigationControllerDelegate-Protocol.h>
#import <QQMainProject/MulMemSelBusiProcessDelegate-Protocol.h>
#import <QQMainProject/QQFriendSelectedViewControllerDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>

@class NSMutableArray, NSString, QQWalletVideoPluginHandler;

@interface QQWalletWebViewPlugin : QQWebViewPluginQQBizBase <ABPeoplePickerNavigationControllerDelegate, UIAlertViewDelegate, QQFriendSelectedViewControllerDelegate, MulMemSelBusiProcessDelegate>
{
    NSMutableArray *_list;
    NSString *_callBack;
    NSString *_title;
    int _mode;
    QQWalletVideoPluginHandler *_videoPluginHandler;
}

+ (_Bool)shouldInterceptOpenAppURL:(id)arg1 sourceURL:(id)arg2 shouldJumpToBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (_Bool)hasContactPermission;
- (void)openQQFriendViewController:(id)arg1 frome:(long long)arg2;
- (void)analyseContactsGetPhoneNumber;
- (id)tripNumber:(id)arg1;
- (void)_executeJsCallbackFriendSelected:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)onBusinessProcessWithSelectedMems:(id)arg1 currentViewControllerClass:(id)arg2 currentViewController:(id)arg3;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (_Bool)friendSelectedViewController:(id)arg1 didSelectFriend:(id)arg2 type:(int)arg3;
- (_Bool)friendSelectedViewController:(id)arg1 didClickButtonAtIndex:(long long)arg2 withSelectedFriend:(id)arg3 type:(int)arg4;
- (_Bool)handleJsBridgeRequest_qw_getVideo:(id)arg1;
- (_Bool)handleJsBridgeRequest_qw_charge_tenpayTransfer:(id)arg1;
- (_Bool)handleJsBridgeRequest_qw_data_getFriendInfo:(id)arg1;
- (_Bool)handleJsBridgeRequest_qw_charge_isExistVideo:(id)arg1;
- (_Bool)handleJsBridgeRequest_qw_charge_downloadVideo:(id)arg1;
- (_Bool)handleJsBridgeRequest_qw_charge_stopVideo:(id)arg1;
- (_Bool)handleJsBridgeRequest_qw_charge_pauseVideo:(id)arg1;
- (_Bool)handleJsBridgeRequest_qw_charge_playVideo:(id)arg1;
- (_Bool)handleJsBridgeRequest_qw_charge_initVideo:(id)arg1;
- (id)videoPluginHandler;
- (_Bool)handleJsBridgeRequest_qw_charge_notifyViewUpdate:(id)arg1;
- (_Bool)handleJsBridgeRequest_qw_charge_getAppAuthorizationCode:(id)arg1;
- (_Bool)handleJsBridgeRequest_qw_charge_getAllContact:(id)arg1;
- (_Bool)handleJsBridgeRequest_qw_charge_getSelectContact:(id)arg1;
- (void)pluginDidInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
