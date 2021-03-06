//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

@class UIImage, UIPanGestureRecognizer, UIView;
@protocol UIViewControllerContextTransitioning;

@interface QZPhotoBrowserPercentDrivenInteractive : UIPercentDrivenInteractiveTransition
{
    _Bool _isFirst;
    UIImage *_image;
    id <UIViewControllerContextTransitioning> _transitionContext;
    UIPanGestureRecognizer *_gestureRecognizer;
    UIView *_beforeImgWhiteView;
    UIView *_blackBgView;
    struct CGRect _beforeImageViewFrame;
    struct CGRect _currentImageViewFrame;
}

@property(retain, nonatomic) UIView *blackBgView; // @synthesize blackBgView=_blackBgView;
@property(retain, nonatomic) UIView *beforeImgWhiteView; // @synthesize beforeImgWhiteView=_beforeImgWhiteView;
@property(readonly, nonatomic) UIPanGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(nonatomic) __weak id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) struct CGRect currentImageViewFrame; // @synthesize currentImageViewFrame=_currentImageViewFrame;
@property(nonatomic) struct CGRect beforeImageViewFrame; // @synthesize beforeImageViewFrame=_beforeImageViewFrame;
- (void).cxx_destruct;

@end

