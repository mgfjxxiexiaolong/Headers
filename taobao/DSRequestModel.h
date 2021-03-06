//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBMTOPBaseRequest.h"

@class NSString;

@interface DSRequestModel : TBMTOPBaseRequest
{
    NSString *_companyName;
    NSString *_appKey;
    NSString *_bizId;
    long long _type;
    NSString *_amount;
    NSString *_senderUserId;
    NSString *_receiverUserId;
    NSString *_extraA;
    NSString *_content;
    NSString *_schemeStr;
    NSString *_campaignId;
    NSString *_activityId;
    NSString *_rewardMax;
    NSString *_bizScopeId;
}

@property(retain, nonatomic) NSString *bizScopeId; // @synthesize bizScopeId=_bizScopeId;
@property(retain, nonatomic) NSString *rewardMax; // @synthesize rewardMax=_rewardMax;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property(retain, nonatomic) NSString *schemeStr; // @synthesize schemeStr=_schemeStr;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *extraA; // @synthesize extraA=_extraA;
@property(retain, nonatomic) NSString *receiverUserId; // @synthesize receiverUserId=_receiverUserId;
@property(retain, nonatomic) NSString *senderUserId; // @synthesize senderUserId=_senderUserId;
@property(retain, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
- (void).cxx_destruct;

@end

