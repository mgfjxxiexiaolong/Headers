//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber, NSString;
@protocol Optional;

@interface FRMessageListUserInfoStructModel : JSONModel
{
    long long _user_verified;
    NSNumber *_user_id;
    NSString *_avatar_url;
    NSString *_screen_name;
    NSString<Optional> *_user_auth_info;
    NSString<Optional> *_schema;
    NSString<Optional> *_verified_content;
}

@property(retain, nonatomic) NSString<Optional> *verified_content; // @synthesize verified_content=_verified_content;
@property(retain, nonatomic) NSString<Optional> *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) NSString<Optional> *user_auth_info; // @synthesize user_auth_info=_user_auth_info;
@property(retain, nonatomic) NSString *screen_name; // @synthesize screen_name=_screen_name;
@property(retain, nonatomic) NSString *avatar_url; // @synthesize avatar_url=_avatar_url;
@property(retain, nonatomic) NSNumber *user_id; // @synthesize user_id=_user_id;
@property(nonatomic) long long user_verified; // @synthesize user_verified=_user_verified;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

