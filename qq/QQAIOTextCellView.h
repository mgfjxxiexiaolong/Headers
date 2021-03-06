//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIOCommonCellView.h>

#import <QQMainProject/QQEmotionLabelDelegate-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class CATextLayer, NSString, QQAIOTextModel, QQEmotionLabel, UIButton, UIImageView;

@interface QQAIOTextCellView : QQAIOCommonCellView <QQEmotionLabelDelegate, UITableViewDelegate>
{
    CATextLayer *_srcLayer;
    QQEmotionLabel *contentLabel;
    QQAIOTextModel *_textModel;
    UIImageView *_followUpstairsIndicator;
    UIButton *_urlBtn;
}

@property(retain, nonatomic) UIButton *urlBtn; // @synthesize urlBtn=_urlBtn;
@property(retain, nonatomic) UIImageView *followUpstairsIndicator; // @synthesize followUpstairsIndicator=_followUpstairsIndicator;
@property(nonatomic) __weak QQAIOTextModel *textModel; // @synthesize textModel=_textModel;
@property(retain, nonatomic) QQEmotionLabel *contentLabel; // @synthesize contentLabel;
- (void).cxx_destruct;
- (void)setTextColorForQIMStyleBubble;
- (void)clickDetailUrl;
- (void)rePlayAnimation;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)needPlayCMFaceAfterCheck;
- (void)handleFollowUpstairsIndicatorAction;
- (_Bool)isLastValidMsgModel;
- (id)filterSpecialChar:(id)arg1;
- (_Bool)shouldShowFollowUpstairsIndicator;
- (void)showFollowUpstairsIndicatorIfNeccessary;
- (void)reloadLayoutResult:(long long)arg1;
- (struct CGRect)GetTextBottomRect;
- (struct CGRect)GetTextTopRect;
- (id)getMenuItems;
- (void)emotionLabelHandleFamilySchoolKeyWord:(id)arg1;
- (void)onNotifyRevealBankCard:(id)arg1;
- (void)emotionLabelHandleSensContent:(id)arg1;
- (void)emotionLabelHandleSmallFace:(unsigned long long)arg1 emojiID:(id)arg2 allSmallFace:(id)arg3;
- (void)emotionLabelHandleIVRAudio:(id)arg1;
- (void)emotionLabelHandleLongPress:(id)arg1;
- (void)emotionLabelHandleIDNumber:(id)arg1;
- (void)emotionLabelHandlePhoneNumber:(id)arg1;
- (void)emotionLabelHandleQQNumber:(id)arg1;
- (void)emotionLabelHandleEmail:(id)arg1;
- (void)emotionLabelHandleUrl:(id)arg1;
- (_Bool)emotionLabel:(id)arg1 shouldHandleChatStringType:(int *)arg2;
- (id)accessibilityMagicTapItmes;
- (id)touchableAreas;
- (_Bool)didTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)letOtherCellRedraw;
- (void)setHighlighted:(_Bool)arg1;
- (void)drawContent:(struct CGRect)arg1;
- (struct CGRect)frameForMsgSendFail;
- (struct CGRect)frameForMsgSendLoading;
- (_Bool)shouldDisplayMsgSendFail;
- (_Bool)shouldDisplayMsgSendLoading;
- (void)layoutSubviews;
- (void)checkSrcLayer;
- (void)checkBackWidth;
- (void)willDrawBubble;
- (double)GetMaxWidth:(double)arg1 height:(double)arg2;
- (double)GetHeadOffset;
- (void)prepareForReuse;
- (void)layoutViewsAsSender;
- (void)layoutViewsAsReceiver;
- (void)reloadAppearance;
@property(nonatomic) __weak QQAIOTextModel *aioModel;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

