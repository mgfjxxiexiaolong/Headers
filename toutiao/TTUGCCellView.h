//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTUGCBaseCellView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, SSThemedButton, SSThemedImageView, SSThemedLabel, TTHighlightedView, TTImageView, TTUGCAttributedLabel;

@interface TTUGCCellView : TTUGCBaseCellView <UIGestureRecognizerDelegate>
{
    NSArray *_contentImageViews;
    SSThemedButton *_webpageBackgroundButton;
    TTImageView *_webpageThumbImageView;
    SSThemedImageView *_webpagePlayIconImageView;
    SSThemedLabel *_webpageTitleLabel;
    TTHighlightedView *_forwardedItemBackgroundView;
    TTUGCAttributedLabel *_forwardedItemContentLabel;
    NSArray *_forwardedItemImageViews;
    SSThemedImageView *_forwardedItemLocationIconImageView;
    SSThemedLabel *_forwardedItemLocationLabel;
    SSThemedLabel *_forwardedItemStatusLabel;
}

@property(retain, nonatomic) SSThemedLabel *forwardedItemStatusLabel; // @synthesize forwardedItemStatusLabel=_forwardedItemStatusLabel;
@property(retain, nonatomic) SSThemedLabel *forwardedItemLocationLabel; // @synthesize forwardedItemLocationLabel=_forwardedItemLocationLabel;
@property(retain, nonatomic) SSThemedImageView *forwardedItemLocationIconImageView; // @synthesize forwardedItemLocationIconImageView=_forwardedItemLocationIconImageView;
@property(retain, nonatomic) NSArray *forwardedItemImageViews; // @synthesize forwardedItemImageViews=_forwardedItemImageViews;
@property(retain, nonatomic) TTUGCAttributedLabel *forwardedItemContentLabel; // @synthesize forwardedItemContentLabel=_forwardedItemContentLabel;
@property(retain, nonatomic) TTHighlightedView *forwardedItemBackgroundView; // @synthesize forwardedItemBackgroundView=_forwardedItemBackgroundView;
@property(retain, nonatomic) SSThemedLabel *webpageTitleLabel; // @synthesize webpageTitleLabel=_webpageTitleLabel;
@property(retain, nonatomic) SSThemedImageView *webpagePlayIconImageView; // @synthesize webpagePlayIconImageView=_webpagePlayIconImageView;
@property(retain, nonatomic) TTImageView *webpageThumbImageView; // @synthesize webpageThumbImageView=_webpageThumbImageView;
@property(retain, nonatomic) SSThemedButton *webpageBackgroundButton; // @synthesize webpageBackgroundButton=_webpageBackgroundButton;
@property(retain, nonatomic) NSArray *contentImageViews; // @synthesize contentImageViews=_contentImageViews;
- (void).cxx_destruct;
- (void)didDisappear;
- (void)willAppear;
- (void)layoutImageComponentWithThumbnailModels:(id)arg1 originalModels:(id)arg2 imageViewRects:(id)arg3 moreCount:(unsigned long long)arg4 inCells:(id)arg5;
- (void)onTapImageCellView:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)themeChanged:(id)arg1;
- (id)forwardedItemDisplayImageViewFrames;
- (id)forwardedItemDisplayImages;
- (id)displayImageViewFrames;
- (id)displayImages;
- (void)layoutForwardedItemStatusComponent;
- (void)layoutForwardedItemComponent;
- (void)layoutWebpageComponent;
- (void)layoutImageComponent;
- (void)layoutComponents;
- (void)setupBackgroundColors;
- (void)configureFollowRecommendEnableStatus:(_Bool)arg1;
- (void)refreshWithLayoutModel:(id)arg1;
- (id)generateImageView;
- (void)createComponents;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool followRecommendEnableStatus;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

