//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QQHotChatMemberListModel;
@protocol IQQHotChatMemberListDelegate;

@interface QQHotChatMemberListManager : NSObject
{
    long long _groupCode;
    QQHotChatMemberListModel *_memberListModel;
    _Bool _bFetching;
    int _fetchTimes;
    id <IQQHotChatMemberListDelegate> _delegate;
    int _xo;
}

- (void).cxx_destruct;
- (void)requestHotChatMemberList:(long long)arg1 firstUin:(int)arg2 maxCount:(int)arg3;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(nonatomic) id <IQQHotChatMemberListDelegate> delegate; // @dynamic delegate;
@property(nonatomic) long long groupCode; // @dynamic groupCode;
@property(retain, nonatomic) QQHotChatMemberListModel *memberListModel; // @dynamic memberListModel;

@end

