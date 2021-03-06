//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ExploreOrderedData, NSArray, NSString, TSVRecUserCardModel;

@interface TSVRecUserCardCollectionViewCellViewModel : NSObject
{
    NSString *_categoryName;
    NSString *_cardID;
    NSString *_title;
    ExploreOrderedData *_cellData;
    TSVRecUserCardModel *_cardModel;
    NSArray *_cellViewModelArray;
    NSString *_listEntrance;
    NSString *_enterFrom;
    NSString *_logPbJSONString;
}

@property(copy, nonatomic) NSString *logPbJSONString; // @synthesize logPbJSONString=_logPbJSONString;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(copy, nonatomic) NSString *listEntrance; // @synthesize listEntrance=_listEntrance;
@property(copy, nonatomic) NSArray *cellViewModelArray; // @synthesize cellViewModelArray=_cellViewModelArray;
@property(retain, nonatomic) TSVRecUserCardModel *cardModel; // @synthesize cardModel=_cardModel;
@property(retain, nonatomic) ExploreOrderedData *cellData; // @synthesize cellData=_cellData;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *cardID; // @synthesize cardID=_cardID;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
- (void).cxx_destruct;
- (id)trackParamsWithExtraParams:(id)arg1;
- (void)trackWithEvent:(id)arg1 extraParams:(id)arg2;
- (void)handleCardCollectionViewCellDislike;
- (void)handleSinglePersonCollectionViewCellFollowBtnTapAtIndex:(long long)arg1;
- (void)willDisplaySinglePersonCollectionViewCellAtIndex:(long long)arg1;
- (void)didSelectSinglePersonCollectionViewCellAtIndex:(long long)arg1;
- (id)singlePersonCollectionViewCellViewModelAtIndex:(long long)arg1;
- (long long)numberOfSinglePersonCollectionViewCellViewModel;
- (void)bindModel;
- (id)initWithOrderedData:(id)arg1;

@end

