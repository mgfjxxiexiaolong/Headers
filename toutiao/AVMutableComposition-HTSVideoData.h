//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVMutableComposition.h>

@interface AVMutableComposition (HTSVideoData)
- (void)showCompositionForDebug:(id)arg1 audioMix:(id)arg2;
- (_Bool)mixAudioAsset:(id)arg1 withCount:(long long)arg2 withTimeClipRange:(CDStruct_e83c9415)arg3 volumne:(double)arg4 paramsArray:(id)arg5;
- (_Bool)mixAudioAsset:(id)arg1 withCount:(long long)arg2 withStartTime:(CDStruct_e83c9415)arg3 volumne:(double)arg4 paramsArray:(id)arg5;
- (_Bool)mixAudioAsset:(id)arg1 withTimeClipRange:(CDStruct_e83c9415)arg2 volumne:(double)arg3 paramsArray:(id)arg4;
- (_Bool)appendVideoFragmentAsset:(id)arg1 withTimeClipRange:(CDStruct_e83c9415)arg2 rate:(double)arg3 volume:(double)arg4 volumeDict:(id)arg5 isAudioMuted:(_Bool)arg6;
- (_Bool)appendVideoFragmentAsset:(id)arg1 withTimeClipRange:(CDStruct_e83c9415)arg2 rate:(double)arg3 volume:(double)arg4 volumeDict:(id)arg5;
- (_Bool)createTimeMachineAsset:(id)arg1 withTimemachine:(id)arg2;
- (id)videoSoundCompositionTrack;
- (id)videoCompositionTrack;
@end

