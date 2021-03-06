//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/MQZCommonFeedListViewController.h>

#import <QQMainProject/QZCoverViewWrapperDelegate-Protocol.h>
#import <QQMainProject/UIActionSheetDelegate-Protocol.h>

@class MQZoneNavigationDoubleButtonView, NSString, QUIShareView, QZJFeedsSJoinList, TagEventHeadView, UIButton;

@interface QZTagEventFeedsController : MQZCommonFeedListViewController <QZCoverViewWrapperDelegate, UIActionSheetDelegate>
{
    long long _lastUpdateTime;
    long long _hasMore;
    NSString *_tagID;
    long long _tagUin;
    unsigned int _tagTime;
    NSString *_tagEvent;
    NSString *_tagDesc;
    NSString *_attachInfo;
    long long _moodListReqID;
    TagEventHeadView *_headView;
    long long _opmask;
    _Bool _hasPullSuccess;
    QUIShareView *_shareView;
    MQZoneNavigationDoubleButtonView *_doubleButtonView;
    UIButton *_doubleLeftItemWriteButton;
    UIButton *_doubleRightItemRightButton;
    _Bool _isShowFriendsFeed;
    _Bool _shouldWriteMoodBtn;
    NSString *_hybridCoverActionUrl;
    NSString *_hybridCoverType;
    NSString *_sharePic;
    NSString *_shareURL;
    NSString *_tagFullSummary;
    QZJFeedsSJoinList *_joinList;
}

@property(nonatomic) _Bool shouldWriteMoodBtn; // @synthesize shouldWriteMoodBtn=_shouldWriteMoodBtn;
@property(nonatomic) _Bool isShowFriendsFeed; // @synthesize isShowFriendsFeed=_isShowFriendsFeed;
@property(retain, nonatomic) QZJFeedsSJoinList *joinList; // @synthesize joinList=_joinList;
@property(retain, nonatomic) NSString *tagFullSummary; // @synthesize tagFullSummary=_tagFullSummary;
@property(retain, nonatomic) NSString *shareURL; // @synthesize shareURL=_shareURL;
@property(retain, nonatomic) NSString *sharePic; // @synthesize sharePic=_sharePic;
@property(retain, nonatomic) NSString *hybridCoverType; // @synthesize hybridCoverType=_hybridCoverType;
@property(retain, nonatomic) NSString *hybridCoverActionUrl; // @synthesize hybridCoverActionUrl=_hybridCoverActionUrl;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (id)extractFeeds:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

