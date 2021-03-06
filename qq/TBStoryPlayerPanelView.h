//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/TBBizNetworkLogicDelegate-Protocol.h>
#import <QQMainProject/TBStoryPlayerPanelHelperDelegate-Protocol.h>
#import <QQMainProject/TBStoryPlayerUserinfoViewDelegate-Protocol.h>
#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>

@class FLLabel, FLView, NSString, QQStoryUrlImageView, TBExtendedHitButton, TBExtendedHitView, TBLikeButtonView, TBPublishStoryVideoModel, TBQQUserInfoModel, TBStoryFeedModel, TBStoryPlayerPanelHelper, TBStoryPlayerUserinfoModel, TBStoryPlayerUserinfoView, TBStoryVideoDesModel, TBVideoBasicInfoModel, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UITapGestureRecognizer;
@protocol TBStoryPlayerPanelViewProtocol;

@interface TBStoryPlayerPanelView : UIView <UIGestureRecognizerDelegate, TBStoryPlayerUserinfoViewDelegate, TBBizNetworkLogicDelegate, TBStoryPlayerPanelHelperDelegate>
{
    UILabel *_userNameLabel;
    UILabel *_createTimeLabel;
    UIView *_comeFromView;
    UIView *_videoTagView;
    UILabel *_videoTagLabel;
    TBExtendedHitView *_interactionDetailsView;
    FLView *_likeAvatarWrapView;
    UIImageView *_likeMoreIcon;
    FLLabel *_visitCommentLabel;
    UIImageView *_visitCommentMoreIcon;
    TBExtendedHitView *_cmdBtnWrap;
    UIButton *_deleteBtn;
    UIButton *_saveBtn;
    UIButton *_commentBtn;
    TBExtendedHitButton *_moreBtn;
    TBLikeButtonView *_likeNewBtn;
    UIButton *_shareBtn;
    QQStoryUrlImageView *_videoCover;
    UIView *_labelBack;
    UILabel *_publishLabel;
    UIActivityIndicatorView *_publishIndicatorView;
    UIImageView *_publishFailIcon;
    UITapGestureRecognizer *_publishTapGesture;
    UIButton *_videoLabelBtn;
    long long _playModel;
    TBQQUserInfoModel *_userInfo;
    UIButton *_guideBtn;
    _Bool _needGuideBtn;
    unsigned long long _newestLikeUid;
    unsigned int _totalCommentNum;
    unsigned int _totalLikeNum;
    TBStoryPlayerUserinfoModel *_userInfoModel;
    TBStoryPlayerUserinfoView *_userView;
    UIImageView *_likeAnimateView;
    _Bool _isFirstPlay;
    long long _interactionType;
    unsigned long long _storyMemoryEntry;
    unsigned long long _fetchUserInfoSeq;
    unsigned long long _fetchSubscribeSeq;
    UITapGestureRecognizer *_doubleTapPanelView;
    int _timezoneOffset;
    _Bool _isRetrying;
    TBVideoBasicInfoModel *_basicInfoModel;
    TBStoryFeedModel *_feedInfo;
    _Bool _didShowInWindow;
    TBStoryPlayerPanelHelper *_panelHelper;
    UIView *_exportBtn;
    UIView *_wrapView;
    NSString *_unionID;
    NSString *_nick;
    NSString *_from;
    TBStoryVideoDesModel *_videoModel;
    id <TBStoryPlayerPanelViewProtocol> _delegate;
    long long _videoStatus;
    TBPublishStoryVideoModel *_publishModel;
    unsigned long long _publicPlayerEntry;
}

