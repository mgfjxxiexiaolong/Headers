//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBRecmdUserTracker : NSObject
{
}

+ (id)argsDictWithArgsStr:(id)arg1;
+ (void)trackWithParam:(id)arg1;
+ (void)clickDeleteReasonForItemDelete:(id)arg1 reasonId:(id)arg2;
+ (void)clickTrackForItemDelete:(id)arg1;
+ (void)exposeDeleteReasonForItemMask:(id)arg1;
+ (void)exposeTrackForItemMask:(id)arg1;
+ (void)clickTrackForItemSimilar:(id)arg1 onPage:(id)arg2;
+ (void)clickTrackForCard:(id)arg1;
+ (void)exposeTrackForCard:(id)arg1;
+ (id)recmdUTQueue;

@end
