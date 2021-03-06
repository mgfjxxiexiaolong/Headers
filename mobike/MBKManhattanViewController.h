//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKTouchThroughViewController.h"

#import "MBKAnimatedStackViewControllerDelegate-Protocol.h"
#import "MBKRidingPanelViewControllerDelegate-Protocol.h"

@class MBKAnimatedStackViewController, MBKBannerPanelViewController, MBKBikePanelViewController, MBKExpandView, MBKRidingPanelViewController, MBKSpockLockButton, MBKUnlockingPanelViewController, NSString, RACDisposable, UIButton, UIView;
@protocol MBKManhattanViewControllerDelegate;

@interface MBKManhattanViewController : MBKTouchThroughViewController <MBKAnimatedStackViewControllerDelegate, MBKRidingPanelViewControllerDelegate>
{
    UIView *_topStatusBarView;
    id <MBKManhattanViewControllerDelegate> _delegate;
    UIView *_unlockButton;
    MBKExpandView *_topStatusBarViewContainer;
    MBKAnimatedStackViewController *_PanelController;
    MBKBannerPanelViewController *_initialPanelVC;
    MBKBikePanelViewController *_weakBikePanelVC;
    MBKUnlockingPanelViewController *_weakUnlockingPanelVC;
    MBKRidingPanelViewController *_weakRidingPanelVC;
    UIButton *_locateButton;
    UIButton *_feedbackButton;
    MBKSpockLockButton *_spockLockButton;
    double _currentPanelContentHeight;
    RACDisposable *_subVCPanelHeightObservationDisposable;
    struct CGRect _visiableArea;
}

+ (id)generateASmallButton;
@property(retain, nonatomic) RACDisposable *subVCPanelHeightObservationDisposable; // @synthesize subVCPanelHeightObservationDisposable=_subVCPanelHeightObservationDisposable;
@property(nonatomic) double currentPanelContentHeight; // @synthesize currentPanelContentHeight=_currentPanelContentHeight;
@property(retain, nonatomic) MBKSpockLockButton *spockLockButton; // @synthesize spockLockButton=_spockLockButton;
@property(retain, nonatomic) UIButton *feedbackButton; // @synthesize feedbackButton=_feedbackButton;
@property(retain, nonatomic) UIButton *locateButton; // @synthesize locateButton=_locateButton;
@property(nonatomic) __weak MBKRidingPanelViewController *weakRidingPanelVC; // @synthesize weakRidingPanelVC=_weakRidingPanelVC;
@property(nonatomic) __weak MBKUnlockingPanelViewController *weakUnlockingPanelVC; // @synthesize weakUnlockingPanelVC=_weakUnlockingPanelVC;
@property(nonatomic) __weak MBKBikePanelViewController *weakBikePanelVC; // @synthesize weakBikePanelVC=_weakBikePanelVC;
@property(retain, nonatomic) MBKBannerPanelViewController *initialPanelVC; // @synthesize initialPanelVC=_initialPanelVC;
@property(retain, nonatomic) MBKAnimatedStackViewController *PanelController; // @synthesize PanelController=_PanelController;
@property(readonly, nonatomic) MBKExpandView *topStatusBarViewContainer; // @synthesize topStatusBarViewContainer=_topStatusBarViewContainer;
@property(retain, nonatomic) UIView *unlockButton; // @synthesize unlockButton=_unlockButton;
@property(nonatomic) struct CGRect visiableArea; // @synthesize visiableArea=_visiableArea;
@property(nonatomic) __weak id <MBKManhattanViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView *topStatusBarView; // @synthesize topStatusBarView=_topStatusBarView;
- (void).cxx_destruct;
- (void)observeContentHeightOfVC:(struct UIViewController *)arg1;
- (void)animatedStackViewController:(id)arg1 willPopToController:(struct UIViewController *)arg2 fromController:(struct UIViewController *)arg3;
- (void)animatedStackViewController:(id)arg1 willPushToController:(struct UIViewController *)arg2 fromController:(struct UIViewController *)arg3;
- (id)bottomButtonsHiddenSignal;
- (id)visiableAreaSignal;
- (void)didTapFeedbackButton:(id)arg1;
- (void)didTapLocateButton:(id)arg1 withEvent:(id)arg2;
- (void)didTapUnlockButton:(id)arg1;
- (void)abNormalLockProxy;
- (void)tapRidingPanelProxy;
- (void)setRidingPanelDefaultMPLInfo:(id)arg1;
- (void)updateRidingPanelMPLInfo:(id)arg1;
- (void)redPacketRidingisFinished:(_Bool)arg1;
- (void)updateRidingPanelInfo:(id)arg1;
- (void)pushToRidingPanelWithSelectedMPLInfo:(id)arg1;
- (void)popUnlockPanelWithFailureAnimation;
- (void)showMPLInfoOnUnlockingPanelIfNeeded:(id)arg1;
- (void)showMPLInfoOnUnlockingPanel:(id)arg1;
- (void)pushToUnlockingPanel;
- (void)showUnlockFaildWithErrorDescription:(id)arg1;
- (void)popBikePanel;
- (_Bool)isBikePanelShown;
- (void)updateBikePanelWithBookingInfo:(id)arg1;
- (_Bool)pushBikePanelIfNeeded;
- (void)pushToBikePanelIfNeededAndShowMPLInfo:(id)arg1;
- (void)pushToBikePanelIfNeededAndShowBikeInfo:(id)arg1;
- (void)setForceHideParkingEnteranceEnabled:(_Bool)arg1;
- (void)popToRootPanelAnimated:(_Bool)arg1;
- (void)popToRootPanel;
- (void)refreshBannerContent;
- (void)resetSpockLockButtonSlider;
- (void)setSpockLockToDisableState:(_Bool)arg1;
- (void)setSpockLockButtonShown:(_Bool)arg1;
- (void)setLocateButtonShownWeakly:(_Bool)arg1;
- (void)showTopStatusBar:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setTopStatusBarContent:(id)arg1;
- (void)setUpLocateButton;
- (void)setUpFeedbackButton;
- (void)setUpSpockLockButtonIfNeeded;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

