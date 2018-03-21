//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSInvocationBroadcasting-Protocol.h"
#import "KSMediaFilterSwitchableContextProtocol-Protocol.h"
#import "KSMediaOperationContextProtocol-Protocol.h"

@class KSEffectsContainer, KSMediaOperationContext, KSMovieInfo, NSMutableArray, NSString;
@protocol KSAttachmentAudioMedia;

@interface KSMediaOperationSwitchableContext : NSObject <KSInvocationBroadcasting, KSMediaOperationContextProtocol, KSMediaFilterSwitchableContextProtocol>
{
    NSMutableArray *_backendContexts;
    KSMediaOperationContext *_effectPickerContext;
    KSEffectsContainer *_beautyEffect;
    KSEffectsContainer *_whitenEffect;
    KSEffectsContainer *_recordBGMEffect;
    KSEffectsContainer *_cloudBGMEffect;
    KSEffectsContainer *_localBGMEffect;
    KSEffectsContainer *_originalAudioEffect;
    long long _currentIndex;
    KSMovieInfo *_videoInfo;
}

@property(retain, nonatomic) KSMovieInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) KSEffectsContainer *originalAudioEffect; // @synthesize originalAudioEffect=_originalAudioEffect;
@property(retain, nonatomic) KSEffectsContainer *localBGMEffect; // @synthesize localBGMEffect=_localBGMEffect;
@property(retain, nonatomic) KSEffectsContainer *cloudBGMEffect; // @synthesize cloudBGMEffect=_cloudBGMEffect;
@property(retain, nonatomic) KSEffectsContainer *recordBGMEffect; // @synthesize recordBGMEffect=_recordBGMEffect;
@property(retain, nonatomic) KSEffectsContainer *whitenEffect; // @synthesize whitenEffect=_whitenEffect;
@property(retain, nonatomic) KSEffectsContainer *beautyEffect; // @synthesize beautyEffect=_beautyEffect;
@property(retain, nonatomic) NSMutableArray *backendContexts; // @synthesize backendContexts=_backendContexts;
@property(retain, nonatomic) KSMediaOperationContext *effectPickerContext; // @synthesize effectPickerContext=_effectPickerContext;
- (void).cxx_destruct;
- (id)createPickerContextWithMaxTrimDuration:(double)arg1 media:(id)arg2 videoInfo:(id)arg3;
- (id)createContextForView:(id)arg1 media:(id)arg2 maxTrimDuration:(double)arg3 videoInfo:(id)arg4;
- (id)displayingFilterEffectWithPickingEffect:(id)arg1;
- (void)activateBGMEffect:(id)arg1;
- (id)notificationObject;
- (void)activateFilterEffect:(id)arg1;
- (void)activateEffect:(id)arg1;
- (void)switchFilterEffectBackward;
- (void)switchFilterEffectForward;
- (_Bool)canSwitchFilterEffectBackward;
- (_Bool)canSwitchFilterEffectForward;
- (id)currentFilterEffect;
- (id)followingContext;
- (id)previousContext;
- (id)currentContext;
- (void)reprocessActiveGPUEffect;
- (void)setOriginalAudioEffectOn:(_Bool)arg1;
- (void)setBeautyEffectOn:(_Bool)arg1;
- (id)initWithMedia:(id)arg1 previousPlayView:(id)arg2 currentPlayView:(id)arg3 followingPlayView:(id)arg4 maxTrimDuration:(double)arg5 videoInfo:(id)arg6;
- (id)filterPipeline;
@property(retain, nonatomic) NSObject<KSAttachmentAudioMedia> *media;
- (_Bool)ks_subscriptEnabled;
- (_Bool)ks_broadcastEnabled;
- (id)ks_stringsOfSelectorToBroadcast;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
