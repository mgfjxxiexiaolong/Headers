//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTAVPreloaderDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, TTAVPreloader;

@interface TTVOwnPlayerPreloaderWrapper : NSObject <TTAVPreloaderDelegate>
{
    TTAVPreloader *_preloader;
    NSMutableDictionary *_preloadGroupDict;
    NSMutableSet *_observerSet;
    NSMutableArray *_adPreloaders;
}

+ (id)sharedPreloader;
@property(retain, nonatomic) NSMutableArray *adPreloaders; // @synthesize adPreloaders=_adPreloaders;
@property(retain, nonatomic) NSMutableSet *observerSet; // @synthesize observerSet=_observerSet;
@property(retain, nonatomic) NSMutableDictionary *preloadGroupDict; // @synthesize preloadGroupDict=_preloadGroupDict;
@property(retain, nonatomic) TTAVPreloader *preloader; // @synthesize preloader=_preloader;
- (void).cxx_destruct;
- (void)trackAdPreloadTask:(long long)arg1;
- (void)didRecieveLogEvent:(id)arg1;
- (void)didFinishPreloadTask:(long long)arg1 error:(id)arg2;
- (id)metaInfoApiForVid:(id)arg1 resolution:(int)arg2;
- (void)clear;
- (void)cancel;
- (void)cancelGroup:(id)arg1;
- (void)cancelTaskForVideoID:(id)arg1;
- (void)addAdPreloadItem:(id)arg1;
- (long long)preloadVideoID:(id)arg1 group:(id)arg2;
- (long long)preloadVideoID:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

