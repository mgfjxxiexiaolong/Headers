//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GdtAdAppJumpManager : NSObject
{
}

+ (long long)doAppJumpWithCustomUrl:(id)arg1 OpenUrl:(id)arg2 DownloadUrl:(id)arg3 ClickUrl:(id)arg4 TraceId:(id)arg5 ProductId:(long long)arg6 ViewController:(id)arg7;
+ (long long)doAppJumpWithOpenUrl:(id)arg1 DownloadUrl:(id)arg2 TraceId:(id)arg3 ProductId:(long long)arg4 ViewController:(id)arg5;
+ (id)getInstance;
- (_Bool)doOpenApp:(id)arg1;
- (id)init;

@end

