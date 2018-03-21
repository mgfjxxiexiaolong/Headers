//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "APConfigObserverProtocol-Protocol.h"

@class NSString;

@interface APPushAudioSharedContainerManager : NSObject <APConfigObserverProtocol>
{
    double _lastLaunchTime;
}

+ (id)sharedInstance;
@property(nonatomic) double lastLaunchTime; // @synthesize lastLaunchTime=_lastLaunchTime;
- (void)configChangedForKey:(id)arg1 value:(id)arg2;
- (void)updateCacheForAudioFilesNotFound:(id)arg1;
- (id)checkAudioFilesNotFoundException;
- (id)getLogDirInSharedContainerForDir:(id)arg1;
- (id)getAudioSharedContainerDir;
- (void)checkLocalLogFileInSharedContainer;
- (void)checkRemoteLogFileInSharedContainer;
- (void)checkConfigInSharedContainer;
- (_Bool)saveFileToSharedContainer:(id)arg1 bundlePath:(id)arg2;
- (void)checkAudioFilesInSharedContainer:(id)arg1 bundlePath:(id)arg2;
- (void)checkAudioFilesInSharedContainer;
- (void)checkSharedDataWhenEnteringForeground;
- (void)checkAudioSharedContainer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
