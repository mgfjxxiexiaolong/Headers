//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, TSVRecommendCardModel;

@interface TSVRecommendCardViewModel : NSObject
{
    _Bool _isRecommendCardFinishFetching;
    _Bool _isRecommendCardShowing;
    _Bool _scrollAfterFollowed;
    _Bool _resetContentOffset;
    NSDictionary *_commonParameter;
    NSString *_detailPageUserID;
    NSString *_listEntrance;
    NSDictionary *_logPb;
    NSArray *_userCards;
    TSVRecommendCardModel *_model;
}

@property(retain, nonatomic) TSVRecommendCardModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool resetContentOffset; // @synthesize resetContentOffset=_resetContentOffset;
@property(nonatomic) _Bool scrollAfterFollowed; // @synthesize scrollAfterFollowed=_scrollAfterFollowed;
@property(nonatomic) _Bool isRecommendCardShowing; // @synthesize isRecommendCardShowing=_isRecommendCardShowing;
@property(nonatomic) _Bool isRecommendCardFinishFetching; // @synthesize isRecommendCardFinishFetching=_isRecommendCardFinishFetching;
@property(copy, nonatomic) NSArray *userCards; // @synthesize userCards=_userCards;
@property(copy, nonatomic) NSDictionary *logPb; // @synthesize logPb=_logPb;
@property(copy, nonatomic) NSString *listEntrance; // @synthesize listEntrance=_listEntrance;
@property(copy, nonatomic) NSString *detailPageUserID; // @synthesize detailPageUserID=_detailPageUserID;
@property(copy, nonatomic) NSDictionary *commonParameter; // @synthesize commonParameter=_commonParameter;
- (void).cxx_destruct;
- (void)processImpressionAtIndex:(id)arg1 status:(long long)arg2;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (id)getAPIPrefix;
- (void)fetchRecommendArrayWithUserID:(id)arg1;
- (void)resetContentOffsetIfNeed;
- (id)viewModelAtIndex:(unsigned long long)arg1;
- (void)didSelectItemAtIndex:(unsigned long long)arg1;
- (void)bindModel;
- (id)init;

@end
