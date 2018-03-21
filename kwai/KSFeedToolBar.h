//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class KS_feed, UIImageView;
@protocol KSFeedToolBarDelegate;

@interface KSFeedToolBar : UIView
{
    _Bool _isAuthor;
    id <KSFeedToolBarDelegate> _delegate;
    KS_feed *_feed;
    UIImageView *_likeAnimationImageView;
}

@property(retain, nonatomic) UIImageView *likeAnimationImageView; // @synthesize likeAnimationImageView=_likeAnimationImageView;
@property(retain, nonatomic) KS_feed *feed; // @synthesize feed=_feed;
@property(nonatomic) _Bool isAuthor; // @synthesize isAuthor=_isAuthor;
@property(nonatomic) __weak id <KSFeedToolBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)playLikeAnimationInView:(id)arg1 withBeforeAnimation:(CDUnknownBlockType)arg2 afterAnimation:(CDUnknownBlockType)arg3;
- (void)playLikeAnimationInView:(id)arg1;
- (id)likeAnimationImageNameFormat;
- (long long)likeAnimationImageCount;
- (id)shareText;
- (id)commentText;
- (id)likeText;
- (void)commentsInfoChanged;
- (void)followStateChanged:(_Bool)arg1 isRequesting:(_Bool)arg2 showAnimation:(_Bool)arg3;
- (void)likeStateChanged:(_Bool)arg1 showAnimation:(_Bool)arg2;
- (void)_setupSubviews;
- (id)initWithFeed:(id)arg1 isAuthor:(_Bool)arg2;

@end
