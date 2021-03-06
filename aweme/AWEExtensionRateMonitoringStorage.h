//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSNumber, NSString;

@interface AWEExtensionRateMonitoringStorage : NSObject
{
    NSNumber *_successCount;
    NSArray *_failedArray;
    NSString *_name;
    NSMutableArray *_failedMutableArray;
}

+ (id)sharedPushImageSuccessRateStorage;
@property(retain, nonatomic) NSMutableArray *failedMutableArray; // @synthesize failedMutableArray=_failedMutableArray;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *failedArray; // @synthesize failedArray=_failedArray;
@property(retain, nonatomic) NSNumber *successCount; // @synthesize successCount=_successCount;
- (void)addErrorInfo:(id)arg1;
- (id)failedKey;
- (id)successKey;
- (void)reset;
- (void)trackRate:(_Bool)arg1 errorInfo:(id)arg2;
- (id)initWithStorageName:(id)arg1;

@end

