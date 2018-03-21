//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol TBIMGroupAdapter, TBIMGroupServiceDelegate, TBIMGroupUserAdapter;

@protocol TBIMGroupServiceAdapter <NSObject>
- (void)chooseSubGroupInfoByVGroupId:(NSString *)arg1;
- (void)groupQRCodeInGroupWithGroupUserInfo:(NSDictionary *)arg1 ccode:(NSString *)arg2 QRCodeKey:(NSString *)arg3;
- (void)groupQRCodeInfoWithCcode:(NSString *)arg1;
- (void)cacheGroupUsers:(id <TBIMGroupAdapter>)arg1;
- (void)getJoinedGroupInfo;
- (void)getAllGroupInfo;
- (void)deleteLinkGroup:(NSString *)arg1 linkGroupId:(NSString *)arg2;
- (id <TBIMGroupAdapter>)getGroupInfoByGroupId:(NSString *)arg1;
- (void)invalidatesGroupUserNameWithUserId:(NSString *)arg1;
- (void)updateGroupUserName:(NSString *)arg1 withUserId:(NSString *)arg2;
- (void)updateGroupPublic:(_Bool)arg1 withGroupId:(NSString *)arg2;
- (void)updateGroupHeadPic:(NSString *)arg1 withGroupId:(NSString *)arg2;
- (void)updateGroupNotice:(NSString *)arg1 userId:(NSString *)arg2 withGroup:(id <TBIMGroupAdapter>)arg3;
- (void)updateGroupUserIdentity:(NSString *)arg1 userId:(NSString *)arg2 withGroup:(id <TBIMGroupAdapter>)arg3;
- (void)updateGroupUserIsBlackStr:(NSString *)arg1 userId:(NSString *)arg2 withGroup:(id <TBIMGroupAdapter>)arg3;
- (void)updateGroupUserName:(NSString *)arg1 userId:(NSString *)arg2 withGroup:(id <TBIMGroupAdapter>)arg3;
- (void)groupNameUpdate:(NSString *)arg1 withGroup:(id <TBIMGroupAdapter>)arg2;
- (void)deleteGroup:(id <TBIMGroupAdapter>)arg1;
- (void)exitGroup:(id <TBIMGroupAdapter>)arg1;
- (void)removeBatchGroupUser:(NSArray *)arg1 fromGroup:(id <TBIMGroupAdapter>)arg2;
- (void)removeGroupUser:(id <TBIMGroupUserAdapter>)arg1 fromGroup:(id <TBIMGroupAdapter>)arg2;
- (void)addGroupUser:(NSArray *)arg1 toGroup:(id <TBIMGroupAdapter>)arg2 dentity:(unsigned long long)arg3;
- (NSString *)createGroup:(NSArray *)arg1;
- (void)removeDelegate:(id <TBIMGroupServiceDelegate>)arg1;
- (void)addDelegate:(id <TBIMGroupServiceDelegate>)arg1;
@end
