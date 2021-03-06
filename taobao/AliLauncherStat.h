//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface AliLauncherStat : NSObject
{
    NSMutableDictionary *_subItems;
    NSMutableDictionary *_sessions;
    CDUnknownBlockType _endHandler;
}

@property(copy, nonatomic) CDUnknownBlockType endHandler; // @synthesize endHandler=_endHandler;
@property(retain, nonatomic) NSMutableDictionary *sessions; // @synthesize sessions=_sessions;
@property(retain, nonatomic) NSMutableDictionary *subItems; // @synthesize subItems=_subItems;
- (void).cxx_destruct;
- (_Bool)isEnableUploadTaskCostTime;
- (void)uploadPerformance:(CDUnknownBlockType)arg1;
- (void)statSession:(id)arg1 andBlock:(CDUnknownBlockType)arg2;
- (void)statSession:(id)arg1 andInterval:(double)arg2;
- (void)statSubItem:(id)arg1 andInterval:(double)arg2;
- (double)statSubItem:(id)arg1 andBlock:(CDUnknownBlockType)arg2;

@end

