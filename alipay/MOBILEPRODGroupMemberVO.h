//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSFundProdToString.h"

@class NSDate, NSString;

@interface MOBILEPRODGroupMemberVO : CSFundProdToString
{
    NSString *_operationType;
    NSString *_groupId;
    NSString *_userId;
    NSString *_loginId;
    NSString *_gender;
    NSString *_realName;
    NSString *_nickName;
    NSString *_groupNickName;
    NSString *_inviteId;
    NSString *_enterType;
    NSDate *_gmtCreate;
    NSString *_headImg;
}

@property(retain, nonatomic) NSString *headImg; // @synthesize headImg=_headImg;
@property(retain, nonatomic) NSDate *gmtCreate; // @synthesize gmtCreate=_gmtCreate;
@property(retain, nonatomic) NSString *enterType; // @synthesize enterType=_enterType;
@property(retain, nonatomic) NSString *inviteId; // @synthesize inviteId=_inviteId;
@property(retain, nonatomic) NSString *groupNickName; // @synthesize groupNickName=_groupNickName;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *realName; // @synthesize realName=_realName;
@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSString *loginId; // @synthesize loginId=_loginId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSString *operationType; // @synthesize operationType=_operationType;
- (void).cxx_destruct;

@end
