//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBSDKUploadService;

@interface IdstFileUploadComponent : NSObject
{
    _Bool _isUploading;
    TBSDKUploadService *_fileUploadServer;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isUploading; // @synthesize isUploading=_isUploading;
@property(retain, nonatomic) TBSDKUploadService *fileUploadServer; // @synthesize fileUploadServer=_fileUploadServer;
- (void).cxx_destruct;
- (void)startUpload:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (id)getFilePath;
- (id)init;

@end

