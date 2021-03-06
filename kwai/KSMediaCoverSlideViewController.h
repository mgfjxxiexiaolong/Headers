//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "KSMediaCoverPickSlider-Protocol.h"
#import "KSMediaCoverSliderDataSource-Protocol.h"
#import "KSMediaCoverSliderDelegate-Protocol.h"

@class GPUImageOutput, KSMediaCoverSlider, NSString, UIImage, _KSMediaCoverSlideFetchThrottler;

@interface KSMediaCoverSlideViewController : UIViewController <KSMediaCoverSliderDelegate, KSMediaCoverSliderDataSource, KSMediaCoverPickSlider>
{
    _Bool _needsReloadData;
    CDUnknownBlockType _slidingImageUpdated;
    KSMediaCoverSlider *_slider;
    _KSMediaCoverSlideFetchThrottler *_fetchQueue;
    struct CGSize _sliderSize;
}

@property(nonatomic) _Bool needsReloadData; // @synthesize needsReloadData=_needsReloadData;
@property(nonatomic) struct CGSize sliderSize; // @synthesize sliderSize=_sliderSize;
@property(retain, nonatomic) _KSMediaCoverSlideFetchThrottler *fetchQueue; // @synthesize fetchQueue=_fetchQueue;
@property(retain, nonatomic) KSMediaCoverSlider *slider; // @synthesize slider=_slider;
@property(copy, nonatomic) CDUnknownBlockType slidingImageUpdated; // @synthesize slidingImageUpdated=_slidingImageUpdated;
- (void).cxx_destruct;
- (_Bool)edited;
- (void)setCurrentSlideOffset:(double)arg1 animated:(_Bool)arg2;
- (double)currentOffset;
@property(readonly, nonatomic) UIImage *currentFrameImage;
- (void)reloadData;
- (void)setNeedsReloadData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSyncImageFetcher:(CDUnknownBlockType)arg1 asyncImageFetcher:(CDUnknownBlockType)arg2 sliderSize:(struct CGSize)arg3;
- (void)mediaCoverSlider:(id)arg1 didSlideToOffset:(double)arg2;
- (void)mediaCoverSlider:(id)arg1 isSlidingToOffset:(double)arg2;
- (void)mediaCoverSlider:(id)arg1 thumbnailImageWithOffset:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)mediaCoverSlider:(id)arg1 thumbnailImageAtOffset:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain) GPUImageOutput *gpuImageFilter;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

