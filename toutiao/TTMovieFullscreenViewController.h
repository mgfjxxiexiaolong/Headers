//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIView;
@protocol TTMovieFullscreenProtocol, TTMovieFullscreenViewControllerDelegate;

@interface TTMovieFullscreenViewController : UIViewController
{
    _Bool _animatedDuringTransition;
    long long _orientationBeforePresented;
    long long _orientationAfterPresented;
    unsigned long long _supportedOrientations;
    UIView<TTMovieFullscreenProtocol> *_exploreMovieView;
    id <TTMovieFullscreenViewControllerDelegate> _delegate;
}

+ (struct CGRect)windowBoundsForInterfaceOrientationIniOS7:(long long)arg1;
+ (double)rotationRadianForInterfaceOrienationIniOS7:(long long)arg1;
@property(nonatomic) _Bool animatedDuringTransition; // @synthesize animatedDuringTransition=_animatedDuringTransition;
@property(nonatomic) __weak id <TTMovieFullscreenViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIView<TTMovieFullscreenProtocol> *exploreMovieView; // @synthesize exploreMovieView=_exploreMovieView;
@property(nonatomic) unsigned long long supportedOrientations; // @synthesize supportedOrientations=_supportedOrientations;
@property(nonatomic) long long orientationAfterPresented; // @synthesize orientationAfterPresented=_orientationAfterPresented;
@property(nonatomic) long long orientationBeforePresented; // @synthesize orientationBeforePresented=_orientationBeforePresented;
- (void).cxx_destruct;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithOrientationBeforePresented:(long long)arg1 orientationAfterPresented:(long long)arg2 supportedOrientations:(unsigned long long)arg3;

@end

