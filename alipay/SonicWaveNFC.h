//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol SonicWaveNFCHandler;

@interface SonicWaveNFC : NSObject
{
    id <SonicWaveNFCHandler> m_SonicWaveNFCHandler;
    long long m_startReceiveDataTime;
}

+ (id)getInstance;
+ (void)printExpireDate:(long long)arg1;
+ (void)printExpireInfo;
- (void)dealloc;
- (_Bool)isOtherAudioPlaying;
- (void)resetAudioAndVolume;
- (void)stopAll;
- (void)stopWithoutRemoveHandler;
- (void)stopReceiveData;
- (void)removeHandler;
- (_Bool)startReceiveData:(int)arg1 iMinAmplitude:(int)arg2 handler:(id)arg3;
- (_Bool)setBkSoundWave4MixFromRes:(id)arg1 ofType:(id)arg2;
- (void)stopSendData;
- (_Bool)startSendData:(id)arg1 iTimeoutSeconds:(int)arg2 iSoundType:(int)arg3 iVolume:(int)arg4 handler:(id)arg5;
- (_Bool)hasHeadset;
- (id)getSonicWaveNFCHandler;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (id)hiddenInit;

@end

