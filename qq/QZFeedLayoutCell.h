//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZLayoutCell.h>

@class NSString, QZFeedPhotoView, UIImage, UIImageView, UIView;

@interface QZFeedLayoutCell : QZLayoutCell
{
    NSString *_dressImageUrl;
    UIImageView *_backgroundImageView;
    QZFeedPhotoView *_dressImageView;
    UIView *_gradientView;
    UIImage *_backgroundImage;
    long long _videoPlayScene;
}

+ (void)enumImageRectangles:(id)arg1 VisibleRectDic:(id)arg2 photoViews:(id)arg3;
@property(nonatomic) long long videoPlayScene; // @synthesize videoPlayScene=_videoPlayScene;
@property(retain, nonatomic) NSString *dressImageUrl; // @synthesize dressImageUrl=_dressImageUrl;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
- (void).cxx_destruct;
- (_Bool)setObtainShowPhotoTags:(_Bool)arg1;
- (id)firstVideo;
- (id)getVisibleVideoViews;
- (id)getVideoView;
- (void)setGifFrameDuration:(double)arg1 playDirection:(long long)arg2;
- (void)checkAutoPlayViewEvent:(long long)arg1 params:(id)arg2;
- (void)destroyShimmeringLabelAnimating;
- (void)startShimmeringLabelAnimating;
- (void)stopShimmeringLabelAnimating;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 isDetail:(_Bool)arg3;

@end

