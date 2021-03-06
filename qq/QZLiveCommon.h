//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QZLiveCommon : NSObject
{
}

+ (_Bool)stringIsInBlackList:(id)arg1;
+ (id)getSubstring:(id)arg1 withCount:(long long)arg2 realCount:(unsigned long long *)arg3;
+ (id)getSubstring:(id)arg1 withCount:(long long)arg2;
+ (long long)countCharInWidth:(id)arg1 font:(id)arg2:(double)arg3:(double)arg4;
+ (id)adjustString:(id)arg1 withFont:(id)arg2 left:(double)arg3 right:(double)arg4;
+ (id)getQzoneReleaseVersion;
+ (long long)setVoiceType:(int)arg1;
+ (void)checkCheckCameraAvailable:(CDUnknownBlockType)arg1;
+ (long long)sendRequest:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
+ (void)postMessage:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)postMessage:(id)arg1;
+ (void)postError:(id)arg1;
+ (_Bool)isCurrentDeviceBetterThan:(id)arg1;
+ (void)haveShowdTipToTouchRightBtn;
+ (_Bool)shouldShowTipToTouchRightBtn;
+ (void)setOcsPluginLoadResult:(_Bool)arg1;
+ (_Bool)ocsPluginLoadResult;
+ (struct CGSize)sizeOfMultiLineLabel:(id)arg1 font:(id)arg2 constrainedToSize:(struct CGSize)arg3 lineSpacing:(double)arg4;
+ (void)setUseFrontCameraAsDefault:(_Bool)arg1;
+ (_Bool)useFrontCameraAsDefault;
+ (void)setIsPGCUser:(_Bool)arg1;
+ (_Bool)getIsPGCUser;
+ (_Bool)shouldUsePlugin;

@end

