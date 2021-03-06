//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseViewController.h"

#import "KSAssetPickViewControllerDelegate-Protocol.h"
#import "KSCameraWarmable-Protocol.h"
#import "KSURLPortal-Protocol.h"
#import "KSURLPortalAnnotation-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class KSLiveViewController, KSMagicFace, KSMusicItem, KSPoi, KSUnderLineButton, KSVideoRecordViewController, NSArray, NSLayoutConstraint, NSString, UIScrollView, UIView, UIViewController;
@protocol KSAssetPickViewControllerProtocol;

@interface KSPostViewController : KSBaseViewController <KSURLPortalAnnotation, KSURLPortal, UIScrollViewDelegate, UIGestureRecognizerDelegate, KSAssetPickViewControllerDelegate, KSCameraWarmable, UIViewControllerTransitioningDelegate>
{
    NSString *_livePermissionIdentifier;
    _Bool _forceShowShootTab;
    _Bool _forceOpenMusicTag;
    _Bool _forceOpenMagicFaceTag;
    _Bool _forceUseFrontCamera;
    _Bool _bottomBarHidden;
    int _videoLengthType;
    NSString *_initalCaption;
    KSMusicItem *_defaultMusic;
    KSMagicFace *_defaultMagicFace;
    KSPoi *_defaultPoi;
    KSUnderLineButton *_assetPickButton;
    KSUnderLineButton *_videoRecordButton;
    KSUnderLineButton *_liveButton;
    NSArray *_bottomBarButtons;
    UIView *_bottomBar;
    NSLayoutConstraint *_bottomBarHideConstraint;
    NSLayoutConstraint *_bottomBarShowConstraint;
    UIView *_underLine;
    NSLayoutConstraint *_underLineLeftConstraint;
    UIScrollView *_pageScrollView;
    long long _currentIndex;
    UIViewController<KSAssetPickViewControllerProtocol> *_assetPickViewController;
    KSVideoRecordViewController *_videoRecordViewController;
    KSLiveViewController *_liveViewController;
    NSArray *_viewControllers;
    long long _bottomBarStyle;
}

+ (id)ks_portalPath;
+ (id)searchIndexItem;
@property(nonatomic) long long bottomBarStyle; // @synthesize bottomBarStyle=_bottomBarStyle;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) KSLiveViewController *liveViewController; // @synthesize liveViewController=_liveViewController;
@property(retain, nonatomic) KSVideoRecordViewController *videoRecordViewController; // @synthesize videoRecordViewController=_videoRecordViewController;
@property(retain, nonatomic) UIViewController<KSAssetPickViewControllerProtocol> *assetPickViewController; // @synthesize assetPickViewController=_assetPickViewController;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) UIScrollView *pageScrollView; // @synthesize pageScrollView=_pageScrollView;
@property(retain, nonatomic) NSLayoutConstraint *underLineLeftConstraint; // @synthesize underLineLeftConstraint=_underLineLeftConstraint;
@property(retain, nonatomic) UIView *underLine; // @synthesize underLine=_underLine;
@property(retain, nonatomic) NSLayoutConstraint *bottomBarShowConstraint; // @synthesize bottomBarShowConstraint=_bottomBarShowConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomBarHideConstraint; // @synthesize bottomBarHideConstraint=_bottomBarHideConstraint;
@property(retain, nonatomic) UIView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) NSArray *bottomBarButtons; // @synthesize bottomBarButtons=_bottomBarButtons;
@property(retain, nonatomic) KSUnderLineButton *liveButton; // @synthesize liveButton=_liveButton;
@property(retain, nonatomic) KSUnderLineButton *videoRecordButton; // @synthesize videoRecordButton=_videoRecordButton;
@property(retain, nonatomic) KSUnderLineButton *assetPickButton; // @synthesize assetPickButton=_assetPickButton;
@property(readonly, nonatomic) _Bool bottomBarHidden; // @synthesize bottomBarHidden=_bottomBarHidden;
@property(nonatomic) _Bool forceUseFrontCamera; // @synthesize forceUseFrontCamera=_forceUseFrontCamera;
@property(retain, nonatomic) KSPoi *defaultPoi; // @synthesize defaultPoi=_defaultPoi;
@property(nonatomic) _Bool forceOpenMagicFaceTag; // @synthesize forceOpenMagicFaceTag=_forceOpenMagicFaceTag;
@property(retain, nonatomic) KSMagicFace *defaultMagicFace; // @synthesize defaultMagicFace=_defaultMagicFace;
@property(nonatomic) _Bool forceOpenMusicTag; // @synthesize forceOpenMusicTag=_forceOpenMusicTag;
@property(retain, nonatomic) KSMusicItem *defaultMusic; // @synthesize defaultMusic=_defaultMusic;
@property(retain, nonatomic) NSString *initalCaption; // @synthesize initalCaption=_initalCaption;
@property(nonatomic) _Bool forceShowShootTab; // @synthesize forceShowShootTab=_forceShowShootTab;
@property(nonatomic) int videoLengthType; // @synthesize videoLengthType=_videoLengthType;
- (void).cxx_destruct;
- (id)buttonForTabName:(id)arg1;
- (void)storeTabNameForTabAtIndex:(unsigned long long)arg1;
- (id)customTransitionNavigationController;
- (_Bool)ks_showNavigationAlert:(id)arg1 type:(unsigned long long)arg2 duration:(id)arg3;
- (id)containerViewForAtlasGuide;
- (void)willDisappearAssetPickViewController:(id)arg1;
- (void)setUpPageURL;
- (void)logClickOnIndex:(long long)arg1;
- (_Bool)showLiveButtonLock;
- (_Bool)liveLocked;
- (_Bool)showLiveBtn;
- (_Bool)canLive;
- (void)setBottomBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateActivity;
- (void)updateAdditionalSafeAreaInsets;
- (void)updateCurrentIndex:(long long)arg1;
- (_Bool)showLiveAuthorizeIfNeeded;
- (void)setCurrentIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)didClickButton:(id)arg1;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleDisablePageGesturer:(id)arg1;
- (void)warmUpCamera;
- (void)viewDidLoad;
- (double)getMaxVideoRecordingLengthFromEnum:(int)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setupPostViewController:(id)arg1 context:(id)arg2 backgroundViewController:(id *)arg3;
- (void)setupStatForPostViewController:(id)arg1 portalUrl:(id)arg2;
- (id)setupNavigationForPostViewController:(id)arg1;
- (_Bool)ks_presentViewControllerWithContext:(id)arg1;
- (_Bool)ks_presentViewNeedUserAvailable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

