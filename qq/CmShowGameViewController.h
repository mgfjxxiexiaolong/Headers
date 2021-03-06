//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/CmShowGameViewDelegate-Protocol.h>
#import <QQMainProject/QQFriendSelectedViewControllerDelegate-Protocol.h>

@class CmShowGameView, NSDictionary, NSString, SpriteGameModel, UIView;
@protocol CmShowGameViewControllerDelegate;

@interface CmShowGameViewController : QQViewController <CmShowGameViewDelegate, QQFriendSelectedViewControllerDelegate>
{
    UIView *_bgView;
    CmShowGameView *_cmShowGameView;
    SpriteGameModel *_gameModel;
    long long _gameOrientation;
    _Bool _isFirstShow;
    int _screenMode;
    _Bool _isPushed;
    _Bool _isClosed;
    int _selectedType;
    id <CmShowGameViewControllerDelegate> _delegate;
    NSDictionary *_sendMsgParam;
}

@property(nonatomic) int selectedType; // @synthesize selectedType=_selectedType;
@property(retain, nonatomic) NSDictionary *sendMsgParam; // @synthesize sendMsgParam=_sendMsgParam;
@property(nonatomic) id <CmShowGameViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isSupportInterruputRightDragToGoBack;
- (_Bool)isSupportRightDragToGoBack;
- (int)sessionType:(int)arg1;
- (id)getChatViewControllerWithUin:(id)arg1 friendType:(int)arg2;
- (_Bool)friendSelectedViewController:(id)arg1 didSelectFriend:(id)arg2 type:(int)arg3;
- (void)onStartPushing:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)rotateViewWithOrientation:(long long)arg1;
- (void)refreshScreenOrientation:(long long)arg1;
- (void)refreshBGView;
- (void)packUpScreenAnimated;
- (void)exitFullscreen;
- (void)enterAnimationWithFrame:(struct CGRect)arg1;
- (void)enterFullScreen;
- (void)cmShowGameViewOpenFriendSelectedVCWith:(id)arg1 selectType:(int)arg2;
- (void)cmShowGameViewOpenWebViewWithoutUrl:(id)arg1 param:(id)arg2;
- (void)cmShowGameViewClose:(id)arg1;
- (void)cmShowGameViewPackUp:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithGameView:(id)arg1 gameModel:(id)arg2 gameOrientation:(long long)arg3 isFirstShow:(_Bool)arg4 screenMode:(int)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

