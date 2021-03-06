//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSTimer, UIButton, UIScrollView, UISegmentedControl;
@protocol AMapNaviDriveSetViewDelegate;

@interface AMapNaviDriveSetView : UIView
{
    float _shortSide;
    float _longSide;
    float _contentViewHeight;
    id <AMapNaviDriveSetViewDelegate> _delegate;
    UIView *_containerView;
    UIView *_theMaskView;
    UIView *_btnsContainerView;
    UIButton *_finishBtn;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UIView *_preferenceStrategyContainerView;
    UISegmentedControl *_broadcastModeSwitchSegment;
    NSLayoutConstraint *_btnsContainerViewBottom;
    NSLayoutConstraint *_btnsContainerViewLeft;
    NSLayoutConstraint *_btnsContainerViewHeight;
    NSTimer *_myTimer;
}

@property(retain, nonatomic) NSTimer *myTimer; // @synthesize myTimer=_myTimer;
@property(nonatomic) float contentViewHeight; // @synthesize contentViewHeight=_contentViewHeight;
@property(nonatomic) float longSide; // @synthesize longSide=_longSide;
@property(nonatomic) float shortSide; // @synthesize shortSide=_shortSide;
@property(nonatomic) __weak NSLayoutConstraint *btnsContainerViewHeight; // @synthesize btnsContainerViewHeight=_btnsContainerViewHeight;
@property(nonatomic) __weak NSLayoutConstraint *btnsContainerViewLeft; // @synthesize btnsContainerViewLeft=_btnsContainerViewLeft;
@property(nonatomic) __weak NSLayoutConstraint *btnsContainerViewBottom; // @synthesize btnsContainerViewBottom=_btnsContainerViewBottom;
@property(nonatomic) __weak UISegmentedControl *broadcastModeSwitchSegment; // @synthesize broadcastModeSwitchSegment=_broadcastModeSwitchSegment;
@property(nonatomic) __weak UIView *preferenceStrategyContainerView; // @synthesize preferenceStrategyContainerView=_preferenceStrategyContainerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak UIButton *finishBtn; // @synthesize finishBtn=_finishBtn;
@property(nonatomic) __weak UIView *btnsContainerView; // @synthesize btnsContainerView=_btnsContainerView;
@property(nonatomic) __weak UIView *theMaskView; // @synthesize theMaskView=_theMaskView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <AMapNaviDriveSetViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)finishBtnClick:(id)arg1;
- (void)switchBroadcastMode:(id)arg1;
- (void)hide;
- (void)portraitViewsUpdate;
- (void)landscapeViewsUpdate;
- (void)orientaionChanged;
- (void)autoHideDriveSetView;
- (void)startTimer;
- (void)showWithSuperview:(id)arg1;
- (void)setUp;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

