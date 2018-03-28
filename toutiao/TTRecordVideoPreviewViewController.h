//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

@class AVAsset, AVPlayer, AVPlayerItem, SSThemedImageView, TTAlphaThemedButton, TTVideoPlayerLayerView, UIImage;

@interface TTRecordVideoPreviewViewController : SSViewControllerBase
{
    _Bool _pausedByUser;
    TTVideoPlayerLayerView *_videoContainerView;
    UIImage *_previewImage;
    TTAlphaThemedButton *_exitButton;
    TTAlphaThemedButton *_playButton;
    TTAlphaThemedButton *_pauseButton;
    SSThemedImageView *_previewImageView;
    AVAsset *_asset;
    AVPlayerItem *_playerItem;
    AVPlayer *_player;
}

@property(nonatomic) _Bool pausedByUser; // @synthesize pausedByUser=_pausedByUser;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) SSThemedImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
@property(retain, nonatomic) TTAlphaThemedButton *pauseButton; // @synthesize pauseButton=_pauseButton;
@property(retain, nonatomic) TTAlphaThemedButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) TTAlphaThemedButton *exitButton; // @synthesize exitButton=_exitButton;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(retain, nonatomic) TTVideoPlayerLayerView *videoContainerView; // @synthesize videoContainerView=_videoContainerView;
- (void).cxx_destruct;
- (void)pause;
- (void)play;
- (void)pauseButtonPressed;
- (void)playButtonPressed;
- (void)exit;
- (void)movieFinishedCallback:(id)arg1;
- (void)viewDidLoad;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)registerNotifications;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithAsset:(id)arg1;
- (void)dealloc;

@end
