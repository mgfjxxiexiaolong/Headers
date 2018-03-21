//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWEVideoPublishTaskMessage-Protocol.h"

@class AWEVideoPublishTask, MBCircularProgressBarView, NSString, UIImageView, UILabel;

@interface AWEPublishProgressView : UIView <AWEVideoPublishTaskMessage>
{
    UIImageView *_coverImageView;
    UIView *_maskView;
    MBCircularProgressBarView *_circleProgressBar;
    UILabel *_statusLabel;
    AWEVideoPublishTask *_task;
}

+ (void)generateDraftCover:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) AWEVideoPublishTask *task; // @synthesize task=_task;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) MBCircularProgressBarView *circleProgressBar; // @synthesize circleProgressBar=_circleProgressBar;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void).cxx_destruct;
- (id)awemeFromCurrentTask;
- (void)task:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)taskProgressDidChange:(id)arg1;
- (void)taskDidAppend:(id)arg1;
- (void)configProgressViewWithPhotoTask:(id)arg1;
- (void)configProgressViewWithTask:(id)arg1;
- (void)updateProgress;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
