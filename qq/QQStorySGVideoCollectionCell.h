//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <QQMainProject/QQStorySGVideoListViewDelegate-Protocol.h>
#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>
#import <QQMainProject/UIScrollViewDelegate-Protocol.h>

@class NSString, QQShareGroupNodeInfo, QQStorySGDayDescriptionView, QQStorySGVideoListView;
@protocol QQStorySGVideoCollectionCellDelegate;

@interface QQStorySGVideoCollectionCell : UITableViewCell <UIScrollViewDelegate, UIGestureRecognizerDelegate, QQStorySGVideoListViewDelegate>
{
    _Bool _hasCamera;
    QQShareGroupNodeInfo *_model;
    id <QQStorySGVideoCollectionCellDelegate> _delegate;
    QQStorySGVideoListView *_scrollView;
    QQStorySGDayDescriptionView *_dayDescriptionView;
}

+ (double)height;
@property(retain, nonatomic) QQStorySGDayDescriptionView *dayDescriptionView; // @synthesize dayDescriptionView=_dayDescriptionView;
@property(retain, nonatomic) QQStorySGVideoListView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <QQStorySGVideoCollectionCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QQShareGroupNodeInfo *model; // @synthesize model=_model;
@property(nonatomic) _Bool hasCamera; // @synthesize hasCamera=_hasCamera;
- (void).cxx_destruct;
- (void)listView:(id)arg1 playStoryWithFeedID:(id)arg2 stoyID:(id)arg3 withCoverView:(id)arg4;
@property(nonatomic) struct CGPoint lastScrollPoint;
- (void)setModel:(id)arg1 withGroupID:(id)arg2;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
