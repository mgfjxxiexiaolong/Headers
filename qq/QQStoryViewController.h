//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/MulMemSelBusiProcessDelegate-Protocol.h>
#import <QQMainProject/QQFriendSelectedViewControllerDelegate-Protocol.h>
#import <QQMainProject/QQMoreOptionTableViewCellDelegate-Protocol.h>
#import <QQMainProject/QQMoreOptionTableViewCellScrollStateDelegate-Protocol.h>
#import <QQMainProject/QQStoryGreetingsCellDelegate-Protocol.h>
#import <QQMainProject/QQStoryShareControllerDelegate-Protocol.h>
#import <QQMainProject/QQStoryUnreadMessageCellDelegate-Protocol.h>
#import <QQMainProject/QQStoryUserCellDelegate-Protocol.h>
#import <QQMainProject/QQVideoCaptureViewControllerDelegate-Protocol.h>
#import <QQMainProject/SimpleAlertViewDelegate-Protocol.h>
#import <QQMainProject/TBBizNetworkLogicDelegate-Protocol.h>
#import <QQMainProject/TBStoryInteractiveDelegate-Protocol.h>
#import <QQMainProject/TBStoryMgrDelegate-Protocol.h>
#import <QQMainProject/TBStoryTipsViewDelegate-Protocol.h>
#import <QQMainProject/TBStoryUnsuccessCellDelegate-Protocol.h>
#import <QQMainProject/TBStoryVideoSelectorDelegate-Protocol.h>
#import <QQMainProject/TBStoryYellowToastDelegate-Protocol.h>
#import <QQMainProject/TBVideoServiceDelegate-Protocol.h>
#import <QQMainProject/UIActionSheetDelegate-Protocol.h>
#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>

@class CIImage, HeadButtonLongPress, NSDate, NSIndexPath, NSMutableArray, NSString, NSTimer, QQAlertView, QQFriendSelectedViewController, QQStoryBackToTopView, QQStoryCrashLogSender, QQStoryDiscoveryEntry, QQStoryGreetingsModel, QQStoryMainPageTableView, QQStorySelfCell, QQStorySelfDisplayModel, QQStoryUnreadMsgModel, QQVideoCaptureViewController, TBGPSModel, TBRspGetUserGuide, TBStoryCommentFaceTextView, TBStoryMgr, TBStoryVideoSelectorViewController, TBStoryYellowToast, UIAlertView, UIButton, UIImageView, UILabel, UILongPressGestureRecognizer, YYFPSLabel;

