//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTVSegmentedControl-Protocol.h"

@class NSArray, NSString, UIColor, UIControl, UIScrollView;
@protocol TTVScrollableSegmentControlDelegate;

@interface TTVScrollableSegmentControl : UIView <TTVSegmentedControl>
{
    _Bool _adoptGradient;
    NSArray *_controls;
    UIView *_movableBackgroundView;
    long long _selectedIndex;
    double _itemSpacing;
    double _visibleItemCount;
    double _animateDuration;
    id <TTVScrollableSegmentControlDelegate> _segmentedControlDelegate;
    UIScrollView *_scrollView;
    UIControl *_currentSelectControl;
    double _gradientScrollOffset;
    double _gradientPercentage;
    UIColor *_gradientColor;
    UIView *_leftMask;
    UIView *_rightMask;
    struct UIEdgeInsets _contentInsets;
}

@property(retain, nonatomic) UIView *rightMask; // @synthesize rightMask=_rightMask;
@property(retain, nonatomic) UIView *leftMask; // @synthesize leftMask=_leftMask;
@property(retain, nonatomic) UIColor *gradientColor; // @synthesize gradientColor=_gradientColor;
@property(nonatomic) double gradientPercentage; // @synthesize gradientPercentage=_gradientPercentage;
@property(nonatomic) double gradientScrollOffset; // @synthesize gradientScrollOffset=_gradientScrollOffset;
@property(retain, nonatomic) UIControl *currentSelectControl; // @synthesize currentSelectControl=_currentSelectControl;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <TTVScrollableSegmentControlDelegate> segmentedControlDelegate; // @synthesize segmentedControlDelegate=_segmentedControlDelegate;
@property(nonatomic) double animateDuration; // @synthesize animateDuration=_animateDuration;
@property(nonatomic) _Bool adoptGradient; // @synthesize adoptGradient=_adoptGradient;
@property(nonatomic) double visibleItemCount; // @synthesize visibleItemCount=_visibleItemCount;
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UIView *movableBackgroundView; // @synthesize movableBackgroundView=_movableBackgroundView;
@property(retain, nonatomic) NSArray *controls; // @synthesize controls=_controls;
- (void).cxx_destruct;
- (id)gradientLayerForBounds:(struct CGRect)arg1 inVector:(struct CGVector)arg2 withColors:(id)arg3;
- (void)updateGradientsForScrollView:(id)arg1;
- (void)applyGradient;
- (void)moveToIndex:(unsigned long long)arg1;
- (void)moveToNormalizedOffset:(double)arg1;
- (void)scrollItemVisible:(id)arg1;
- (void)switchToIndexInternal_:(long long)arg1 animated:(_Bool)arg2;
- (void)switchToIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)didTapControlInternal:(id)arg1;
- (void)doLayout;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
