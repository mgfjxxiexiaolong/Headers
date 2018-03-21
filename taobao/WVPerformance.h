//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WVPerformance : NSObject
{
    float _cpuUsage;
    float _memoryUsage;
    unsigned long long _totalMemory;
    unsigned long long _usedMemory;
}

+ (void)update;
+ (unsigned long long)usedMemory;
+ (unsigned long long)totalMemory;
+ (float)memoryUsage;
+ (float)cpuUsage;
+ (id)sharedInstance;
@property(nonatomic) unsigned long long usedMemory; // @synthesize usedMemory=_usedMemory;
@property(nonatomic) unsigned long long totalMemory; // @synthesize totalMemory=_totalMemory;
@property(nonatomic) float memoryUsage; // @synthesize memoryUsage=_memoryUsage;
@property(nonatomic) float cpuUsage; // @synthesize cpuUsage=_cpuUsage;
- (void)updateMemoryUsage;
- (void)updateCPUUsage;

@end
