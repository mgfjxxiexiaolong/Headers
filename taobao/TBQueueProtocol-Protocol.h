//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol TBQueueProtocol <NSObject>
- (void)startQueueWithApiName:(NSString *)arg1 version:(NSString *)arg2 domain:(NSString *)arg3 params:(NSDictionary *)arg4 extra:(NSDictionary *)arg5 priorityData:(id)arg6 priorityFlag:(_Bool)arg7 successBlock:(void (^)(NSString *, NSDictionary *))arg8 failureBlock:(void (^)(NSString *, NSString *, NSString *, NSDictionary *, long long, NSString *))arg9;
@end

