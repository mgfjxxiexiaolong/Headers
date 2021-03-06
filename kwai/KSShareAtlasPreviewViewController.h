//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseViewController.h"

@class AVAudioPlayer, KSFeedImageAtlasLoader, NSArray, NSCache, NSString, UIActivityIndicatorView;

@interface KSShareAtlasPreviewViewController : KSBaseViewController
{
    _Bool _showing;
    NSArray *_assets;
    NSString *_musicPath;
    KSFeedImageAtlasLoader *_atlasLoader;
    UIActivityIndicatorView *_loadingIndicator;
    AVAudioPlayer *_audioPlayer;
    NSCache *_imageCache;
    struct CGRect _thumbnailFrameInWindow;
}

+ (struct CGRect)AspectFitRect:(struct CGRect)arg1 in:(struct CGRect)arg2;
+ (struct CGRect)AspectFillRect:(struct CGRect)arg1 in:(struct CGRect)arg2;
@property(nonatomic) _Bool showing; // @synthesize showing=_showing;
@property(retain, nonatomic) NSCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(readonly, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(readonly, nonatomic) KSFeedImageAtlasLoader *atlasLoader; // @synthesize atlasLoader=_atlasLoader;
@property(nonatomic) struct CGRect thumbnailFrameInWindow; // @synthesize thumbnailFrameInWindow=_thumbnailFrameInWindow;
@property(retain, nonatomic) NSString *musicPath; // @synthesize musicPath=_musicPath;
@property(retain, nonatomic) NSArray *assets; // @synthesize assets=_assets;
- (void).cxx_destruct;
- (id)ks_navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (_Bool)ks_shouldHandleBackPanGestureRecognizer:(id)arg1;
- (void)prepareForZoomAnimation:(id)arg1;
- (struct CGRect)scaleAnimationClipRect;
- (struct CGRect)scaleAnimationFromFrame;
- (void)stopPlayMusic;
- (void)startPlayMusic;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)prefersStatusBarHidden;
- (void)reloadData;

@end

