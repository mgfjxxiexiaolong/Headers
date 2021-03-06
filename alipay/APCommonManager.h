//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface APCommonManager : NSObject
{
}

+ (void)storeImageToPhotoWithCloudId:(id)arg1 imageType:(unsigned long long)arg2 size:(struct CGSize)arg3 complete:(CDUnknownBlockType)arg4;
+ (void)asynchronousGetImageCacheDataWithCloudId:(id)arg1 imageType:(unsigned long long)arg2 size:(struct CGSize)arg3 complete:(CDUnknownBlockType)arg4;
+ (id)synchronousGetImageCacheDataWithCloudId:(id)arg1 imageType:(unsigned long long)arg2 size:(struct CGSize)arg3;
+ (_Bool)isCacheExistImageWithCloudId:(id)arg1 imageType:(unsigned long long)arg2 size:(struct CGSize)arg3;
+ (void)asynchronousGetCacheDataWithCloudId:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (_Bool)isCacheExistWithCloudId:(id)arg1;
+ (void)asynchronousGetCacheDataWithLocalId:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (id)synchronousGetCacheDataWithLocalId:(id)arg1;
+ (_Bool)isCacheExistWithLocalId:(id)arg1;

@end

