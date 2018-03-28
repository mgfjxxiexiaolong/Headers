//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, TSVConcatenationDataFetchManager, TSVShortVideoProfileFetchManager, TTShortVideoModel;

@interface TSVProfileViewModel : NSObject
{
    _Bool _exitToCenter;
    _Bool _isFollowing;
    _Bool _hasMore;
    _Bool _isStartFollowLoading;
    TTShortVideoModel *_model;
    NSString *_avatarURL;
    NSString *_authorName;
    NSString *_reamName;
    NSString *_infoString;
    NSString *_userID;
    TSVShortVideoProfileFetchManager *_dataFetchManager;
    NSArray *_cellViewModelArray;
    long long _currentSelectedIndex;
    long long _currentExitedIndex;
    TSVConcatenationDataFetchManager *_externalDataFetchManager;
    NSDictionary *_commonTrackingParameter;
}

@property(copy, nonatomic) NSDictionary *commonTrackingParameter; // @synthesize commonTrackingParameter=_commonTrackingParameter;
@property(retain, nonatomic) TSVConcatenationDataFetchManager *externalDataFetchManager; // @synthesize externalDataFetchManager=_externalDataFetchManager;
@property(nonatomic) long long currentExitedIndex; // @synthesize currentExitedIndex=_currentExitedIndex;
@property(nonatomic) long long currentSelectedIndex; // @synthesize currentSelectedIndex=_currentSelectedIndex;
@property(nonatomic) _Bool isStartFollowLoading; // @synthesize isStartFollowLoading=_isStartFollowLoading;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) _Bool isFollowing; // @synthesize isFollowing=_isFollowing;
@property(copy, nonatomic) NSArray *cellViewModelArray; // @synthesize cellViewModelArray=_cellViewModelArray;
@property(retain, nonatomic) TSVShortVideoProfileFetchManager *dataFetchManager; // @synthesize dataFetchManager=_dataFetchManager;
@property(nonatomic) _Bool exitToCenter; // @synthesize exitToCenter=_exitToCenter;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *infoString; // @synthesize infoString=_infoString;
@property(copy, nonatomic) NSString *reamName; // @synthesize reamName=_reamName;
@property(copy, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(copy, nonatomic) NSString *avatarURL; // @synthesize avatarURL=_avatarURL;
@property(retain, nonatomic) TTShortVideoModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)getInfoString;
- (_Bool)followButtonShouldHidden;
- (void)handleFollowBtnTap;
- (void)handleNameTap;
- (void)handleAvatarTap;
- (id)detailPageDataFetchManager;
- (void)setOffsetIndex:(long long)arg1;
- (void)setCurrentIndex:(long long)arg1;
- (void)generateCellViewModelArray;
- (void)loadMoreWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)bindModel;
- (id)initWithModel:(id)arg1 commonTrackingParameter:(id)arg2 dataFetchManager:(id)arg3;

@end
