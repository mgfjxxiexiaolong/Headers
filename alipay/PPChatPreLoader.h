//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface PPChatPreLoader : NSObject
{
    NSMutableArray *_allRequestList;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSString *_userId;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (id)requestWithPublicId:(id)arg1;
- (void)resetWaitList;
- (id)getGroupRequest;
- (void)requestList;
- (void)starCheckCycle;
- (void)dealloc;
- (id)init;

@end
