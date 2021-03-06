//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQStoryShareControllerDelegate-Protocol.h>

@class NSString, TBQQUserInfoModel, TBStoryVideoDesModel;
@protocol TBStoryPlayerPanelHelperDelegate;

@interface TBStoryPlayerPanelHelper : NSObject <QQStoryShareControllerDelegate>
{
    long long _playMode;
    TBStoryVideoDesModel *_videoModel;
    TBQQUserInfoModel *_userInfo;
    NSString *_uid;
    id <TBStoryPlayerPanelHelperDelegate> _delegate;
    long long _playerVideoType;
}

@property(nonatomic) long long playerVideoType; // @synthesize playerVideoType=_playerVideoType;
@property(nonatomic) __weak id <TBStoryPlayerPanelHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)shareControllerDismiss:(id)arg1;
- (void)shareControllerShow:(id)arg1;
- (void)doShareMyStory;
- (id)getGroupNickWithUid:(id)arg1;
- (_Bool)isPersonalVideo;
- (_Bool)isShareGroupVideo;
- (_Bool)isGroupVideo;
- (_Bool)isGroupVideoNode;
- (_Bool)isPublicPlayModel;
- (_Bool)isGroupStoryModel;
- (id)videoGroupCode;
- (_Bool)isHotTopicModel;
- (_Bool)isBigVUser;
- (_Bool)isFriendShip;
- (_Bool)isSelf;
- (_Bool)isHost;
- (void)updateUserInfo:(id)arg1;
- (id)initWithUid:(id)arg1 playModel:(long long)arg2 videoModel:(id)arg3;
- (id)initWithVideoModel:(id)arg1 playModel:(long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

