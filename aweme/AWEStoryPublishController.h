//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEStoryPublishContainerViewDelegate-Protocol.h"
#import "AWEVideoPublishTaskMessage-Protocol.h"
#import "HTSPlayerDelegate-Protocol.h"

@class AWEStoryPublishContainerView, AWEVideoPublishTask, AWEVideoPublishViewModel, HTSPlayer, NSString, UIButton, UILabel, UIView;
@protocol AWEStoryPublishControllerDelegate;

@interface AWEStoryPublishController : UIViewController <AWEVideoPublishTaskMessage, AWEStoryPublishContainerViewDelegate, HTSPlayerDelegate>
{
    id <AWEStoryPublishControllerDelegate> _delegate;
    UIButton *_sendBtn;
    AWEStoryPublishContainerView *_publishContainerView;
    HTSPlayer *_player;
    long long _tryPlayCount;
    UIView *_playerContainer;
    AWEVideoPublishViewModel *_publishViewModel;
    AWEVideoPublishTask *_publishTask;
    UILabel *_sendLabel;
    double _originVolume;
    double _saveStartTimestamp;
}

@property(nonatomic) double saveStartTimestamp; // @synthesize saveStartTimestamp=_saveStartTimestamp;
@property(nonatomic) double originVolume; // @synthesize originVolume=_originVolume;
@property(retain, nonatomic) UILabel *sendLabel; // @synthesize sendLabel=_sendLabel;
@property(retain, nonatomic) AWEVideoPublishTask *publishTask; // @synthesize publishTask=_publishTask;
@property(retain, nonatomic) AWEVideoPublishViewModel *publishViewModel; // @synthesize publishViewModel=_publishViewModel;
@property(retain, nonatomic) UIView *playerContainer; // @synthesize playerContainer=_playerContainer;
@property(nonatomic) long long tryPlayCount; // @synthesize tryPlayCount=_tryPlayCount;
@property(retain, nonatomic) HTSPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AWEStoryPublishContainerView *publishContainerView; // @synthesize publishContainerView=_publishContainerView;
@property(nonatomic) __weak UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(nonatomic) __weak id <AWEStoryPublishControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)voiceDidClick:(id)arg1;
- (void)hiddenPublishBtn:(_Bool)arg1;
- (void)publishContainer:(id)arg1 didClickedLableBtn:(id)arg2;
- (void)penDidClickFinish:(id)arg1;
- (void)penDidClickRevoke:(id)arg1;
- (void)penCancelled:(id)arg1 withEvent:(id)arg2 color:(id)arg3 brush:(unsigned long long)arg4;
- (void)penEnded:(id)arg1 withEvent:(id)arg2 color:(id)arg3 brush:(unsigned long long)arg4;
- (void)penMoved:(id)arg1 withEvent:(id)arg2 color:(id)arg3 brush:(unsigned long long)arg4;
- (void)penBegin:(id)arg1 withEvent:(id)arg2 color:(id)arg3 brush:(unsigned long long)arg4;
- (void)publishContainer:(id)arg1 didClickedPenBtn:(id)arg2;
- (void)player:(id)arg1 didFailedToPlayVideoWithData:(id)arg2;
- (void)publishWithAnimation:(CDUnknownBlockType)arg1;
- (void)taskFailedSaveStoryToLocal:(id)arg1;
- (void)taskDidSaveStoryToLocal:(id)arg1;
- (void)task:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)taskWillSaveStoryToLocal:(id)arg1;
- (void)publishContainerDidClickedSave:(id)arg1;
- (void)didClickedCancel:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
