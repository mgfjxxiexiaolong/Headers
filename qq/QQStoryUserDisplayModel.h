//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQStoryBaseLoadingModel.h>

@class TBStoryDesModel;

@interface QQStoryUserDisplayModel : QQStoryBaseLoadingModel
{
    _Bool _isLast;
    int _downloadState;
    TBStoryDesModel *_userInfo;
}

@property(nonatomic) _Bool isLast; // @synthesize isLast=_isLast;
@property(nonatomic) int downloadState; // @synthesize downloadState=_downloadState;
@property(retain, nonatomic) TBStoryDesModel *userInfo; // @synthesize userInfo=_userInfo;
- (void)dealloc;
- (id)initWithStoryDesModel:(id)arg1 withPredownloadState:(int)arg2;

@end

