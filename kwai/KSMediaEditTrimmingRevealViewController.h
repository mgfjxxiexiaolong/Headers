//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class KSAdvanceEditTimeLineSliderOutline, UIScrollView, UIView;

@interface KSMediaEditTrimmingRevealViewController : UIViewController
{
    double _revealStart;
    double _revealEnd;
    double _minRevealWidth;
    double _edge;
    CDUnknownBlockType _onPan;
    UIView *_leftCoverView;
    UIView *_rightCoverView;
    double _leftStartX;
    double _rightStartX;
    double _leftScrollViewOffset;
    double _rightScrollViewOffset;
    KSAdvanceEditTimeLineSliderOutline *_slider;
    UIScrollView *_scrollView;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) KSAdvanceEditTimeLineSliderOutline *slider; // @synthesize slider=_slider;
@property(nonatomic) double rightScrollViewOffset; // @synthesize rightScrollViewOffset=_rightScrollViewOffset;
@property(nonatomic) double leftScrollViewOffset; // @synthesize leftScrollViewOffset=_leftScrollViewOffset;
@property(nonatomic) double rightStartX; // @synthesize rightStartX=_rightStartX;
@property(nonatomic) double leftStartX; // @synthesize leftStartX=_leftStartX;
@property(retain, nonatomic) UIView *rightCoverView; // @synthesize rightCoverView=_rightCoverView;
@property(retain, nonatomic) UIView *leftCoverView; // @synthesize leftCoverView=_leftCoverView;
@property(copy, nonatomic) CDUnknownBlockType onPan; // @synthesize onPan=_onPan;
@property(nonatomic) double edge; // @synthesize edge=_edge;
@property(nonatomic) double minRevealWidth; // @synthesize minRevealWidth=_minRevealWidth;
@property(nonatomic) double revealEnd; // @synthesize revealEnd=_revealEnd;
@property(nonatomic) double revealStart; // @synthesize revealStart=_revealStart;
- (void).cxx_destruct;
- (void)calculateRangeValueOnTouchUp:(_Bool)arg1;
- (void)onPanRightCoverView:(id)arg1;
- (void)onPanLeftCoverView:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithScrollView:(id)arg1;

@end
