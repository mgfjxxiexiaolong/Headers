//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TSVShortVideoDataFetchManagerProtocol-Protocol.h"

@class NSString, RACSignal, TTShortVideoModel;

@interface TSVDataFetchManager : NSObject <TSVShortVideoDataFetchManagerProtocol>
{
    _Bool _hasMoreToLoad;
    _Bool _isLoadingRequest;
    _Bool _shouldShowNoMoreVideoToast;
    long long _currentIndex;
    long long _listCellCurrentIndex;
    TTShortVideoModel *_replacedModel;
    id _detailCellCurrentItem;
    long long _replacedIndex;
}

@property(nonatomic) long long replacedIndex; // @synthesize replacedIndex=_replacedIndex;
@property(retain, nonatomic) id detailCellCurrentItem; // @synthesize detailCellCurrentItem=_detailCellCurrentItem;
@property(retain, nonatomic) TTShortVideoModel *replacedModel; // @synthesize replacedModel=_replacedModel;
@property(nonatomic) long long listCellCurrentIndex; // @synthesize listCellCurrentIndex=_listCellCurrentIndex;
@property(nonatomic) _Bool shouldShowNoMoreVideoToast; // @synthesize shouldShowNoMoreVideoToast=_shouldShowNoMoreVideoToast;
@property(nonatomic) _Bool isLoadingRequest; // @synthesize isLoadingRequest=_isLoadingRequest;
@property(nonatomic) _Bool hasMoreToLoad; // @synthesize hasMoreToLoad=_hasMoreToLoad;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
- (void).cxx_destruct;
- (void)requestDataAutomatically:(_Bool)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (id)itemAtIndex:(long long)arg1 replaced:(_Bool)arg2;
- (id)itemAtIndex:(long long)arg1;
- (unsigned long long)numberOfShortVideoItems;
- (void)replaceModel:(id)arg1 atIndex:(long long)arg2;
- (id)init;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType dataDidChangeBlock;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long entrance;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool needReloadData;
@property(nonatomic) _Bool refreshingWhenFullScreenPlayInTab;
@property(retain, nonatomic) RACSignal *showToastSignal;
@property(readonly) Class superclass;

@end
