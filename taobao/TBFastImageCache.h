//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBFICImageCacheDelegate-Protocol.h"

@class NSMutableDictionary, NSString, TBFICImageCache;
@protocol OS_dispatch_queue;

@interface TBFastImageCache : NSObject <TBFICImageCacheDelegate>
{
    TBFICImageCache *_fastImageCache;
    NSMutableDictionary *_imageFormatDict;
    NSMutableDictionary *_imageCountDict;
    NSObject<OS_dispatch_queue> *_mmapProcessQueue;
}

+ (void)resetImageTable;
+ (void)clearCacheFile;
+ (id)singletonInstance;
+ (id)sharedImageCache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mmapProcessQueue; // @synthesize mmapProcessQueue=_mmapProcessQueue;
@property(retain, nonatomic) NSMutableDictionary *imageCountDict; // @synthesize imageCountDict=_imageCountDict;
@property(retain, nonatomic) NSMutableDictionary *imageFormatDict; // @synthesize imageFormatDict=_imageFormatDict;
@property(retain, nonatomic) TBFICImageCache *fastImageCache; // @synthesize fastImageCache=_fastImageCache;
- (void).cxx_destruct;
- (void)dealloc;
- (void)imageCache:(id)arg1 errorDidOccurWithMessage:(id)arg2;
- (_Bool)imageCache:(id)arg1 shouldProcessAllFormatsInFamily:(id)arg2 forEntity:(id)arg3;
- (void)imageCache:(id)arg1 wantsSourceImageForEntity:(id)arg2 withFormatName:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)initImageCount;
- (id)getImageFormat:(long long)arg1 key:(id)arg2;
- (void)initFastImageCache;
- (void)deleteImageForEntity:(id)arg1;
- (void)storeImage:(id)arg1 key:(id)arg2;
- (id)getImageFromCache:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
