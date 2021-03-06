//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTCellDataHelper-Protocol.h"

@class NSString;

@interface ExploreCellHelper : NSObject <TTCellDataHelper>
{
    double _midInterval;
}

+ (void)setSourceImgTest:(_Bool)arg1;
+ (_Bool)getSourceImgTest;
+ (void)setFeedUGCTest:(_Bool)arg1;
+ (_Bool)getFeedUGCTest;
+ (_Bool)userDidSetFeedUGCTest;
+ (void)setShowListDig:(long long)arg1;
+ (_Bool)isShowListDig;
+ (_Bool)shouldShowEssayActionButtons:(id)arg1;
+ (_Bool)shouldDownloadImage;
+ (void)colorTypeLabel:(id)arg1 orderedData:(id)arg2;
+ (void)layoutTypeLabel:(id)arg1 withOrderedData:(id)arg2;
+ (double)paddingBetweenInfoBarAndPic;
+ (struct CGSize)singlePicSize;
+ (struct CGSize)commentMomentCellPicSize;
+ (struct CGSize)resizablePicSizeByWidth:(double)arg1;
+ (struct CGSize)updateCommentSize:(id)arg1 cellWidth:(double)arg2;
+ (struct CGSize)updateAbstractSize:(id)arg1 cellWidth:(double)arg2;
+ (_Bool)shouldDisplayEssayGodComment:(id)arg1 listType:(unsigned long long)arg2;
+ (_Bool)shouldDisplayEssayComment:(id)arg1 listType:(unsigned long long)arg2;
+ (_Bool)shouldDisplayComment:(id)arg1 listType:(unsigned long long)arg2;
+ (_Bool)shouldDisplayAbstract:(id)arg1 listType:(unsigned long long)arg2;
+ (double)largeImageWidth:(double)arg1;
+ (float)heightForVideoImageWidth:(float)arg1 height:(float)arg2 constraintWidth:(float)arg3;
+ (double)heightForLoopImageWidth:(double)arg1 height:(double)arg2 constraintWidth:(double)arg3;
+ (double)heightForImageWidth:(double)arg1 height:(double)arg2 constraintWidth:(double)arg3;
+ (void)refreshMidnightInterval;
+ (Class)cellClassFromData:(id)arg1;
+ (id)identifierForData:(id)arg1;
+ (unsigned long long)cellViewTypeForVideoStyle:(long long)arg1 withData:(id)arg2;
+ (double)heightForData:(id)arg1 cellWidth:(double)arg2 listType:(unsigned long long)arg3;
+ (void)trackAdCellTypeException:(id)arg1;
+ (void)refreshFontSizeForRecycleCardViews;
+ (void)recycleCellView:(id)arg1;
+ (id)dequeueTableCellViewForData:(id)arg1;
+ (id)dequeueTableCellForData:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3 refer:(unsigned long long)arg4;
+ (Class)cellClassFromCellViewType:(unsigned long long)arg1 data:(id)arg2;
+ (void)registerAllCellClassWithTableView:(id)arg1;
+ (void)registerCellBridge;
+ (id)sharedInstance;
@property(nonatomic) double midInterval; // @synthesize midInterval=_midInterval;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

