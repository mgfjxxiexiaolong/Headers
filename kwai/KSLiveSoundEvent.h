//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSTimeRange;

@interface KSLiveSoundEvent : NSObject
{
    _Bool _usingEarphone;
    long long _effectType;
    KSTimeRange *_timeRange;
}

@property(retain, nonatomic) KSTimeRange *timeRange; // @synthesize timeRange=_timeRange;
@property(nonatomic) long long effectType; // @synthesize effectType=_effectType;
@property(nonatomic) _Bool usingEarphone; // @synthesize usingEarphone=_usingEarphone;
- (void).cxx_destruct;

@end