@interface QQStoryViewController : QQViewController <QQStoryUserCellDelegate, QQMoreOptionTableViewCellScrollStateDelegate, TBStoryUnsuccessCellDelegate, UIGestureRecognizerDelegate, QQFriendSelectedViewControllerDelegate, QQStoryUnreadMessageCellDelegate, QQStoryGreetingsCellDelegate, TBStoryInteractiveDelegate, QQMoreOptionTableViewCellDelegate, TBStoryVideoSelectorDelegate, MulMemSelBusiProcessDelegate, QQVideoCaptureViewControllerDelegate, TBStoryMgrDelegate, TBVideoServiceDelegate, TBBizNetworkLogicDelegate, TBStoryTipsViewDelegate, SimpleAlertViewDelegate, TBStoryYellowToastDelegate, QQStoryShareControllerDelegate, UIActionSheetDelegate>
{
    _Bool _isDragToBack;
    NSIndexPath *_leftSwipCellIndex;
    UILongPressGestureRecognizer *_touchGestureRecognizer;
    TBStoryMgr *_dataMgr;
    unsigned long long _selfVideoCount;
    NSMutableArray *_userArr;
    NSMutableArray *_videoArr;
    NSMutableArray *_unsuccessVideoArr;
    NSMutableArray *_feedListArr;
    NSTimer *_timer;
    long long _loadingCount;
    QQStorySelfCell *_cellToExport;
    QQAlertView *_alert;
    _Bool _hasDisappearOnce;
    int _controllerType;
    _Bool _hasDisplayedLocalGuide;
    _Bool _hasEnteredDeliverGuide;
    TBRspGetUserGuide *_deliverGuideModel;
    TBStoryCommentFaceTextView *_faceTextView;
    TBStoryVideoSelectorViewController *_videoSelectorVC;
    long long _feedListSection;
    _Bool _isBottomCoverLayerStyleChanging;
    UIImageView *_backgroundBubble;
    UILabel *_caiDanTips;
    NSString *_videoDir;
    CIImage *_maskImage;
    _Bool _isRefreshDone;
    _Bool _hasPreloadCaptureSession;
    unsigned long long _enterTime;
    unsigned long long _expiredArrCount;
    _Bool _isFirstTimeAutoRefresh;
    _Bool _needShowLoadingIndicator;
    _Bool _isUploaded;
    double _openTime;
    _Bool _hasCheckGreetingCelInsertion;
    long long _requestMoreCount;
    unsigned long long _viewState;
    int _speed;
    TBGPSModel *_gps;
    YYFPSLabel *_fpsLabel;
    _Bool _needsAutoRefresh;
    _Bool _autoOpenCapture;
    _Bool _needShowLeftAvatar;
    _Bool _autoRefreshLater;
    _Bool _autoReloadDataLater;
    _Bool _filterRecommend;
    _Bool _isLoadCache;
    int _redState;
    int _viewSource;
    QQStoryMainPageTableView *_tableView;
    QQStoryUnreadMsgModel *_unreadMsgModel;
    QQStorySelfDisplayModel *_selfModel;
    QQStoryGreetingsModel *_greetingsModel;
    QQFriendSelectedViewController *_fileSelectedViewController;
    UIAlertView *_deleteAlertView;
    id _firstSelfFeed;
    id _firstShareGroup;
    id _firstRecomendGroup;
    NSMutableArray *_autoPlayVidList;
    UIButton *_storyBtn;
    double _clickTime;
    NSDate *_lastFreshDate;
    QQStoryBackToTopView *_backToTopView;
    QQVideoCaptureViewController *_videoCaptureVC;
    TBStoryYellowToast *_yellowToast;
    QQStoryCrashLogSender *_crashLogSender;
    HeadButtonLongPress *_headButton;
    QQStoryDiscoveryEntry *_discoveryEntry;
}

