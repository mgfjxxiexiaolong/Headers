//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ALBBPwdVoiceUploader : NSObject
{
}

+ (id)sharedUploader;
- (id)errorWithCode:(long long)arg1 msg:(id)arg2;
- (id)encodeWithFile:(id)arg1;
- (id)getTaskWithFilePath:(id)arg1 CompletionBlock:(CDUnknownBlockType)arg2;
- (id)updateVoiceWithPath:(id)arg1 CompletionBlock:(CDUnknownBlockType)arg2;

@end
