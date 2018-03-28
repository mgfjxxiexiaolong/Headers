//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "TTShareManagerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "WDPostQuestionReviewStateViewDelegate-Protocol.h"

@class NSString, SSThemedScrollView, TTShareManager, TTViewWrapper, WDInviteUsersToAnswerScrollView, WDPostQuestionReviewStateView, WDPostQuestionReviewStatusContentView, WDPostQuestionReviewStatusViewModel;

@interface WDPostQuestionReviewStatusViewController : SSViewControllerBase <UIActionSheetDelegate, WDPostQuestionReviewStateViewDelegate, TTShareManagerDelegate>
{
    WDPostQuestionReviewStatusViewModel *_viewModel;
    WDPostQuestionReviewStatusContentView *_questionView;
    WDPostQuestionReviewStateView *_stateView;
    WDInviteUsersToAnswerScrollView *_inviteScrollView;
    SSThemedScrollView *_contentScrollView;
    TTViewWrapper *_wrapperView;
    TTShareManager *_shareManager;
}

+ (void)load;
@property(retain, nonatomic) TTShareManager *shareManager; // @synthesize shareManager=_shareManager;
@property(retain, nonatomic) TTViewWrapper *wrapperView; // @synthesize wrapperView=_wrapperView;
@property(retain, nonatomic) SSThemedScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(retain, nonatomic) WDInviteUsersToAnswerScrollView *inviteScrollView; // @synthesize inviteScrollView=_inviteScrollView;
@property(retain, nonatomic) WDPostQuestionReviewStateView *stateView; // @synthesize stateView=_stateView;
@property(retain, nonatomic) WDPostQuestionReviewStatusContentView *questionView; // @synthesize questionView=_questionView;
@property(retain, nonatomic) WDPostQuestionReviewStatusViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)moreButton;
- (void)modifyButtonClicked:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)shareManager:(id)arg1 completedWith:(id)arg2 sharePanel:(id)arg3 error:(id)arg4 desc:(id)arg5;
- (void)shareManager:(id)arg1 clickedWith:(id)arg2 sharePanel:(id)arg3;
- (void)moreButtonPressed;
- (void)themeChanged:(id)arg1;
- (void)fontChanged;
- (struct CGRect)frameForIniviteView;
- (struct CGRect)frameForQuestionView;
- (struct CGRect)frameForStateView;
- (struct CGRect)frameForContentView;
- (void)enterModifyPage;
- (void)addWendaListPage;
- (void)setTargetView:(id)arg1;
- (void)addKVO;
- (void)restart;
- (void)triggerRequest;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithQuestionID:(id)arg1 baseCondition:(id)arg2 apiParameter:(id)arg3;
- (id)initWithRouteParamObj:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