+ (void)setTableViewLastReqDataTime:(double)arg1;
+ (id)dataArrayCache;
+ (void)setDataArrayCache:(id)arg1;
@property(retain, nonatomic) QQStoryDiscoveryEntry *discoveryEntry; // @synthesize discoveryEntry=_discoveryEntry;
@property(nonatomic) __weak HeadButtonLongPress *headButton; // @synthesize headButton=_headButton;
@property(nonatomic) _Bool isLoadCache; // @synthesize isLoadCache=_isLoadCache;
@property(nonatomic) _Bool filterRecommend; // @synthesize filterRecommend=_filterRecommend;
@property(retain, nonatomic) QQStoryCrashLogSender *crashLogSender; // @synthesize crashLogSender=_crashLogSender;
@property(retain, nonatomic) TBStoryYellowToast *yellowToast; // @synthesize yellowToast=_yellowToast;
@property(retain, nonatomic) QQVideoCaptureViewController *videoCaptureVC; // @synthesize videoCaptureVC=_videoCaptureVC;
@property(retain, nonatomic) QQStoryBackToTopView *backToTopView; // @synthesize backToTopView=_backToTopView;
@property(nonatomic) _Bool autoReloadDataLater; // @synthesize autoReloadDataLater=_autoReloadDataLater;
@property(retain, nonatomic) NSDate *lastFreshDate; // @synthesize lastFreshDate=_lastFreshDate;
@property(nonatomic) _Bool autoRefreshLater; // @synthesize autoRefreshLater=_autoRefreshLater;
@property(nonatomic) double clickTime; // @synthesize clickTime=_clickTime;
@property(nonatomic) _Bool needShowLeftAvatar; // @synthesize needShowLeftAvatar=_needShowLeftAvatar;
@property(nonatomic) int viewSource; // @synthesize viewSource=_viewSource;
@property(retain, nonatomic) UIButton *storyBtn; // @synthesize storyBtn=_storyBtn;
@property(retain, nonatomic) NSMutableArray *autoPlayVidList; // @synthesize autoPlayVidList=_autoPlayVidList;
@property(retain, nonatomic) id firstRecomendGroup; // @synthesize firstRecomendGroup=_firstRecomendGroup;
@property(retain, nonatomic) id firstShareGroup; // @synthesize firstShareGroup=_firstShareGroup;
@property(retain, nonatomic) id firstSelfFeed; // @synthesize firstSelfFeed=_firstSelfFeed;
@property(retain, nonatomic) UIAlertView *deleteAlertView; // @synthesize deleteAlertView=_deleteAlertView;
@property(nonatomic) int redState; // @synthesize redState=_redState;
@property(nonatomic) _Bool autoOpenCapture; // @synthesize autoOpenCapture=_autoOpenCapture;
@property(retain, nonatomic) QQFriendSelectedViewController *fileSelectedViewController; // @synthesize fileSelectedViewController=_fileSelectedViewController;
@property(nonatomic) _Bool needsAutoRefresh; // @synthesize needsAutoRefresh=_needsAutoRefresh;
@property(retain, nonatomic) QQStoryGreetingsModel *greetingsModel; // @synthesize greetingsModel=_greetingsModel;
@property(retain, nonatomic) QQStorySelfDisplayModel *selfModel; // @synthesize selfModel=_selfModel;
@property(retain, nonatomic) QQStoryUnreadMsgModel *unreadMsgModel; // @synthesize unreadMsgModel=_unreadMsgModel;
@property(retain, nonatomic) QQStoryMainPageTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)pushDiscovery:(id)arg1;
- (void)handleEndGetLocation:(id)arg1;
- (void)requestLocation;
- (void)setThemeBackground;
- (id)publishAnimateView;
- (void)activeFeedScanPhotoEvent;
- (void)buttonClick:(id)arg1 atIndex:(int)arg2;
- (void)TBStoryTipsViewClickClose:(id)arg1;
- (void)TBStoryTipsView:(id)arg1 clikedButtionAtIndex:(unsigned long long)arg2;
- (void)updateFakeVideoList;
- (void)storyVideoCaptureViewControllerDidCancel:(id)arg1;
- (void)storyVideoCaptureViewController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)didRequestFail:(unsigned long long)arg1 requestModel:(id)arg2 error:(id)arg3;
- (void)updateTakePhotoFunctionState:(_Bool)arg1;
- (void)handlePublishConfigureResult:(id)arg1;
- (void)didReceivedData:(unsigned long long)arg1 requestModel:(id)arg2 classModel:(id)arg3;
- (void)onCompleteFeedList:(_Bool)arg1;
- (id)findInteractiveModel:(id)arg1 inList:(id)arg2;
- (void)deletInteractiveModelWithFeedID:(id)arg1;
- (void)onLoadMoreData:(_Bool)arg1;
- (void)onRefreshData;
- (void)onCompleteGuideModel:(id)arg1 withErrorInfo:(id)arg2;
- (void)onCompleteTodayFeedInfo:(id)arg1;
- (void)onCompleteUserSelfInfo:(id)arg1;
- (void)onCompleteVideoList:(id)arg1 withError:(id)arg2;
- (void)onCompleteVideoList:(id)arg1;
- (void)onHandleError:(id)arg1;
- (void)scrollStoryViewToTop;
- (void)stopLoadingWithErr:(_Bool)arg1;
- (void)doApplicationStatusBarTapped;
- (void)didClickYellowToast:(id)arg1;
- (void)cleanFeedsUpdateCount;
- (void)showYellowToastWithMsg:(id)arg1;
- (id)getSelfTodayShareToDiscoverModel;
- (int)getRedState;
- (void)sortVideoDataList:(id)arg1;
- (void)addVideoList:(id)arg1 isRefresh:(_Bool)arg2;
- (void)loadMoreData;
- (void)insertEmptyPageSectionData;
- (void)insertUserSectionData;
- (void)insertGreetingsData;
- (void)prepareVideoCellInfo:(id)arg1;
- (int)getPublishState;
- (unsigned long long)getFailedVideoCount;
- (void)setDisplayCount;
- (void)insertSelfSectionData;
- (void)clearUnreadMsgSectionData;
- (void)insertUnreadMsgSectionData;
- (void)insertFeedListSectionData;
- (void)findFirstSelfFeedShareFeed;
- (void)reloadData;
- (void)openVideoCaptureWithLabel:(id)arg1;
- (void)openVideoCaptureWithTagInfo:(id)arg1;
- (void)openVideoCapture;
- (void)captureBtnAction:(id)arg1;
- (void)resetDeliverGuideSeq:(unsigned int)arg1;
- (unsigned int)getLastDeliverGuideSeq;
- (void)displayDeliverGuide;
- (_Bool)isNewDeliverGuide;
- (void)enterDeliverGuideProcess;
- (void)checkShouldEnterGuideProcess;
- (void)resetLocalGuideState;
- (_Bool)isDisplayLocalGuide;
- (void)displayLocalGuide;
- (void)enterLocalGuideProcess;
- (_Bool)isUseCacheAndLocated;
- (double)configurationRefreshInterval;
- (void)requestStoryBlackList;
- (void)failedToConnect;
- (id)getLastFreshDate;
- (void)refreshListData;
- (void)refreshBasicData;
- (void)sendRefreshDataRequest:(_Bool)arg1;
- (void)onBatchRemarkReadFailListDone;
- (void)refreshDataRequest:(_Bool)arg1;
- (void)networkDataReport;
- (void)autoRefresh;
- (void)handleFeedListCache:(id)arg1;
- (void)handleUnsuccessVideoCache:(id)arg1;
- (void)handleSelfTodayCache:(id)arg1;
- (void)loadCacheDataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)locateLastTimeOffset;
- (void)doPrepareDisplayDataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasContainInAutoPlayVidList:(id)arg1;
- (void)addAutoPlayVidList:(id)arg1;
- (void)checkExposureDataReport;
- (void)stayTimeDataReport;
- (void)beginRecordStayTime;
- (void)doInitData;
- (void)requestPublishConfig;
- (void)doInitUI;
- (void)dealloc;
- (_Bool)isSupportRightDragToGoBack;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)reloadAppearance;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)captureButtonWithFrame:(struct CGRect)arg1;
- (void)showCaptureButton;
- (void)onHeadButtonClick;
- (void)showLeftAvatar;
- (void)viewDidLoad;
- (void)loadView;
- (void)setNavigationBarTheme;
- (id)init;
- (id)initWithType:(int)arg1;
- (void)onBusinessProcessPopCancelMulMemSelector:(id)arg1 currentViewControllerClass:(id)arg2 selectedMember:(id)arg3;
- (void)onBusinessProcessWithSelectedMems:(id)arg1 currentViewControllerClass:(id)arg2 currentViewController:(id)arg3;
- (void)onCloseGreetingsCell;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)actionDidSuccess:(int)arg1 storyExInfo:(id)arg2;
- (void)actionDidClick:(int)arg1 storyExInfo:(id)arg2;
- (void)actionCreateShareGroup;
- (void)actionShareSelfTodayList;
- (void)actionEntryMyMemory;
- (void)onActionClickRightTitle;
- (void)onActionClickLeftTitle;
- (void)didSelectUnreadMessageCell:(unsigned int)arg1;
- (void)onRetryVideoModel:(id)arg1;
- (void)onActionCloseCell;
- (void)resetScrollToLeftState;
- (void)removeTouchGesture;
- (void)unExpandSelfCell;
- (void)leftSwipTouchDown;
- (void)resetLeftSwipGesture;
- (id)tableView:(id)arg1 backgroundColorForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (id)tableView:(id)arg1 titleColorForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (double)tableView:(id)arg1 widthForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (id)tableView:(id)arg1 titleForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (void)tableView:(id)arg1 buttonPressedInRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3 context:(id)arg4;
- (int)tableView:(id)arg1 leftButtonNumInRowAtIndexPath:(id)arg2;
- (_Bool)isMessageTabInLeftSwipState;
- (void)tableView:(id)arg1 scrollBackToCenterStateInRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 scrollToLeftSwipStateInRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSetCellStateAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 viewWillScrollAtIndexPath:(id)arg2;
- (_Bool)p_checkNetworkIsWifi;
- (id)allMyStoryVideoTime:(id)arg1 onlyHasDoodle:(_Bool)arg2;
- (void)p_startExportStoryVideoList:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)p_prepareExportStoryVideoList:(id)arg1;
- (void)onActionTapShareStorySelfCell:(id)arg1;
- (void)onActionTapDownloadStorySelfCell:(id)arg1;
- (void)p_onActionTapExpand;
- (void)onActionTapExpandStorySelfCell:(id)arg1;
- (void)onActionTapSelfHeader;
- (void)didSelectedVideoCancel;
- (void)didSelectedVideoWithResult:(id)arg1;
- (void)shouldShowMoreTagsWithFeedID:(id)arg1;
- (void)shouldShowVideoSelectorWithFeedID:(id)arg1;
- (void)didKeyBoardHideWithFeedID:(id)arg1 relativeY:(double)arg2;
- (void)didKeyBoardShowWithFeedID:(id)arg1 relativeY:(double)arg2 boardHeight:(double)arg3;
- (void)shouldShowKeyBoardWithDelegate:(id)arg1 commentInfo:(id)arg2;
- (void)shouldReloadData:(id)arg1;
- (void)storyFeedCell:(id)arg1 didFeedbackForStoryFeed:(id)arg2;
- (void)onRequestMoreVideoCover:(id)arg1;
- (_Bool)isEnterPlayArea:(_Bool)arg1 indexPath:(id)arg2;
- (double)getOffsetCompareToMidScreen:(struct CGRect)arg1;
- (void)beginAutoPlayingVideo;
- (void)stopAutoPlayingVideo;
- (_Bool)isWifiNetWork;
- (_Bool)isAllowAutoplay;
- (void)didSelectedMemoryCell:(id)arg1 withIndexPath:(id)arg2;
- (void)didSelectVideoCell:(id)arg1 withIndexPath:(id)arg2;
- (void)didSelectSelfStoryCell:(id)arg1 withIndexPath:(id)arg2;
- (void)didSelectedCellWithIndexPath:(id)arg1 withModel:(id)arg2;
- (struct CGRect)getTableViewCellRectOnScreen:(id)arg1;
- (struct CGRect)getCommentRectAtTableView:(id)arg1;
- (id)getStoryFeedInfo:(id)arg1;
- (id)getFeedInfoIndexAtTableView:(id)arg1;
- (id)getCommentIndexAtTableView:(id)arg1;
- (id)getInteractiveViewModel:(id)arg1;
- (void)showResoreFailedAlert;
- (void)showCompressFailedAlert;
- (void)showDeleteAlert;
- (void)showFailedToast;
- (void)unfoldSelfStory;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onTagInfoListNotification:(id)arg1;
- (void)joinGroupNotification:(id)arg1;
- (void)shareGroupRemoveMembersNotification:(id)arg1;
- (void)onReceiveNewMsgWhenRead:(id)arg1;
- (void)onStoryFeedInteractiveInfoPushHandle:(id)arg1;
- (void)onStoryFeedsPublishNotification:(id)arg1;
- (void)onRedDotRecievedNotification:(id)arg1;
- (void)onFreeSpaceEmptyNotification:(id)arg1;
- (void)onDragToGoBackEnable:(id)arg1;
- (void)onFinishReadLike:(id)arg1;
- (void)onSubscriptCancel:(id)arg1;
- (void)clickSubscriptCancelBtnNotification:(id)arg1;
- (void)delUserFromUserList:(unsigned long long)arg1;
- (void)onForbidUser:(id)arg1;
- (void)updateSelfVideoFeatureInfo:(id)arg1;
- (void)onUpdateVideoFeatureInfo:(id)arg1;
- (void)onUpdateVideoViewCount:(id)arg1;
- (void)onMarkedVideo:(id)arg1;
- (void)delVidFromList:(id)arg1;
- (void)onDeleteFakeVideo:(id)arg1;
- (void)onDeleteVideo:(id)arg1;
- (void)onSendSuccessHandle:(id)arg1 rspModel:(id)arg2;
- (void)onSendFailedHandle:(id)arg1;
- (void)onSendResult:(id)arg1;
- (void)onProcessResult:(id)arg1;
- (void)onSending:(id)arg1;
- (void)onCancelPublishingTaskStart:(id)arg1;
- (void)changeAccount;
- (void)doInitNotification;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

