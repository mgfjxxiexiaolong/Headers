//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AWEVideoRouter : NSObject
{
}

+ (void)setTranslationTransitionDelegate:(id)arg1;
+ (id)translationTransitionDelegate;
+ (void)setTransitionDelegate:(id)arg1;
+ (id)transitionDelegate;
+ (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)presentViewControllerCustom:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)startWithBackUpIfNeed;
+ (void)retrievePublishModuleFromDraft:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)startWithBackup:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)startWithDraft:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)tryMusicAgainWithDraft:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)startWithMusics:(id)arg1 andChallenge:(id)arg2;
+ (void)startWithMusic:(id)arg1 groupID:(id)arg2;
+ (void)starBodydanceWithMusic:(id)arg1;
+ (void)startWithChallenge:(id)arg1;
+ (void)startBodydanceRecord;
+ (void)startMusicAndVideoWorkFlowWithType:(_Bool)arg1 refer:(id)arg2;
+ (void)startMusicWorkFlowWithRefer:(id)arg1;
+ (void)startUploadVideoWorkFlowWithRefer:(id)arg1;
+ (void)startWithPublishModel:(id)arg1 musicViewController:(id)arg2;
+ (_Bool)canStartVideoFlow;

@end
