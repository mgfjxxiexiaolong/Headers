//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class CAShapeLayer, UIButton, UIView;
@protocol StreamVoiceInputControlViewDelegate;

@interface StreamVoiceInputControlView : MMUIView
{
    id <StreamVoiceInputControlViewDelegate> _delegate;
    UIView *_buttonShadowView;
    UIButton *_buttonView;
    CAShapeLayer *_indicator;
    UIView *_buttonCoverView;
}

@property(retain, nonatomic) UIView *buttonCoverView; // @synthesize buttonCoverView=_buttonCoverView;
@property(retain, nonatomic) CAShapeLayer *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) UIButton *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) UIView *buttonShadowView; // @synthesize buttonShadowView=_buttonShadowView;
@property(nonatomic) __weak id <StreamVoiceInputControlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)displayPeakPower:(float)arg1 MaxRadius:(double)arg2 MinRadius:(double)arg3 BaseRadius:(double)arg4 UIView:(id)arg5 ShapeLayer:(id)arg6;
- (void)displayRecordingStatusForHold:(float)arg1;
- (void)displayRecordingStatusForTap:(float)arg1;
- (void)stopBreatheAnimation;
- (_Bool)isBreatheAnimationActive;
- (void)addBreatheAnimation;
- (void)startBreatheAnimation;
- (void)stopAnimation;
- (void)startWaitingForResultAnimation;
- (void)startHoldInitAnimation;
- (void)startHoldRecordingAnimation;
- (void)startTapRecordingAnimation;
- (void)buttonTouchUp;
- (void)checkHoldEvent;
- (void)buttonTouchDown;
- (void)initUI;
- (void)dealloc;
- (id)init;

@end
