//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "KSScrollBannerViewDelegate-Protocol.h"

@class CAAnimationlessLayer, KSAdBannerView, KSCustomSearchBar, KSSlideableTitleSegmentedView, NSString;
@protocol KSSearchHeaderDelegate;

@interface KSSearchHeader : UIView <KSScrollBannerViewDelegate>
{
    KSCustomSearchBar *_searchBar;
    KSSlideableTitleSegmentedView *_segmentedView;
    id <KSSearchHeaderDelegate> _delegate;
    CAAnimationlessLayer *_bottomLine;
    KSAdBannerView *_bannerView;
}

@property(retain, nonatomic) KSAdBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) CAAnimationlessLayer *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) __weak id <KSSearchHeaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) KSSlideableTitleSegmentedView *segmentedView; // @synthesize segmentedView=_segmentedView;
@property(retain, nonatomic) KSCustomSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)banner:(id)arg1 didSelectItem:(id)arg2;
- (void)updateBanner:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

