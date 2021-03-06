//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ZCErrorBuilder : NSObject
{
}

+ (id)notZCacheResource:(id)arg1 forSeq:(unsigned long long)arg2;
+ (id)appMarkedDelete:(id)arg1;
+ (id)appForceOnline:(id)arg1;
+ (id)fileNotFound:(id)arg1;
+ (id)appNotNewest:(id)arg1;
+ (id)appIgnored:(id)arg1;
+ (id)appNotInstalled:(id)arg1;
+ (id)mappingUrlNotMatch:(id)arg1 withMappingUrl:(id)arg2 withUrl:(id)arg3;
+ (id)mappingUrlNotFound:(id)arg1;
+ (id)configNotFound:(id)arg1;
+ (id)tooLittleDataAfterIEND:(id)arg1 seq:(unsigned long long)arg2;
+ (id)IENDNotFound:(id)arg1 seq:(unsigned long long)arg2;
+ (id)zipVerify:(id)arg1 withOriginal:(id)arg2 failed:(id)arg3 seq:(unsigned long long)arg4;
+ (id)resVerifyFailed:(id)arg1;
+ (id)resVerifyFileNotExists:(id)arg1 appName:(id)arg2 seq:(unsigned long long)arg3;
+ (id)appResNoMD5:(id)arg1 seq:(unsigned long long)arg2;
+ (id)appResValueNotDictionary:(id)arg1 seq:(unsigned long long)arg2;
+ (id)appResNotDictionary:(id)arg1 seq:(unsigned long long)arg2;
+ (id)appResDeserializationFailed:(id)arg1 seq:(unsigned long long)arg2;
+ (id)appResVerifyFailed:(id)arg1 seq:(unsigned long long)arg2;
+ (id)appResInvalidFormat:(id)arg1 seq:(unsigned long long)arg2;
+ (id)appResReadFailed:(id)arg1 appName:(id)arg2 seq:(unsigned long long)arg3;
+ (id)appInfoWithoutMappingUrl:(id)arg1;
+ (id)appInfoDeserializationFailed:(id)arg1;
+ (id)zipNotFound:(id)arg1 withStatusCode:(long long)arg2;
+ (id)downloadEmptyZip:(id)arg1 withStatusCode:(long long)arg2;
+ (id)copyFailed:(id)arg1;
+ (id)unzipFailed:(id)arg1 toPath:(id)arg2;
+ (id)unzipOpenFileFailed:(id)arg1;
+ (id)downloadFailed:(id)arg1 withError:(id)arg2;
+ (id)tempUnzipPathCreateFailed:(id)arg1;
+ (id)invalidZipUrl:(id)arg1;
+ (id)userCancelledUpdate;
+ (id)appNameMismatch:(id)arg1;
+ (id)splitFailed:(id)arg1;
+ (id)invalidPrefixesRule:(id)arg1;
+ (id)mtopConfig:(id)arg1 error:(id)arg2;
+ (id)mtopNotSupported;
+ (id)configUpdateTimeout;
+ (id)configInvalidURL:(id)arg1;
+ (id)configServerError:(id)arg1;
+ (id)deserializeJSONFailed:(id)arg1;
+ (id)emptyResponse:(id)arg1;
+ (id)invalidStatusCode:(long long)arg1 url:(id)arg2;
+ (id)createError:(long long)arg1 format:(id)arg2;

@end

