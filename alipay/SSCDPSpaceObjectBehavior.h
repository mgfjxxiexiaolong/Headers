//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SSCDPSpaceObjectBehavior : NSObject
{
    _Bool _closedByUser;
    _Bool _jumpedByUser;
    float _showTimes;
    int _hadShowedTimes;
    NSString *_behavior;
    long long _behaviorUpdateTime;
    NSString *_period;
}

@property(retain, nonatomic) NSString *period; // @synthesize period=_period;
@property(nonatomic) int hadShowedTimes; // @synthesize hadShowedTimes=_hadShowedTimes;
@property(nonatomic) long long behaviorUpdateTime; // @synthesize behaviorUpdateTime=_behaviorUpdateTime;
@property(nonatomic) _Bool jumpedByUser; // @synthesize jumpedByUser=_jumpedByUser;
@property(nonatomic) _Bool closedByUser; // @synthesize closedByUser=_closedByUser;
@property(nonatomic) float showTimes; // @synthesize showTimes=_showTimes;
@property(retain, nonatomic) NSString *behavior; // @synthesize behavior=_behavior;
- (void).cxx_destruct;

@end

