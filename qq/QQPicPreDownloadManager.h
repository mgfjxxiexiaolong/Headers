//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface QQPicPreDownloadManager : NSObject
{
    NSMutableArray *_originalPicPreArrary;
    NSMutableArray *_thumbPicPreArrary;
    NSMutableDictionary *_reportDownloadMsgModel;
    int _platform;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)getInstance;
@property(retain) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (void).cxx_destruct;
- (void)reportThumbDownload:(id)arg1 downMode:(int)arg2;
- (void)reportOriginalDownload:(id)arg1 downMode:(int)arg2;
- (int)getSessionType:(id)arg1;
- (id)createKey:(id)arg1;
- (void)actionGetRegisterFinish;
- (void)OnNetReachabilityDidChange:(id)arg1;
- (_Bool)compareDownloadPriority:(id)arg1 secondMsgModel:(id)arg2;
- (int)getMaxConcurrentDownload;
- (int)getDownloadPriority:(id)arg1;
- (void)addThumbDownloadModel:(id)arg1;
- (void)addOriginalDownloadModel:(id)arg1;
- (void)onForceOffLineNotify;
- (void)changeAccount:(id)arg1;
- (void)handlePicDownloadStateNotification:(id)arg1;
- (_Bool)isPicNeedDown:(id)arg1;
- (void)planDownload;
- (void)addThumbPreDownloadArray:(id)arg1 isRunDownload:(_Bool)arg2;
- (void)addThumbPreDownload:(id)arg1;
- (void)addOriginalDownloadArray:(id)arg1 isRunDownload:(_Bool)arg2;
- (void)addOriginalPreDownload:(id)arg1;
- (void)dealloc;
- (id)init;

@end

