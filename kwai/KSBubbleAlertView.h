//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class KSBubbleAlertViewConfig, NSString, UILabel;

@interface KSBubbleAlertView : UIView
{
    _Bool _dismissed;
    CDUnknownBlockType _bubbleTapped;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _targetViewTapped;
    KSBubbleAlertViewConfig *_config;
    UIView *_targetView;
    NSString *_message;
    UIView *_contentView;
    UILabel *_messageLabel;
    double _arrowOffsetX;
}

+ (id)showForView:(id)arg1 withMessage:(id)arg2 config:(id)arg3 cancelBlock:(CDUnknownBlockType)arg4;
@property(nonatomic) _Bool dismissed; // @synthesize dismissed=_dismissed;
@property(nonatomic) double arrowOffsetX; // @synthesize arrowOffsetX=_arrowOffsetX;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
@property(readonly, nonatomic) KSBubbleAlertViewConfig *config; // @synthesize config=_config;
@property(copy, nonatomic) CDUnknownBlockType targetViewTapped; // @synthesize targetViewTapped=_targetViewTapped;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType bubbleTapped; // @synthesize bubbleTapped=_bubbleTapped;
- (void).cxx_destruct;
- (void)setupBubbleMask;
- (void)setupContentView;
- (void)setupMessageLabel;
- (void)dismissAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dismissAfter:(double)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleTapWithPoint:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)addClickLogWithUrlPackage:(id)arg1;
- (void)addShowLogWithUrlPackage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 superView:(id)arg2 message:(id)arg3 targetView:(id)arg4 config:(id)arg5;

@end

