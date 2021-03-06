//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/GdtAdWebViewControllerDelegate-Protocol.h>
#import <QQMainProject/QQReadInJoyVideoViewDelegate-Protocol.h>
#import <QQMainProject/SKStoreProductViewControllerDelegate-Protocol.h>
#import <QQMainProject/videoStateViewDelegate-Protocol.h>

@class GdtAdSKStoreViewController, GdtAdVideoStateview, GdtAdWebViewController, MQZoneShadowBlurLabel, NSString, QQReadInJoyVideoView, UIButton, UILabel;

@interface GdtAdVideoCeilViewController : QQViewController <QQReadInJoyVideoViewDelegate, SKStoreProductViewControllerDelegate, videoStateViewDelegate, GdtAdWebViewControllerDelegate>
{
    QQReadInJoyVideoView *_videoView;
    GdtAdWebViewController *_webviewController;
    GdtAdSKStoreViewController *_storeProductController;
    GdtAdVideoStateview *_stateView;
    NSString *_videoUrl;
    NSString *_webUrl;
    NSString *_urlForImpression;
    NSString *_appDownloadUrl;
    UIButton *_navBackButton;
    NSString *_urlForClick;
    _Bool fullScreenEntered;
    _Bool _isAudioSessionObtained;
    double _topviewHeigh;
    double _playBeginTime;
    UILabel *_titleLabel;
    MQZoneShadowBlurLabel *_playCountLabel;
}

@property(retain, nonatomic) MQZoneShadowBlurLabel *playCountLabel; // @synthesize playCountLabel=_playCountLabel;
- (void)adWebViewDidFailLoad:(id)arg1;
- (void)adWebViewDidFinishLoad:(id)arg1;
- (void)adWebViewDidStartLoad:(id)arg1;
- (id)playCountView;
- (void)zoomButtonDidSelect:(_Bool)arg1;
- (void)onSliderEndSeek;
- (void)onViewDoubleTap;
- (void)onPlayButtonDidClick:(id)arg1;
- (void)onViewSingleTap;
- (void)mediaPlayer:(id)arg1 didChangeStateTo:(int)arg2;
- (void)onStopPlayVideo:(double)arg1 currentImage:(id)arg2 articleID:(unsigned long long)arg3;
- (void)onStartPlayVideo;
- (_Bool)shouldPlayVideo:(id)arg1;
- (void)webviewBackButtonAction:(id)arg1;
- (void)releaseAudioDevice;
- (_Bool)requestAudioDevice;
- (void)videoControllerHidden:(_Bool)arg1;
- (void)traceReportVideoInfo:(_Bool)arg1;
- (void)activeApp;
- (void)onApplicationDidEnterBackground:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)showWebView;
- (void)showAppStore;
- (void)backBtnClicked;
- (void)addVideoview;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

