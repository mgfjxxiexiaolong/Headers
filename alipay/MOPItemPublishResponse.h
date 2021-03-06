//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface MOPItemPublishResponse : NSObject
{
    _Bool _success;
    _Bool _strongSupervision;
    NSString *_resultCode;
    NSString *_resultView;
    NSString *_desc;
    NSString *_msg;
    NSString *_followAction;
    NSString *_securityId;
    NSString *_verifyId;
    NSString *_verifyUrl;
    NSString *_itemId;
    NSString *_shopId;
    NSString *_spId;
    NSDictionary *_accessFailMap;
    NSString *_succTitle;
    NSString *_succSubtitle;
}

+ (Class)accessFailMapElementClass;
@property(retain, nonatomic) NSString *succSubtitle; // @synthesize succSubtitle=_succSubtitle;
@property(retain, nonatomic) NSString *succTitle; // @synthesize succTitle=_succTitle;
@property(nonatomic) _Bool strongSupervision; // @synthesize strongSupervision=_strongSupervision;
@property(retain, nonatomic) NSDictionary *accessFailMap; // @synthesize accessFailMap=_accessFailMap;
@property(retain, nonatomic) NSString *spId; // @synthesize spId=_spId;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *verifyUrl; // @synthesize verifyUrl=_verifyUrl;
@property(retain, nonatomic) NSString *verifyId; // @synthesize verifyId=_verifyId;
@property(retain, nonatomic) NSString *securityId; // @synthesize securityId=_securityId;
@property(retain, nonatomic) NSString *followAction; // @synthesize followAction=_followAction;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *resultView; // @synthesize resultView=_resultView;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;

@end

