//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TSVDataFetchManager.h"

@class NSArray, NSMutableIndexSet, NSString, RACSignal;
@protocol TSVShortVideoDataFetchManagerProtocol;

@interface TSVConcatenationDataFetchManager : TSVDataFetchManager
{
    RACSignal *showToastSignal;
    NSArray *_dataFetchManagerArray;
    long long _currentDataFetchManagerIndex;
    id <TSVShortVideoDataFetchManagerProtocol> _currentManager;
    NSString *_toastText;
    NSMutableIndexSet *_managerSwitchIndexSet;
}

+ (id)managerByAppendingShortVideoChannelManagerWithOriginalManager:(id)arg1 listEntrance:(id)arg2 switchLabel:(id)arg3;
@property(retain, nonatomic) NSMutableIndexSet *managerSwitchIndexSet; // @synthesize managerSwitchIndexSet=_managerSwitchIndexSet;
@property(copy, nonatomic) NSString *toastText; // @synthesize toastText=_toastText;
@property(retain, nonatomic) id <TSVShortVideoDataFetchManagerProtocol> currentManager; // @synthesize currentManager=_currentManager;
@property(nonatomic) long long currentDataFetchManagerIndex; // @synthesize currentDataFetchManagerIndex=_currentDataFetchManagerIndex;
@property(retain, nonatomic) NSArray *dataFetchManagerArray; // @synthesize dataFetchManagerArray=_dataFetchManagerArray;
- (void)setShowToastSignal:(id)arg1;
- (id)showToastSignal;
- (void).cxx_destruct;
- (id)itemAtIndex:(long long)arg1;
- (id)itemAtIndex:(long long)arg1 replaced:(_Bool)arg2;
- (unsigned long long)numberOfShortVideoItems;
- (void)requestDataAutomatically:(_Bool)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (id)initWithDataFetchManagerArray:(id)arg1 toastText:(id)arg2;

@end

