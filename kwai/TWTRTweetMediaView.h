//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, TWTRPlayIcon, TWTRTweetImageView, TWTRTweetMediaEntity, TWTRVideoPlayerView, UIImage;

@interface TWTRTweetMediaView : UIView
{
    double _aspectRatio;
    unsigned long long _style;
    TWTRTweetMediaEntity *_mediaEntity;
    TWTRPlayIcon *_playIcon;
    TWTRTweetImageView *_imageView;
    TWTRVideoPlayerView *_videoPlayerView;
    NSLayoutConstraint *_aspectRatioConstraint;
}

@property(readonly, nonatomic) NSLayoutConstraint *aspectRatioConstraint; // @synthesize aspectRatioConstraint=_aspectRatioConstraint;
@property(readonly, nonatomic) TWTRVideoPlayerView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(readonly, nonatomic) TWTRTweetImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) TWTRPlayIcon *playIcon; // @synthesize playIcon=_playIcon;
@property(readonly, nonatomic) TWTRTweetMediaEntity *mediaEntity; // @synthesize mediaEntity=_mediaEntity;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (_Bool)isShowingMedia;
- (_Bool)isShowingVideoThumbnail;
- (void)updatePlayIcon;
- (void)configureWithMediaEntity:(id)arg1 style:(unsigned long long)arg2 widthHint:(double)arg3;
@property(readonly, nonatomic) UIImage *image;
- (void)setAspectRatioConstraintNeedsUpdate;
- (void)updateConstraints;
- (void)addAspectRatioConstraint;
- (void)preparePlayIcon;
- (void)prepareVideoPlayerView;
- (void)prepareImageView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
