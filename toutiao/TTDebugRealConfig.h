//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TTDebugRealConfig : NSObject
{
    _Bool _receiveUploadCommand;
    _Bool _needNetworkReponse;
    NSString *_startTime;
    NSString *_endTime;
    long long _submitTypeFlags;
}

+ (id)sharedInstance;
@property(nonatomic) long long submitTypeFlags; // @synthesize submitTypeFlags=_submitTypeFlags;
@property(nonatomic) _Bool needNetworkReponse; // @synthesize needNetworkReponse=_needNetworkReponse;
@property(retain, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool receiveUploadCommand; // @synthesize receiveUploadCommand=_receiveUploadCommand;
- (void).cxx_destruct;
@property(nonatomic) long long maxCacheDBSize;
@property(nonatomic) long long maxCacheSize;
@property(nonatomic) long long maxCacheAge;
- (void)configDataCollectPolicy:(id)arg1;

@end
