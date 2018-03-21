//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMMessageBaseViewController.h"

#import "AWEIMStrangerMessageDataControllerDelegate-Protocol.h"
#import "AWEUserMessage-Protocol.h"

@class AWEIMStrangerMessageDataController, NSString;

@interface AWEIMStrangerMessageViewController : AWEIMMessageBaseViewController <AWEIMStrangerMessageDataControllerDelegate, AWEUserMessage>
{
    AWEIMStrangerMessageDataController *_strangerController;
}

+ (void)load;
@property(retain, nonatomic) AWEIMStrangerMessageDataController *strangerController; // @synthesize strangerController=_strangerController;
- (void).cxx_destruct;
- (void)_trackChatStats;
- (void)backBtnClicked:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)_setupStrangerUI;
- (void)_makeTopFollowViewClosed;
- (void)topCloseBtnClicked:(id)arg1;
- (void)topFollowBtnClicked:(id)arg1;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didSendContent:(id)arg1;
- (void)didDeleteStrangerMessage;
- (void)didReceiveNewStrangerMessage:(id)arg1;
- (void)didReceiveSendMessageResponse:(id)arg1;
- (void)willDeleteMessage:(id)arg1 deleteCompletion:(CDUnknownBlockType)arg2;
- (void)_dealStrangerMessageList:(id)arg1;
- (void)fetchData;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
