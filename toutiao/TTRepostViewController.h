//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "TTUGCTextViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSDictionary, NSString, SSThemedButton, SSThemedLabel, SSThemedScrollView, SSThemedView, TTRepostQuoteModel, TTRepostThreadModel, TTRepostThreadSchemaQuoteView, TTRichSpanText, TTUGCTextView, TTUGCTextViewMediator, TTUGCToolbar;

@interface TTRepostViewController : SSViewControllerBase <UIScrollViewDelegate, TTUGCTextViewDelegate>
{
    _Bool _firstAppear;
    _Bool _isNeedShowTips;
    NSString *_cid;
    NSString *_categoryID;
    TTRepostThreadModel *_repostModel;
    TTRepostQuoteModel *_repostQuoteModel;
    TTRichSpanText *_richSpanText;
    SSThemedButton *_postButton;
    SSThemedScrollView *_containerView;
    SSThemedView *_inputContainerView;
    SSThemedLabel *_tipLabel;
    TTUGCTextView *_inputTextView;
    TTRepostThreadSchemaQuoteView *_repostQuoteView;
    TTUGCToolbar *_toolbar;
    TTUGCTextViewMediator *_textViewMediator;
    SSThemedButton *_repostToCommentCheckButton;
    NSDictionary *_trackExtraParams;
    struct CGRect _keyboardEndFrame;
}

+ (long long)preferredRouteViewControllerOpenStyle;
+ (void)load;
+ (id)presentRepostToWeitoutiaoViewControllerWithRepostType:(unsigned long long)arg1 originArticle:(id)arg2 originThread:(id)arg3 originShortVideoOriginalData:(id)arg4 originWendaAnswer:(id)arg5 operationItemType:(unsigned long long)arg6 operationItemID:(id)arg7 repostSegments:(id)arg8;
+ (id)presentRepostToWeitoutiaoViewControllerWithRepostType:(unsigned long long)arg1 originArticle:(id)arg2 originThread:(id)arg3 originShortVideoOriginalData:(id)arg4 operationItemType:(unsigned long long)arg5 operationItemID:(id)arg6 repostSegments:(id)arg7;
+ (id)presentRepostToWeitoutiaoViewControllerWithRepostType:(unsigned long long)arg1 originWendaAnswer:(id)arg2 operationItemID:(id)arg3 repostSegments:(id)arg4;
@property(retain, nonatomic) NSDictionary *trackExtraParams; // @synthesize trackExtraParams=_trackExtraParams;
@property(nonatomic) _Bool isNeedShowTips; // @synthesize isNeedShowTips=_isNeedShowTips;
@property(retain, nonatomic) SSThemedButton *repostToCommentCheckButton; // @synthesize repostToCommentCheckButton=_repostToCommentCheckButton;
@property(retain, nonatomic) TTUGCTextViewMediator *textViewMediator; // @synthesize textViewMediator=_textViewMediator;
@property(retain, nonatomic) TTUGCToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) TTRepostThreadSchemaQuoteView *repostQuoteView; // @synthesize repostQuoteView=_repostQuoteView;
@property(retain, nonatomic) TTUGCTextView *inputTextView; // @synthesize inputTextView=_inputTextView;
@property(retain, nonatomic) SSThemedLabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) SSThemedView *inputContainerView; // @synthesize inputContainerView=_inputContainerView;
@property(retain, nonatomic) SSThemedScrollView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) SSThemedButton *postButton; // @synthesize postButton=_postButton;
@property(nonatomic) struct CGRect keyboardEndFrame; // @synthesize keyboardEndFrame=_keyboardEndFrame;
@property(nonatomic) _Bool firstAppear; // @synthesize firstAppear=_firstAppear;
@property(retain, nonatomic) TTRichSpanText *richSpanText; // @synthesize richSpanText=_richSpanText;
@property(retain, nonatomic) TTRepostQuoteModel *repostQuoteModel; // @synthesize repostQuoteModel=_repostQuoteModel;
@property(retain, nonatomic) TTRepostThreadModel *repostModel; // @synthesize repostModel=_repostModel;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
- (void).cxx_destruct;
- (void)trackRepostV3WithEvent:(id)arg1 extra:(id)arg2;
- (void)trackRepostWithEvent:(id)arg1 label:(id)arg2 extra:(id)arg3;
- (id)source;
- (void)textView:(id)arg1 willChangeHeight:(float)arg2 withDiffHeight:(double)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tapAction:(id)arg1;
- (void)endEditing;
- (void)repostFinished:(_Bool)arg1;
- (void)cancelRepost:(id)arg1;
- (_Bool)validateAttributedTextInTextView:(id)arg1;
- (void)sendRepost:(id)arg1;
- (void)keyboardWillChange:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)themeChanged:(id)arg1;
- (void)addNotification;
- (void)repostToCommentCheckButtonClicked:(id)arg1;
- (void)setRepostToCommentCheckButtonChecked:(_Bool)arg1;
- (_Bool)shouldSetCheckedRepostToCommentCheckButton;
- (_Bool)shouldShowRepostToCommentCheckButton;
- (void)refreshUI;
- (void)createComponent;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithRouteParamObj:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
