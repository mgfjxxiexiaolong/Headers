//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/FAViewHandlerBase.h>

#import <QQMainProject/QQGroupFileVideoPreviewHandlerDelegate-Protocol.h>

@class NSString, QQGroupFileVideoPreviewHandler;

@interface FAViewHandlerUrl : FAViewHandlerBase <QQGroupFileVideoPreviewHandlerDelegate>
{
    _Bool _canPreviewVideo;
    QQGroupFileVideoPreviewHandler *_groupFileVideoPreviewHandler;
}

@property(retain, nonatomic) QQGroupFileVideoPreviewHandler *groupFileVideoPreviewHandler; // @synthesize groupFileVideoPreviewHandler=_groupFileVideoPreviewHandler;
- (void)previewHandler:(id)arg1 failWithError:(id)arg2;
- (void)previewHandler:(id)arg1 didCheckViewPreview:(_Bool)arg2;
- (void)alertViewClicked:(long long)arg1;
- (void)didFileTransferUpdate:(id)arg1;
- (void)operateFile;
- (void)onOperateAction;
- (id)getOperationBtnTitle;
- (id)getSizeTimeLabelText;
- (void)onOnlinePreviewAction:(id)arg1;
- (_Bool)canOnlinePreviewVideo;
- (_Bool)canShowProgress;
- (_Bool)canOnlinePreview;
- (_Bool)canFreeForward;
- (_Bool)canAutoDownLoad;
- (_Bool)isKindOfHandler;
- (int)getCurrentViewMode;
- (int)businessType;
- (_Bool)canShowRightButton;
- (void)checkGroupFileViewPreviewConfig;
- (void)initEvent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

