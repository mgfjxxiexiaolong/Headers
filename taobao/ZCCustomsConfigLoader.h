//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError, NSOperationQueue, ZCCustomsConfig;
@protocol OS_dispatch_queue;

@interface ZCCustomsConfigLoader : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    ZCCustomsConfig *_updatingConfig;
    unsigned long long _updateCount;
    NSError *_error;
    unsigned long long _loadingConfigCount;
    CDUnknownBlockType _callback;
}

+ (void)loadWithVersion:(id)arg1 withNextVersion:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) unsigned long long loadingConfigCount; // @synthesize loadingConfigCount=_loadingConfigCount;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long updateCount; // @synthesize updateCount=_updateCount;
@property(retain, nonatomic) ZCCustomsConfig *updatingConfig; // @synthesize updatingConfig=_updatingConfig;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)checkConfigUpdateAllFinished;
- (void)appConfigLoadFinished:(id)arg1 withContent:(id)arg2;
- (void)loadAppConfig:(id)arg1;
- (void)loadAppConfigs:(id)arg1;
- (void)callbackWithError:(id)arg1;
- (void)loadWithVersion:(id)arg1 withNextVersion:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end
