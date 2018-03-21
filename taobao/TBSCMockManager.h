//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TBSCMockManager : NSObject
{
    _Bool _mockSwitch;
    long long _mockInterceptType;
    NSMutableArray *_mockDataPools;
}

+ (void)setMockInterceptType:(long long)arg1;
+ (_Bool)mockSwitch;
+ (void)setMockSwitch:(_Bool)arg1;
+ (id)sharedInstance;
+ (void)registerMockDataPool;
@property(retain, nonatomic) NSMutableArray *mockDataPools; // @synthesize mockDataPools=_mockDataPools;
@property(nonatomic) _Bool mockSwitch; // @synthesize mockSwitch=_mockSwitch;
@property(nonatomic) long long mockInterceptType; // @synthesize mockInterceptType=_mockInterceptType;
- (void).cxx_destruct;
- (id)init;

@end
