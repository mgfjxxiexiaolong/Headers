//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSLRUCache;
@protocol OS_dispatch_queue;

@interface KSFeedCoverPreviewManager : NSObject
{
    KSLRUCache *_memoryCache;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)manager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) KSLRUCache *memoryCache; // @synthesize memoryCache=_memoryCache;
- (void).cxx_destruct;
- (void)loadCoverPreviewForFeed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)preloadCoverPreviewForFeeds:(id)arg1;
- (id)init;

@end
