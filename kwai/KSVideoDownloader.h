//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSDownloader-Protocol.h"

@class NSArray, NSError, NSLock, NSString, NSURL, NSURLSessionDownloadTask;

@interface KSVideoDownloader : NSObject <KSDownloader>
{
    _Bool _lasturl;
    NSString *_ksPage;
    unsigned long long _retryCount;
    long long _receivedSize;
    long long _expectedSize;
    unsigned long long _downloadStatus;
    NSError *_error;
    NSURL *_filePath;
    NSArray *_cdnURLs;
    NSString *_URL;
    NSURLSessionDownloadTask *_task;
    unsigned long long _fromIndex;
    unsigned long long _videoUsedIndex;
    unsigned long long _videoFailSum;
    unsigned long long _videoSuccessSum;
    NSLock *_lock;
}

@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(nonatomic) _Bool lasturl; // @synthesize lasturl=_lasturl;
@property(nonatomic) unsigned long long videoSuccessSum; // @synthesize videoSuccessSum=_videoSuccessSum;
@property(nonatomic) unsigned long long videoFailSum; // @synthesize videoFailSum=_videoFailSum;
@property(nonatomic) unsigned long long videoUsedIndex; // @synthesize videoUsedIndex=_videoUsedIndex;
@property(nonatomic) unsigned long long fromIndex; // @synthesize fromIndex=_fromIndex;
@property(retain, nonatomic) NSURLSessionDownloadTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSString *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSArray *cdnURLs; // @synthesize cdnURLs=_cdnURLs;
@property(retain, nonatomic) NSURL *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property unsigned long long downloadStatus; // @synthesize downloadStatus=_downloadStatus;
@property(nonatomic) long long expectedSize; // @synthesize expectedSize=_expectedSize;
@property(nonatomic) long long receivedSize; // @synthesize receivedSize=_receivedSize;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSString *ksPage; // @synthesize ksPage=_ksPage;
- (void).cxx_destruct;
- (void)cancel;
- (void)downloadWithProgress:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadWithVideoURL:(id)arg1 ip:(id)arg2 startDate:(id)arg3 progress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (id)videoURL;
- (id)init;
- (id)initWithCdnURLs:(id)arg1 URL:(id)arg2 fileURL:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

