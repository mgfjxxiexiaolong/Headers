//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SSImpressionProtocol-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, TTUGCCollectionViewCellViewBase;

@interface TTUGCColletionViewImpressionHelper : NSObject <UICollectionViewDelegate, SSImpressionProtocol>
{
    _Bool _recordImpression;
    _Bool _isDisplay;
    TTUGCCollectionViewCellViewBase *_cellViewBase;
    NSString *_listKey;
    unsigned long long _groupType;
    unsigned long long _modelType;
}

@property(nonatomic) _Bool isDisplay; // @synthesize isDisplay=_isDisplay;
@property(nonatomic) unsigned long long modelType; // @synthesize modelType=_modelType;
@property(nonatomic) unsigned long long groupType; // @synthesize groupType=_groupType;
@property(copy, nonatomic) NSString *listKey; // @synthesize listKey=_listKey;
@property(nonatomic) _Bool recordImpression; // @synthesize recordImpression=_recordImpression;
@property(nonatomic) __weak TTUGCCollectionViewCellViewBase *cellViewBase; // @synthesize cellViewBase=_cellViewBase;
- (void).cxx_destruct;
- (void)recordImpressionWithStatus:(long long)arg1 impressionModel:(id)arg2;
- (void)recordForDisplayCellAtIndexPath:(id)arg1;
- (void)needRerecordImpressions;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)stopRecord;
- (void)startRecord;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

