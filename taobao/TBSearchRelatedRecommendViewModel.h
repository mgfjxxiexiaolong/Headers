//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSearchViewModel.h"

#import "TBSearchLabelButtonMixedDelegate-Protocol.h"

@class NSString, TBSearchLabelButtonMixedViewModel, TBSearchRelatedRecommendModel, TBXSearchService;
@protocol TBSearchBaseCellContainer;

@interface TBSearchRelatedRecommendViewModel : TBSearchViewModel <TBSearchLabelButtonMixedDelegate>
{
    TBXSearchService *_xSearchService;
    id <TBSearchBaseCellContainer> _container;
    TBSearchLabelButtonMixedViewModel *_mixedViewModel;
    TBSearchRelatedRecommendModel *_relatedRecommend;
}

+ (float)heightOfComponentWithModel:(id)arg1;
@property(retain, nonatomic) TBSearchRelatedRecommendModel *relatedRecommend; // @synthesize relatedRecommend=_relatedRecommend;
@property(retain, nonatomic) TBSearchLabelButtonMixedViewModel *mixedViewModel; // @synthesize mixedViewModel=_mixedViewModel;
@property(nonatomic) __weak id <TBSearchBaseCellContainer> container; // @synthesize container=_container;
@property(retain, nonatomic) TBXSearchService *xSearchService; // @synthesize xSearchService=_xSearchService;
- (void).cxx_destruct;
- (void)buttonClickedInIndex:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

