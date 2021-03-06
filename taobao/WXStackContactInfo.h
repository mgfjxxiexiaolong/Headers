//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface WXStackContactInfo : NSObject
{
    NSString *_contactId;
    NSString *_nickName;
    NSString *_avatar;
    NSString *_signature;
    NSString *_md5Phone;
    NSString *_reason;
    NSString *_question;
    NSNumber *_groupId;
    unsigned long long _timeStamp;
    long long _distance;
    long long _gender;
    long long _tag;
}

@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) long long gender; // @synthesize gender=_gender;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSNumber *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSString *question; // @synthesize question=_question;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSString *md5Phone; // @synthesize md5Phone=_md5Phone;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *contactId; // @synthesize contactId=_contactId;
- (void).cxx_destruct;

@end

