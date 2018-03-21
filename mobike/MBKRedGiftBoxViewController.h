//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKBaseWebViewController.h"

@class MBKRedPacketPlaceholderView, UIButton, UIImageView, UIView;

@interface MBKRedGiftBoxViewController : MBKBaseWebViewController
{
    _Bool _userHasSharing;
    _Bool _userHasAlreadyOpenBox;
    UIView *_titleView;
    MBKRedPacketPlaceholderView *_placeholderView;
    UIView *_giftBoxContainerView;
    UIImageView *_giftBoxCoverView;
    UIImageView *_giftBoxBodyView;
    UIImageView *_giftBoxInnerView;
    UIImageView *_giftBoxConfettiView;
    UIImageView *_giftBoxBodyAvatarView;
    UIButton *_openBoxButton;
}

+ (id)showWithURLString:(id)arg1;
@property(nonatomic) _Bool userHasAlreadyOpenBox; // @synthesize userHasAlreadyOpenBox=_userHasAlreadyOpenBox;
@property(retain, nonatomic) UIButton *openBoxButton; // @synthesize openBoxButton=_openBoxButton;
@property(retain, nonatomic) UIImageView *giftBoxBodyAvatarView; // @synthesize giftBoxBodyAvatarView=_giftBoxBodyAvatarView;
@property(retain, nonatomic) UIImageView *giftBoxConfettiView; // @synthesize giftBoxConfettiView=_giftBoxConfettiView;
@property(retain, nonatomic) UIImageView *giftBoxInnerView; // @synthesize giftBoxInnerView=_giftBoxInnerView;
@property(retain, nonatomic) UIImageView *giftBoxBodyView; // @synthesize giftBoxBodyView=_giftBoxBodyView;
@property(retain, nonatomic) UIImageView *giftBoxCoverView; // @synthesize giftBoxCoverView=_giftBoxCoverView;
@property(retain, nonatomic) UIView *giftBoxContainerView; // @synthesize giftBoxContainerView=_giftBoxContainerView;
@property(retain, nonatomic) MBKRedPacketPlaceholderView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) _Bool userHasSharing; // @synthesize userHasSharing=_userHasSharing;
- (void).cxx_destruct;
- (void)webViewGrowUp;
- (void)showWebViewSmall;
- (void)openBox;
- (void)showTitleWithAnimation;
- (void)showGiftBox;
- (void)dismiss;
- (void)show;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
