//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIORichImageCellView.h>

#import <QQMainProject/CAAnimationDelegate-Protocol.h>
#import <QQMainProject/QZAutoPlayGifViewDelegate-Protocol.h>

@class NSString, QZGifItemView, UIImageView;

@interface QQAIOGroupPicLCCellView : QQAIORichImageCellView <QZAutoPlayGifViewDelegate, CAAnimationDelegate>
{
    _Bool _hasDraw;
    QZGifItemView *_gifView;
    UIImageView *_errorView;
}

@property(nonatomic) _Bool hasDraw; // @synthesize hasDraw=_hasDraw;
@property(retain, nonatomic) UIImageView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) QZGifItemView *gifView; // @synthesize gifView=_gifView;
- (_Bool)shouldDisplayDouTuButton;
- (id)highlightSuperLayer;
- (_Bool)shouldDisplayMsgSendLoading;
- (id)menuCopyStr;
- (void)startMessageAnimation;
- (void)stopMessageAnimation;
- (void)didEndDisplay;
- (void)willDisplay;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_playEmojAnimationWithOutBig:(_Bool)arg1 force:(_Bool)arg2;
- (void)_gifViewShouldHidden:(_Bool)arg1;
- (void)gifDownloadFailure:(id)arg1;
- (void)gifDownloadSuccess:(id)arg1;
- (id)bigEmojScaleAnimation;
- (id)rotateAnimation:(CDStruct_5741f4bb)arg1;
- (id)alphaAnimation;
- (id)pathMoveAnimation:(CDStruct_5741f4bb)arg1;
- (_Bool)containsText;
- (void)menuActionSaveImage:(id)arg1;
- (_Bool)shouldShowMenuItemAddToFace;
- (_Bool)shouldShowLightComment;
- (void)prepareForReuse;
- (void)startGifAnimationWithImage:(id)arg1;
- (void)drawBubble;
- (void)prepareImageMaskData;
- (void)willDrawBubble;
- (void)layoutViewsAsSender;
- (void)layoutViewsAsReceiver;
- (void)setAioModel:(id)arg1;
- (void)refreshQuoteMsg:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

