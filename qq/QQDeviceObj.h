//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QQDeviceObj : NSObject
{
    _Bool _bgStatusRefreshed;
    long long _bgRefreshStatus;
}

+ (id)getInstance;
@property _Bool bgStatusRefreshed; // @synthesize bgStatusRefreshed=_bgStatusRefreshed;
@property long long bgRefreshStatus; // @synthesize bgRefreshStatus=_bgRefreshStatus;
- (long long)getBgrefreshStatus;
- (void)appEnterBackground;
- (id)bgrefreshstatusKey;
- (void)dealloc;
- (id)init;

@end
