//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPBatchGetUserRequest.h"

@class NSMutableArray;

@interface AMPGetFriendDataRequest : AMPBatchGetUserRequest
{
    NSMutableArray *_friendIdList;
}

+ (void)setTimeExpired;
@property(retain, nonatomic) NSMutableArray *friendIdList; // @synthesize friendIdList=_friendIdList;
- (void).cxx_destruct;
- (id)calculateChangData:(id)arg1 fromNet:(id)arg2;
- (id)parseMtopData:(id)arg1;
- (id)generatePacket;
- (void)saveFriendList:(id)arg1;
- (id)getFriendIdList;
- (_Bool)isExpired:(id)arg1;
- (_Bool)isFriendIdListExpired;
- (id)init;

@end
