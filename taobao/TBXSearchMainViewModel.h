//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBXSearchSrpViewModel.h"

@class NSMutableDictionary, TBSRPXSearchService, TBXSearchContext;

@interface TBXSearchMainViewModel : TBXSearchSrpViewModel
{
    NSMutableDictionary *_filterDict;
    NSMutableDictionary *_floatBarDict;
}

@property(retain, nonatomic) NSMutableDictionary *floatBarDict; // @synthesize floatBarDict=_floatBarDict;
@property(retain, nonatomic) NSMutableDictionary *filterDict; // @synthesize filterDict=_filterDict;
- (void).cxx_destruct;
- (void)reset;
- (void)processItemList;
- (void)dataProcess;
- (void)initSearchService:(id)arg1;
- (void)createWithQuery:(id)arg1;
- (id)getPreProcessedQuery:(id)arg1;
- (id)loadSearchContext;
- (id)loadSearchService;

// Remaining properties
@property(retain, nonatomic) TBXSearchContext *searchContext; // @dynamic searchContext;
@property(retain, nonatomic) TBSRPXSearchService *searchService; // @dynamic searchService;

@end

