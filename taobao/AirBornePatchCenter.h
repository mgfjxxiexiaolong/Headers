//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AirBornePatchCenter : NSObject
{
    _Bool _isPatching;
}

+ (id)sharedInstance;
- (void)beginPatchWithRecord:(id)arg1;
- (_Bool)isPatching;
- (void)startPatchProcess;
- (void)endPatchProcess;
- (void)updateRecord:(id)arg1 withPatchItems:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)updateRecord:(id)arg1 withExpIds:(id)arg2;
- (void)beginRequestForUpdateOperation:(id)arg1 checkCount:(int)arg2 record:(id)arg3 finishBlock:(CDUnknownBlockType)arg4;
- (void)checkLocalExperWithPathInfo:(id)arg1 reocrd:(id)arg2 updateExpers:(CDUnknownBlockType)arg3;
- (void)requestPatchInfo:(CDUnknownBlockType)arg1;
- (id)init;

@end

