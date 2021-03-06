//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSError, NSString, ZCacheResourceInfo;

@interface ZCacheURLInfo : NSObject
{
    NSString *_contentType;
    NSString *_url;
    long long _fromType;
    NSError *_error;
    NSString *_appName;
    NSString *_version;
    unsigned long long _seq;
    long long _appMonitor;
    NSString *_filePath;
    NSString *_originPath;
    ZCacheResourceInfo *_resInfo;
}

+ (id)parseCombo:(id)arg1;
+ (_Bool)isCombo:(id)arg1;
+ (_Bool)checkAppInstalled:(id)arg1 error:(id *)arg2;
+ (id)getPackageURLInfo:(id)arg1;
+ (id)getZCache1URLInfo:(id)arg1;
+ (id)urlWithoutScheme:(id)arg1;
+ (id)urlWithoutQueryAndFragment:(id)arg1;
+ (id)infoWithURL:(id)arg1;
+ (id)getMimeTypeWithPath:(id)arg1;
@property(retain, nonatomic) ZCacheResourceInfo *resInfo; // @synthesize resInfo=_resInfo;
@property(copy, nonatomic) NSString *originPath; // @synthesize originPath=_originPath;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly, nonatomic) long long appMonitor; // @synthesize appMonitor=_appMonitor;
@property(readonly, nonatomic) unsigned long long seq; // @synthesize seq=_seq;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) long long fromType; // @synthesize fromType=_fromType;
@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)description;
- (_Bool)verifyResource:(id)arg1;
- (_Bool)extractResourceInfo:(double *)arg1;
@property(readonly, copy, nonatomic) NSDictionary *header;
@property(readonly, copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, copy, nonatomic) NSString *md5;
- (id)initWithURL:(id)arg1 withOriginPath:(id)arg2 withConfig:(id)arg3;
- (id)initWithURL:(id)arg1 withConfig:(id)arg2 withError:(id)arg3;
- (id)initWithURL:(id)arg1 withAppName:(id)arg2 withError:(id)arg3;

@end

