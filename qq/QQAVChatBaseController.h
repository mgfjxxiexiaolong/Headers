//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <QQMainProject/CAAnimationDelegate-Protocol.h>

@class AudioHelper, CMMotionManager, NSString, NSTimer, QQAVStatusBarMark, QQAVWindow, UIImageView, UIView, UIWindow, VideoCapture;

@interface QQAVChatBaseController : UIViewController <CAAnimationDelegate>
{
    UIView *_mainView;
    QQAVWindow *_window;
    float _currPositionDegree;
    _Bool _isOpenGLDisplaying;
    long long _currOrientation;
    struct dispatch_queue_s *_cameraThread;
    _Bool _isMemoryLow;
    int _selfFrameAngle;
    int _currUsedFrameAngle;
    _Bool _isWaitingFrameConfirm;
    _Bool _isWaitingConfirmBeConfirmed;
    long long _currShareUsedFrameOrientation;
    _Bool _isShareWaitingFrameConfirm;
    _Bool _isShareWaitingConfirmBeConfirmed;
    CMMotionManager *_motionmanager;
    _Bool _isProximity;
    NSTimer *_waitProximityTimer;
    _Bool _isProximityTiming;
    AudioHelper *_pAudioHelper;
    _Bool _isReturnAnimation;
    _Bool _isShowAnimation;
    _Bool _isReturnInFloat;
    _Bool _isShowing;
    int _xo;
    QQAVStatusBarMark *_statusBarMarker;
    _Bool _isChatStoped;
    VideoCapture *_pVideoCapture;
    UIImageView *_copyView;
}

@property(retain, nonatomic) UIImageView *copyView; // @synthesize copyView=_copyView;
- (void)tabSwitch;
- (void)autoSwitchViewAnimation;
- (void)autoMoveAnination;
- (void)autoScaleAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)screenShowWithView:(id)arg1;
- (void)startReturnAnimation;
- (void)startShowAnimation;
- (void)releaseResource;
- (void)cz_mv_addSubview:(id)arg1;
- (_Bool)isMemoryWarning;
- (void)didReceiveMemoryWarning;
- (void)layoutViewsIfNeeds:(id)arg1;
- (void)dealloc;
- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)showNotificationTipsView:(id)arg1;
- (struct CGRect)frameForMainView;
- (long long)getCurrentOrientation;
- (float)getCurrentOrientationDegree;
- (void)checkProximityMonitoringEnabled;
- (void)startUpdateAccelerometer;
- (void)stopUpdate;
- (int)didRotate:(_Bool)arg1;
- (_Bool)isVideoInited;
- (_Bool)isFrontCamera;
- (void)swapVideo;
- (void)releaseVideo;
- (void)stopVideo;
- (void)startVideo;
- (void)setVideoFps:(int)arg1;
- (void)setVideoPreset:(id)arg1;
- (void)initVideoWithPreset:(id)arg1 format:(int)arg2 fps:(int)arg3;
- (void)addviewToWindow:(id)arg1;
- (void)removeControllerFromWindow:(int)arg1;
- (void)dismissWindow:(int)arg1;
- (void)showWindow:(id)arg1 withAnimationType:(int)arg2;
- (void)addControllerToWindow:(id)arg1 withAnimateType:(int)arg2;
- (id)init;

// Remaining properties
@property(retain, nonatomic) UIWindow *currWindow; // @dynamic currWindow;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isShowing; // @dynamic isShowing;
@property(retain, nonatomic) UIView *mainView; // @dynamic mainView;
@property(readonly) Class superclass;

@end

