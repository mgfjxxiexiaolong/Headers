//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KSChunkedUploadConfiguration : NSObject
{
    unsigned long long _policy;
    long long _retryCount;
    long long _maxConcurrentChunkCount;
}

@property(nonatomic) long long maxConcurrentChunkCount; // @synthesize maxConcurrentChunkCount=_maxConcurrentChunkCount;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned long long policy; // @synthesize policy=_policy;
- (id)init;

@end

