//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSNumber, SSThemedButton, UIButton, UIImageView, UILabel;

@interface TTChatroomMoviePlayerControlTopView : UIView
{
    _Bool _isSmallFontSizeForTitle;
    _Bool _isFull;
    _Bool _showFullscreenStatusBar;
    UIButton *_backButton;
    UILabel *_titleLabel;
    UILabel *_playTimesLabel;
    long long _shouldShowShareMore;
    SSThemedButton *_moreButton;
    SSThemedButton *_shareButton;
    UIImageView *_backImageView;
    NSNumber *_barStyleNumber;
    NSNumber *_statusbarHiddenNumber;
}

+ (float)settedTitleFontSize;
+ (float)settedTitleSmallFontSize;
+ (float)settedTitleUltraSmallFontSize;
@property(retain, nonatomic) NSNumber *statusbarHiddenNumber; // @synthesize statusbarHiddenNumber=_statusbarHiddenNumber;
@property(retain, nonatomic) NSNumber *barStyleNumber; // @synthesize barStyleNumber=_barStyleNumber;
@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(retain, nonatomic) SSThemedButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) SSThemedButton *moreButton; // @synthesize moreButton=_moreButton;
@property(nonatomic) long long shouldShowShareMore; // @synthesize shouldShowShareMore=_shouldShowShareMore;
@property(nonatomic) _Bool showFullscreenStatusBar; // @synthesize showFullscreenStatusBar=_showFullscreenStatusBar;
@property(nonatomic) _Bool isFull; // @synthesize isFull=_isFull;
@property(nonatomic) _Bool isSmallFontSizeForTitle; // @synthesize isSmallFontSizeForTitle=_isSmallFontSizeForTitle;
@property(retain, nonatomic) UILabel *playTimesLabel; // @synthesize playTimesLabel=_playTimesLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
- (void).cxx_destruct;
- (void)updateShareMore;
- (void)addShareMore;
- (void)fontSizeChanged;
- (void)setTitle:(id)arg1 fontSizeStyle:(long long)arg2;
- (void)setWatchCount:(id)arg1;
- (void)updateFrame;
- (void)layoutSubviews;
- (void)updateBackBtnHitTest;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

