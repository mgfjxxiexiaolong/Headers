//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "TTAdCanvasViewController-Protocol.h"

@class NSDictionary, TTAdCanvasImpressionTracker, TTAdCanvasNavigationBar, TTAdCanvasTracker, TTAdCanvasViewModel, TTRNView, UIView;
@protocol TTAdCanvasVCDelegate;

@interface TTAdCanvasViewController : SSViewControllerBase <TTAdCanvasViewController>
{
    _Bool _loadRnEnd;
    _Bool _animateStart;
    _Bool _animateEnd;
    id <TTAdCanvasVCDelegate> _delegate;
    TTAdCanvasViewModel *_viewModel;
    TTAdCanvasTracker *_tracker;
    TTAdCanvasNavigationBar *_naviView;
    TTRNView *_rnView;
    UIView *_bangView;
    UIView *_reactBackgroudView;
    NSDictionary *_baseCondition;
    UIView *_screenShotView;
    TTAdCanvasImpressionTracker *_impressionTracker;
    struct UIEdgeInsets _safeEdgeInsets;
}

@property(retain, nonatomic) TTAdCanvasImpressionTracker *impressionTracker; // @synthesize impressionTracker=_impressionTracker;
@property(nonatomic) _Bool animateEnd; // @synthesize animateEnd=_animateEnd;
@property(nonatomic) _Bool animateStart; // @synthesize animateStart=_animateStart;
@property(nonatomic) _Bool loadRnEnd; // @synthesize loadRnEnd=_loadRnEnd;
@property(retain, nonatomic) UIView *screenShotView; // @synthesize screenShotView=_screenShotView;
@property(retain, nonatomic) NSDictionary *baseCondition; // @synthesize baseCondition=_baseCondition;
@property(retain, nonatomic) UIView *reactBackgroudView; // @synthesize reactBackgroudView=_reactBackgroudView;
@property(retain, nonatomic) UIView *bangView; // @synthesize bangView=_bangView;
@property(nonatomic) struct UIEdgeInsets safeEdgeInsets; // @synthesize safeEdgeInsets=_safeEdgeInsets;
@property(retain, nonatomic) TTRNView *rnView; // @synthesize rnView=_rnView;
@property(retain, nonatomic) TTAdCanvasNavigationBar *naviView; // @synthesize naviView=_naviView;
@property(retain, nonatomic) TTAdCanvasTracker *tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) TTAdCanvasViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <TTAdCanvasVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)applicationEnterForeground:(id)arg1;
- (void)applicationEnterBackground:(id)arg1;
- (void)skStoreViewDidDisappear:(id)arg1;
- (void)skStoreViewDidAppear:(id)arg1;
- (void)removeNotification;
- (void)addNotification;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (void)showEndAnimation;
- (void)commitShowRNViewAnimation;
- (void)startAnimationStyleScale:(struct CGRect)arg1 sourceImageModel:(id)arg2 toFrame:(struct CGRect)arg3 toImageModel:(id)arg4;
- (void)startAnimationMoveUp:(struct CGRect)arg1 sourceImageModel:(id)arg2 toFrame:(struct CGRect)arg3 toImageModel:(id)arg4;
- (void)showStartAnimation;
- (void)closeButtonTouched:(id)arg1;
- (void)shareTouched:(id)arg1;
- (struct CGRect)contentArea;
- (void)viewDidLayoutSubviews;
- (void)createCustormNavigationBar;
- (void)setShotScreen;
- (void)reloadState:(id)arg1;
- (id)findFirstSubview:(id)arg1 filter:(CDUnknownBlockType)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)buildup;
- (id)initWithViewModel:(id)arg1;
- (id)initWithRouteParamObj:(id)arg1;

@end

