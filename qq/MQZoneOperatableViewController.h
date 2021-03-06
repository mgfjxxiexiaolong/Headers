//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/MQZonePullingTableViewController.h>

#import <QQMainProject/QUIActionSheetDelegate-Protocol.h>

@class NSString, QUIActionSheet;

@interface MQZoneOperatableViewController : MQZonePullingTableViewController <QUIActionSheetDelegate>
{
    long long _delUgcReqID;
    long long _delCmtReqID;
    long long _delReplyReqID;
    QUIActionSheet *_actionSheet;
}

- (void).cxx_destruct;
- (void)refreshContentWithFeedModel:(id)arg1;
- (void)refreshCell:(id)arg1 model:(id)arg2 isLike:(_Bool)arg3;
- (void)refreshFeedModel:(id)arg1 isLike:(_Bool)arg2;
- (void)refreshLikeWithFeedModel:(id)arg1;
- (void)refreshCommentWithFeedModel:(id)arg1;
- (void)refreshVideoPlayCount:(id)arg1;
- (void)onNotifyRefreshFeedModel:(id)arg1;
- (void)handleFeedCellCommentReplyDelMenu:(id)arg1 comment:(long long)arg2 reply:(long long)arg3 commentType:(long long)arg4;
- (int)onNotifyDelReplyResult:(id)arg1;
- (int)onNotifyDelCmtResult:(id)arg1;
- (int)onNotifyDelUgcResult:(id)arg1;
- (void)advReportWithRequestId:(long long)arg1 feedModel:(id)arg2 position:(long long)arg3 isDel:(_Bool)arg4;
- (long long)requestDelReplyWithFeedModel:(id)arg1 comment:(id)arg2 reply:(id)arg3;
- (void)actionDelReplyWithFeedModel:(id)arg1 comment:(id)arg2 reply:(id)arg3;
- (long long)requestDelCommentWithFeedModel:(id)arg1 comment:(id)arg2;
- (void)actionDelCommentWithFeedModel:(id)arg1 comment:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showCommitActionSheetWithMessage:(id)arg1 tag:(long long)arg2 userData:(id)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)delReplyWithFeedModel:(id)arg1 comment:(id)arg2 reply:(id)arg3;
- (void)delCmtWithFeedModel:(id)arg1 comment:(id)arg2;
- (void)showDeleteCommentReply:(id)arg1 comment:(id)arg2 reply:(id)arg3 fromLongPress:(_Bool)arg4;
- (void)showDeleteCommentReply:(id)arg1 comment:(id)arg2 reply:(id)arg3;
- (_Bool)canDeleteCommentReply:(id)arg1 comment:(id)arg2 reply:(id)arg3 fromLongPress:(_Bool)arg4;
- (_Bool)canDeleteCommentReply:(id)arg1 comment:(id)arg2 reply:(id)arg3;
- (_Bool)enableActionForCommentReply:(id)arg1 comment:(id)arg2 reply:(id)arg3;
- (void)delUgcWithFeedModel:(id)arg1 photoIndex:(long long)arg2 multiDel:(_Bool)arg3;
- (id)fetchDeleteTips:(id)arg1;
- (void)alertTheUserWhenDelAction:(id)arg1;
- (void)registOperationNotify:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

