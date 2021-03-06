//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QFTSBaseEngine.h>

#import <QQMainProject/IFTSFunctionEngine-Protocol.h>

@class NSMutableArray, NSString;

@interface QFTSFunctionEngine : QFTSBaseEngine <IFTSFunctionEngine>
{
    NSMutableArray *_filters;
}

+ (id)GetInstance;
- (void).cxx_destruct;
- (id)currentFtsDataManager;
- (void)continueSearchWithKeyword:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)ftsGetResultsWithSearchKeyword:(id)arg1;
- (id)getFeedResultsForKeyword:(id)arg1;
- (void)ftsDestructFTSEngine;
- (void)ftsConstructFTSEngine;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