+ (id)LikeChanged;
+ (id)DeleteComment;
+ (id)AddComment;
+ (id)PanelLikeChanged;
+ (id)InteractionOccur;
@property(nonatomic) unsigned long long publicPlayerEntry; // @synthesize publicPlayerEntry=_publicPlayerEntry;
@property(retain, nonatomic) TBPublishStoryVideoModel *publishModel; // @synthesize publishModel=_publishModel;
@property(nonatomic) _Bool didShowInWindow; // @synthesize didShowInWindow=_didShowInWindow;
@property(nonatomic) long long videoStatus; // @synthesize videoStatus=_videoStatus;
@property(retain, nonatomic) TBQQUserInfoModel *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <TBStoryPlayerPanelViewProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TBStoryVideoDesModel *videoModel; // @synthesize videoModel=_videoModel;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(copy, nonatomic) NSString *unionID; // @synthesize unionID=_unionID;
@property(retain, nonatomic) UIView *wrapView; // @synthesize wrapView=_wrapView;
@property(retain, nonatomic) UIView *exportBtn; // @synthesize exportBtn=_exportBtn;
@property(retain, nonatomic) TBStoryPlayerPanelHelper *panelHelper; // @synthesize panelHelper=_panelHelper;
- (void).cxx_destruct;
- (void)addShareGroupVideoFail;
- (void)addShareGroupVideoSuccess;
- (_Bool)isCurrentShareGroupVideo:(id)arg1;
- (void)addShareGroupVideoResult:(id)arg1;
- (void)deleteComment;
- (void)addComment;
- (void)actionRefreshVideoFeatureInfoList:(id)arg1;
- (void)actionGetVideoFeatureInfoList:(id)arg1;
- (void)onUpdateVideoViewCount:(id)arg1;
- (void)rspSubscriptOpetarion:(id)arg1;
- (void)actionFetchGroupMemberCard:(id)arg1;
- (void)didReceivedData:(unsigned long long)arg1 requestModel:(id)arg2 classModel:(id)arg3;
- (void)playLikeAnimate;
- (void)tapGestureVideoLabel;
- (void)tapGestureShowMore;
- (void)updateLikeIcon;
- (void)likeChange:(id)arg1;
- (_Bool)forbbidenCommentAndLike;
- (void)tapGestureLike;
- (void)tapGestureShowComment;
- (long long)opEntryForReport;
- (void)tapGestureInteractionDetailListView;
- (void)tapGestureCloseVideo;
- (void)onAccessAuthorityListViewTap:(unsigned int)arg1;
- (void)onFoucsBtnTap;
- (void)onUserViewTap;
- (_Bool)shouldTapUserView;
- (_Bool)shouldShowUserSummaryCard;
- (void)onDoubleTapPanel;
- (void)onDoubleTapLikeBtn;
- (void)shouldStopRepeatPlay;
- (void)shouldStartRepeatPlay;
- (void)configureVisit:(unsigned int)arg1 commentNum:(unsigned int)arg2 likeNum:(unsigned int)arg3;
- (void)configureInteractionDetailsView:(long long)arg1 configureType:(long long)arg2;
- (void)initInteractionDetailsView:(_Bool)arg1;
- (void)initLikeAnimateUI;
- (void)p_removeCmdBtn;
- (void)initCmdBtn;
- (void)p_removeMoreBtn;
- (void)initMoreBtn;
- (void)initCloseVideoUI;
- (void)hideVideoLabel;
- (void)showVideoLabel:(id)arg1;
- (void)showUserInfo:(_Bool)arg1;
- (void)p_retryGesture:(id)arg1;
- (_Bool)isRetring;
- (void)setVideoCoverPath:(id)arg1;
- (void)p_initPublishingView;
- (void)dealloc;
- (_Bool)shouldShowInteractionView;
- (_Bool)isSelfShareIdentify;
- (_Bool)isQIMRecommendFriend;
- (void)showUserInfoView:(_Bool)arg1;
- (_Bool)shouldShowUserInfoView;
- (_Bool)shouldShowMoreBtn;
- (_Bool)shouldShowVideoTag;
- (_Bool)needShowNormarUserIcon;
- (_Bool)isFromMsgTabNode;
- (_Bool)isFromMsgTabNewFuntion;
- (_Bool)isFromDiscoveryPage;
- (_Bool)isNeedInteractionButton;
- (_Bool)groupStoryFromAIO;
- (_Bool)isShare2Discovery;
- (_Bool)isStrangerViewFriendOnlyVideo;
- (_Bool)shouldShowCmtLike;
- (void)layoutSubviews;
- (void)initUI;
- (id)getCorrectTagVideoFeedID;
- (id)newEmptyUserInfo;
- (void)refreshCurrentVideoNick;
- (void)refreshCommonWithUnionID:(id)arg1 andVideoModel:(id)arg2 from:(id)arg3 isFetchSelf:(_Bool)arg4;
- (void)p_addVideoSendingNotification;
- (void)refreshInteractiveView;
- (void)refreshUIWithUnionID:(id)arg1 videoModel:(id)arg2 from:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 andPlayModel:(long long)arg2 storyMemoryEntry:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

