//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TTForumPostThreadTask;

@protocol TTForumPostThreadOperationProtocol <NSObject>
@property(readonly, nonatomic) _Bool cancellable;
@property(nonatomic) long long taskType;
@property(copy, nonatomic) NSString *concernID;
@property(copy, nonatomic) NSString *taskID;
- (void)cancelWithHint:(unsigned long long)arg1;
- (id)initWithPostThreadTaskID:(NSString *)arg1 concernID:(NSString *)arg2 suggestedTask:(TTForumPostThreadTask *)arg3 stateUpdatedBlock:(void (^)(TTForumPostThreadTask *, unsigned long long, unsigned long long))arg4 successBlock:(void (^)(TTForumPostThreadTask *, NSDictionary *))arg5 cancelledBlock:(void (^)(TTForumPostThreadTask *, unsigned long long))arg6 failureBlock:(void (^)(TTForumPostThreadTask *, NSError *))arg7;
@end
