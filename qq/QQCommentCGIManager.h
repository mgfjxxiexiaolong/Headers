//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, QQGTMediaUploadManager;

@interface QQCommentCGIManager : NSObject
{
    NSDictionary *_configDic;
    NSMutableDictionary *_cgiCache;
    QQGTMediaUploadManager *_mediaManager;
}

+ (void)clearInstance;
+ (id)getInstance;
- (_Bool)cancelAllUpload;
- (_Bool)cancelID:(int)arg1;
- (id)getPreUploadFileUrl:(id)arg1;
- (_Bool)preUploadDataID:(int)arg1 dataType:(int)arg2 data:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (_Bool)publishDataID:(int)arg1 dataType:(int)arg2 data:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)getCGIPluginForID:(int)arg1;
- (void)dealloc;
- (id)init;

@end

