//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, NSObject, UIImageView;
@protocol KSMediaCoverSliderDataSource, KSMediaCoverSliderDelegate, OS_dispatch_queue;

@interface KSMediaCoverSlider : UIControl
{
    _Bool _dragging;
    id <KSMediaCoverSliderDataSource> _dataSource;
    id <KSMediaCoverSliderDelegate> _delegate;
    long long _numberOfSnapshots;
    double _edgeMargin;
    NSArray *_snapshots;
    UIImageView *_slidingView;
    NSObject<OS_dispatch_queue> *_queue;
    struct CGPoint _initialTouchPoint;
}

@property(nonatomic) _Bool dragging; // @synthesize dragging=_dragging;
@property(nonatomic) struct CGPoint initialTouchPoint; // @synthesize initialTouchPoint=_initialTouchPoint;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) UIImageView *slidingView; // @synthesize slidingView=_slidingView;
@property(readonly, nonatomic) NSArray *snapshots; // @synthesize snapshots=_snapshots;
@property(readonly, nonatomic) double edgeMargin; // @synthesize edgeMargin=_edgeMargin;
@property(readonly, nonatomic) long long numberOfSnapshots; // @synthesize numberOfSnapshots=_numberOfSnapshots;
@property(nonatomic) __weak id <KSMediaCoverSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <KSMediaCoverSliderDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (double)_normalizedSlidingViewOffset;
- (double)_normalizedOffsetWithX:(double)arg1;
- (void)_resetTrackStatus;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) double currentOffset;
- (id)currentSlidingViewImage;
- (_Bool)edited;
- (void)updateSlidingViewWithImage:(id)arg1;
- (void)setCurrentSlideOffset:(double)arg1 animated:(_Bool)arg2;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1;

@end

