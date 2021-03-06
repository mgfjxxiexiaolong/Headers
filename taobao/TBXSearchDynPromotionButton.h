//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSearchBaseUIButton.h"

@class NSMutableArray, TBSearchDynPromotionFilterItem, TBXSearchService, UIImageView;

@interface TBXSearchDynPromotionButton : TBSearchBaseUIButton
{
    TBSearchDynPromotionFilterItem *_model;
    TBXSearchService *_searchService;
    NSMutableArray *_childViewCollection;
    UIImageView *_middleLogoImageView;
    double _contentWidth;
}

@property(nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
@property(retain, nonatomic) UIImageView *middleLogoImageView; // @synthesize middleLogoImageView=_middleLogoImageView;
@property(retain, nonatomic) NSMutableArray *childViewCollection; // @synthesize childViewCollection=_childViewCollection;
@property(retain, nonatomic) TBXSearchService *searchService; // @synthesize searchService=_searchService;
@property(retain, nonatomic) TBSearchDynPromotionFilterItem *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)clearChildView;
- (void)createChildView;
- (void)render;
- (void)configModel:(id)arg1 andSearchService:(id)arg2;

@end

