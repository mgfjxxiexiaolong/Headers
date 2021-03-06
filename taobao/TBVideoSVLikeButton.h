//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, TBVideoTweSVVC, UIImageView, UILabel;

@interface TBVideoSVLikeButton : UIButton
{
    _Bool _hasLiked;
    UIImageView *_likeImageView;
    UILabel *_likeCountLabel;
    NSString *_favorId;
    long long _likeCount;
    TBVideoTweSVVC *_superVC;
}

@property(nonatomic) __weak TBVideoTweSVVC *superVC; // @synthesize superVC=_superVC;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) _Bool hasLiked; // @synthesize hasLiked=_hasLiked;
@property(retain, nonatomic) NSString *favorId; // @synthesize favorId=_favorId;
@property(retain, nonatomic) UILabel *likeCountLabel; // @synthesize likeCountLabel=_likeCountLabel;
@property(retain, nonatomic) UIImageView *likeImageView; // @synthesize likeImageView=_likeImageView;
- (void).cxx_destruct;
- (void)postEvent:(unsigned long long)arg1 params:(id)arg2;
- (void)switchLikeStatus;
- (void)clickButton;
- (void)updateLikeStatus;
- (void)requestLikeCount;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1 favorId:(id)arg2 superVC:(id)arg3;

@end

