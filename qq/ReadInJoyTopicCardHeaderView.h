//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/UIActionSheetDelegate-Protocol.h>

@class NSString, ReadInJoyChannelArticle, ReadInjoyAsynImageView, UIButton, UILabel;

@interface ReadInJoyTopicCardHeaderView : UIView <UIActionSheetDelegate>
{
    ReadInJoyChannelArticle *_feedsModel;
    UIView *_topicCoverBg;
    ReadInjoyAsynImageView *_topicCover;
    UILabel *_topicTitle;
    UILabel *_topicTime;
    UILabel *_topicSummary;
    UIButton *_followBtn;
    UIView *_bottomLine;
}

+ (double)height;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) UILabel *topicSummary; // @synthesize topicSummary=_topicSummary;
@property(retain, nonatomic) UILabel *topicTime; // @synthesize topicTime=_topicTime;
@property(retain, nonatomic) UILabel *topicTitle; // @synthesize topicTitle=_topicTitle;
@property(retain, nonatomic) ReadInjoyAsynImageView *topicCover; // @synthesize topicCover=_topicCover;
@property(retain, nonatomic) UIView *topicCoverBg; // @synthesize topicCoverBg=_topicCoverBg;
@property(retain, nonatomic) ReadInJoyChannelArticle *feedsModel; // @synthesize feedsModel=_feedsModel;
- (void).cxx_destruct;
- (void)changeTopicCardFollowInfo;
- (void)followButtonDidClick:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tap;
- (void)layoutSubviewsExt;
- (void)updateFollowBtnStyle;
- (void)updateFollowInfoWithFollowInfo:(unsigned int)arg1;
- (_Bool)isFollowTopic;
- (id)getSummaryString;
- (id)getTitleString;
- (id)getCoverString;
- (void)layoutSubviews;
- (void)updateFollowInfoWithNotification:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
