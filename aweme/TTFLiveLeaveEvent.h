//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface TTFLiveLeaveEvent : NSObject
{
    NSString *_playerVersion;
    NSString *_activityID;
    long long _firstFrameTs;
    long long _exitTs;
    NSDictionary *_extra;
}

@property(copy, nonatomic) NSDictionary *extra; // @synthesize extra=_extra;
@property(nonatomic) long long exitTs; // @synthesize exitTs=_exitTs;
@property(nonatomic) long long firstFrameTs; // @synthesize firstFrameTs=_firstFrameTs;
@property(copy, nonatomic) NSString *activityID; // @synthesize activityID=_activityID;
@property(copy, nonatomic) NSString *playerVersion; // @synthesize playerVersion=_playerVersion;
- (void).cxx_destruct;
- (id)traceDict;

@end

