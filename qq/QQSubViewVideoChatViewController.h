//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQGroupAVChatViewController.h>

#import <QQMainProject/BackViewControllerDelegate-Protocol.h>
#import <QQMainProject/QQAVNoticeActionDelegate-Protocol.h>
#import <QQMainProject/QQGroupAudioManageRoomDelegate-Protocol.h>

@class NSString, NSTimer, QQGroupAudioManageRoomViewController;

@interface QQSubViewVideoChatViewController : QQGroupAVChatViewController <QQGroupAudioManageRoomDelegate, BackViewControllerDelegate, QQAVNoticeActionDelegate>
{
    int _MicMode;
    _Bool _isManager;
    unsigned long long _noiseValidDura;
    NSTimer *_refreshUserNoiseTimer;
    _Bool _isNoisePriority;
    _Bool _isDisplayingPSTNBtn;
    QQGroupAudioManageRoomViewController *_manageRoomController;
}

- (_Bool)isScreenLocked;
- (unsigned int)GetCurrentCount;
- (void)onControlPanelShow:(_Bool)arg1;
- (void)onAVNoticeReset;
- (void)onAVNoticeRemoveContent:(int)arg1;
- (void)onAVNoticeSetContent:(int)arg1;
- (void)onNoiseCtrlButtonClick:(id)arg1;
- (void)setNoiseCtrlButtonText:(id)arg1;
- (_Bool)adjustNoiseCtrlButton:(id)arg1;
- (void)refreshTips;
- (id)createNoiseCtrlButton;
- (void)initNoiseCtrlButtons;
- (void)OnUserAudioNoisy:(id)arg1;
- (void)onMemberSuspectNoisy:(int)arg1 inMemArray:(id)arg2;
- (void)setAudioNoiseCtrlParam;
- (_Bool)refreshUserNoiseState;
- (void)onRefreshUserNoiseTimer;
- (void)dealloc;
- (void)onMicOffByAdminFailNotify;
- (void)OnMicChangeNotify:(id)arg1;
- (void)OnMicModeChangeNotify:(id)arg1;
- (void)onGroupVideoNotificationEmbedScPush:(id)arg1;
- (void)onManageRoom;
- (void)viewControllerGoBack:(id)arg1;
- (void)SwitchModelMicState:(id)arg1;
- (void)SwitchMicMode:(int)arg1;
- (int)GetCurrentMicMode;
- (void)dismissViewController:(id)arg1;
- (void)showTipsChange:(id)arg1;
- (void)onVideoShowPanelMessageBarPressDelegate;
- (void)checkVideoMemCount;
- (void)onSelfManagerUpdate:(id)arg1;
- (void)onSelfManagerChange:(id)arg1;
- (void)onMemberAudioOut:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberGetOut:(int)arg1 withGroupID:(long long)arg2 inMemArray:(id)arg3;
- (void)onMemberGetIn:(int)arg1 withGroupID:(long long)arg2 inMemArray:(id)arg3;
- (void)onMemberPPTOut:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberPPTIn:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberScreenOut:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberScreenIn:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberVideoOut:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberVideoIn:(int)arg1 inMemArray:(id)arg2;
- (id)initWithRelationType:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

