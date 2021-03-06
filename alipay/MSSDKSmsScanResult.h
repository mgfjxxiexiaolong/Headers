//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSSDKJsonObject.h"

@class NSDictionary, NSString;

@interface MSSDKSmsScanResult : MSSDKJsonObject
{
    NSString *_msgId;
    NSString *_category;
    NSString *_type;
    NSDictionary *_extraInfo;
    NSDictionary *_phoneNumberScanResult;
    NSDictionary *_urlScanResult;
}

@property(retain, nonatomic) NSDictionary *urlScanResult; // @synthesize urlScanResult=_urlScanResult;
@property(retain, nonatomic) NSDictionary *phoneNumberScanResult; // @synthesize phoneNumberScanResult=_phoneNumberScanResult;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *md5;
@property(readonly, nonatomic) NSString *riskTips;
@property(readonly, nonatomic) NSString *riskName;
@property(readonly, nonatomic) int riskId;
@property(readonly, nonatomic) _Bool hasRisk;
@property(readonly, nonatomic) long long smsType;
- (id)toJSONObject;
- (id)initWithJSONObject:(id)arg1;
- (id)dictToJsonDict:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

