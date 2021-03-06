//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/UICollectionViewDataSource-Protocol.h>
#import <QQMainProject/UICollectionViewDelegate-Protocol.h>
#import <QQMainProject/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSMutableDictionary, NSString, UICollectionView;
@protocol QZContainerBaseScrollViewDelegate, QZContainerBaseScrollViewScrollDelegate, QZFeedCellDelegate;

@interface QZContainerBaseScrollView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    unsigned long long _oldPage;
    _Bool _snapping;
    struct CGPoint _dragVelocity;
    struct CGPoint _dragDisplacement;
    NSMutableDictionary *_pagesCenterXDic;
    _Bool _needLayoutViewRoundCorner;
    _Bool _forceToNextPage;
    _Bool _isNeedSnapStopToCenter;
    _Bool _isNeedScrollControl;
    long long _groupCount;
    double _pageWidth;
    double _collectionViewLeftMargin;
    double _feedHorizontalMargin;
    double _collectionViewRightMargin;
    UICollectionView *_collectionView;
    unsigned long long _currentPage;
    id <QZContainerBaseScrollViewScrollDelegate> _scrollDelegate;
    id <QZFeedCellDelegate> _clickDelegate;
    id <QZContainerBaseScrollViewDelegate> _delegate;
    double _cellBgAlpha;
    struct CGSize _contentSize;
}

@property(nonatomic) double cellBgAlpha; // @synthesize cellBgAlpha=_cellBgAlpha;
@property(nonatomic) __weak id <QZContainerBaseScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <QZFeedCellDelegate> clickDelegate; // @synthesize clickDelegate=_clickDelegate;
@property(nonatomic) __weak id <QZContainerBaseScrollViewScrollDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(nonatomic) _Bool isNeedScrollControl; // @synthesize isNeedScrollControl=_isNeedScrollControl;
@property(nonatomic) _Bool isNeedSnapStopToCenter; // @synthesize isNeedSnapStopToCenter=_isNeedSnapStopToCenter;
@property(nonatomic) _Bool forceToNextPage; // @synthesize forceToNextPage=_forceToNextPage;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool needLayoutViewRoundCorner; // @synthesize needLayoutViewRoundCorner=_needLayoutViewRoundCorner;
@property(nonatomic) double collectionViewRightMargin; // @synthesize collectionViewRightMargin=_collectionViewRightMargin;
@property(nonatomic) double feedHorizontalMargin; // @synthesize feedHorizontalMargin=_feedHorizontalMargin;
@property(nonatomic) double collectionViewLeftMargin; // @synthesize collectionViewLeftMargin=_collectionViewLeftMargin;
@property(nonatomic) double pageWidth; // @synthesize pageWidth=_pageWidth;
@property(nonatomic) long long groupCount; // @synthesize groupCount=_groupCount;
- (void).cxx_destruct;
- (_Bool)isSupportRightDragToGoBack;
- (id)completeVisibleCells;
- (_Bool)isCompleteVisible:(long long)arg1;
- (id)visibleCells;
- (_Bool)isCellVisible:(long long)arg1;
- (long long)pageOffsetForComponent;
- (void)snapToPage;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)setCellMargin:(id)arg1 indexPath:(id)arg2;
- (id)getlayoutInfoViewAtPage:(unsigned long long)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)isEndCellInSection:(long long)arg1;
- (_Bool)isBeginCellInSection:(long long)arg1;
- (double)getItemWidth:(long long)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)initCollectionView:(struct CGRect)arg1;
- (void)updatePageCenterX:(double)arg1 page:(unsigned long long)arg2;
- (void)resetCenterDic;
- (struct CGPoint)contentOffset;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setBackgroundAlpha:(double)arg1 needBGClearColor:(_Bool)arg2;
- (void)setBackgroundAlpha:(double)arg1;
- (void)prepareForReuse;
- (void)layoutFeedView;
- (void)layoutSubviews;
- (void)resetView;
- (void)resetViewInfo;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

