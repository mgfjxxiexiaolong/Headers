//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVPlayer, AVPlayerItem, AVPlayerItemAccessLog, AVURLAsset, AWEVideoPlayerView, AWEVideoResourceLoader, NSArray, NSMutableDictionary, NSString, NSTimer, NSURL, UIView;
@protocol AWEVideoPlayerControllerDelegate, AWEVideoPlayerInternalDelegate, OS_dispatch_queue;

@interface AWEVideoPlayerController : NSObject
{
    _Bool _useCache;
    _Bool _repeated;
    _Bool _truncateTailWhenRepeated;
    _Bool _muted;
    _Bool _ignoreAudioInterruption;
    _Bool _isPreparedToPlay;
    _Bool _isReadyForDisplay;
    _Bool _autoPlay;
    _Bool _initialized;
    float _playbackRate;
    long long _scalingMode;
    id <AWEVideoPlayerControllerDelegate> _delegate;
    id <AWEVideoPlayerInternalDelegate> _internalDelegate;
    long long _state;
    double _duration;
    double _playableDuration;
    long long _bufferingProgress;
    double _currentPlaybackRate;
    AWEVideoPlayerView *_contentView;
    AVPlayerItem *_currentItem;
    AVPlayer *_player;
    AVURLAsset *_currentAsset;
    long long _playbackState;
    long long _playerItemOrderID;
    NSTimer *_pollingTimer;
    AWEVideoResourceLoader *_resourceLoader;
    NSURL *_contentURL;
    NSURL *_cachePlayURL;
    NSString *_currentItemKey;
    NSArray *_contentURLStringList;
    long long _currentURLIndex;
    double _videoLoadBeginTime;
    id _periodicTimeObserver;
    CDUnknownBlockType _periodicTimeBlock;
    NSObject<OS_dispatch_queue> *_resourceLoaderQueue;
    NSMutableDictionary *_cachedErrorDict;
    NSMutableDictionary *_onlineErrorDict;
    CDStruct_1b6d18a9 _periodicInterval;
}

@property(retain, nonatomic) NSMutableDictionary *onlineErrorDict; // @synthesize onlineErrorDict=_onlineErrorDict;
@property(retain, nonatomic) NSMutableDictionary *cachedErrorDict; // @synthesize cachedErrorDict=_cachedErrorDict;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *resourceLoaderQueue; // @synthesize resourceLoaderQueue=_resourceLoaderQueue;
@property(copy, nonatomic) CDUnknownBlockType periodicTimeBlock; // @synthesize periodicTimeBlock=_periodicTimeBlock;
@property(nonatomic) CDStruct_1b6d18a9 periodicInterval; // @synthesize periodicInterval=_periodicInterval;
@property(retain, nonatomic) id periodicTimeObserver; // @synthesize periodicTimeObserver=_periodicTimeObserver;
@property(nonatomic) double videoLoadBeginTime; // @synthesize videoLoadBeginTime=_videoLoadBeginTime;
@property(nonatomic) long long currentURLIndex; // @synthesize currentURLIndex=_currentURLIndex;
@property(copy, nonatomic) NSArray *contentURLStringList; // @synthesize contentURLStringList=_contentURLStringList;
@property(copy, nonatomic) NSString *currentItemKey; // @synthesize currentItemKey=_currentItemKey;
@property(retain, nonatomic) NSURL *cachePlayURL; // @synthesize cachePlayURL=_cachePlayURL;
@property(retain, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(retain, nonatomic) AWEVideoResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(retain, nonatomic) NSTimer *pollingTimer; // @synthesize pollingTimer=_pollingTimer;
@property(nonatomic) long long playerItemOrderID; // @synthesize playerItemOrderID=_playerItemOrderID;
@property(nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property(nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(nonatomic) _Bool isReadyForDisplay; // @synthesize isReadyForDisplay=_isReadyForDisplay;
@property(nonatomic) _Bool isPreparedToPlay; // @synthesize isPreparedToPlay=_isPreparedToPlay;
@property(retain, nonatomic) AVURLAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPlayerItem *currentItem; // @synthesize currentItem=_currentItem;
@property(retain, nonatomic) AWEVideoPlayerView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double currentPlaybackRate; // @synthesize currentPlaybackRate=_currentPlaybackRate;
@property(nonatomic) long long bufferingProgress; // @synthesize bufferingProgress=_bufferingProgress;
@property(nonatomic) double playableDuration; // @synthesize playableDuration=_playableDuration;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool ignoreAudioInterruption; // @synthesize ignoreAudioInterruption=_ignoreAudioInterruption;
@property(nonatomic) __weak id <AWEVideoPlayerInternalDelegate> internalDelegate; // @synthesize internalDelegate=_internalDelegate;
@property(nonatomic) __weak id <AWEVideoPlayerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float playbackRate; // @synthesize playbackRate=_playbackRate;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) long long scalingMode; // @synthesize scalingMode=_scalingMode;
@property(nonatomic) _Bool truncateTailWhenRepeated; // @synthesize truncateTailWhenRepeated=_truncateTailWhenRepeated;
@property(nonatomic) _Bool repeated; // @synthesize repeated=_repeated;
@property(nonatomic) _Bool useCache; // @synthesize useCache=_useCache;
- (void).cxx_destruct;
- (void)playerItemPlaybackStalled:(id)arg1;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)playerItemFailedToPlayToEndTime:(id)arg1;
- (void)continuePlayFromWaiting;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 shouldPlay:(_Bool)arg2;
- (void)onPlaybackError:(id)arg1;
- (id)jsonStringFromDict:(id)arg1 prettyPrint:(_Bool)arg2;
- (void)recordErrorInfo:(id)arg1;
- (_Bool)playNextURLIfNeeded;
- (_Bool)restartOnlinePlayIfNeeded;
- (void)onLoadedTimeRangesChanged:(id)arg1;
- (void)onReadyToPlay;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removePlayerItemObservers:(id)arg1;
- (void)addPlayerItemObservers:(id)arg1;
- (void)removePlayerObservers:(id)arg1;
- (void)addPlayerObservers:(id)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 isAccurate:(_Bool)arg2 error:(id *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) AVPlayerItemAccessLog *accessLog;
- (CDStruct_1b6d18a9)currentMediaTime;
@property(readonly, nonatomic) double currentPlaybackTime;
- (_Bool)isPlaying;
- (void)_stop;
- (void)stop;
- (void)_pause;
- (void)pause;
- (void)_play;
- (void)play;
- (void)reinitializePlayerWithAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_prepareToPlayWithCacheEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareToPlayWithCacheEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_prepareToPlay;
- (void)prepareToPlay;
- (void)_setContentURLString:(id)arg1;
- (void)setContentURLString:(id)arg1;
@property(readonly, nonatomic) UIView *view;
- (void)_setupContentView;
- (void)_resetPlayer;
- (void)_initializePlayer;
- (void)_addAVAudioSessionObservers;
- (void)_addPlaybackRatePollingTimer;
- (void)_resetInitialStates;
- (void)dealloc;
- (id)init;

@end

