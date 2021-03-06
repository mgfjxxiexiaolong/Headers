//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class NSMutableArray, SSThemedButton, SSThemedImageView, SSThemedLabel, SSThemedTableView, TTAlphaThemedButton, TTAvatarDecoratorView, TTCommonwealHasLoginEntranceView, TTCommonwealUnLoginEntranceView, TTNameContainerView, TTProfileHeaderAppFansView, TTProfileHeaderVisitorView, TTVerifyIconImageView, UIView;

@interface TTProfileHeaderView : SSThemedView
{
    _Bool _wealEntranceEnable;
    _Bool _canAnimate;
    _Bool _notAutoExpandFansView;
    _Bool _isFirstBackgroundImageNotEqualToView;
    SSThemedTableView *_tableView;
    SSThemedView *_loginView;
    SSThemedView *_userInfoView;
    SSThemedImageView *_backgoundImageView;
    TTAvatarDecoratorView *_decorationView;
    TTProfileHeaderAppFansView *_appFansView;
    id _delegate;
    double _imageHeight;
    double _imageWidth;
    double _imageRatio;
    NSMutableArray *_fansInfoArray;
    UIView *_maskView;
    UIView *_avatarView;
    SSThemedImageView *_avatarImageView;
    TTVerifyIconImageView *_avatarVerifyView;
    TTNameContainerView *_nameContainerView;
    TTProfileHeaderVisitorView *_visitorContainerView;
    SSThemedView *_loginBtnPanel;
    TTAlphaThemedButton *_qqButton;
    TTAlphaThemedButton *_phoneButton;
    TTAlphaThemedButton *_huoshanLoginButton;
    TTAlphaThemedButton *_douyinLoginButton;
    TTAlphaThemedButton *_sinaButton;
    TTAlphaThemedButton *_weixinButton;
    TTAlphaThemedButton *_moreLoginButton;
    TTAlphaThemedButton *_moreProfileButton;
    TTCommonwealUnLoginEntranceView *_commonwealUnloginEntranceView;
    TTCommonwealHasLoginEntranceView *_commonHasLoginEntranceView;
    SSThemedButton *_arrowBtn;
    SSThemedLabel *_loginRecommendLabel;
    double _currentViewHeight;
    double _fansViewHeight;
    double _additionalSafeInsetTop;
}

+ (_Bool)isConfSupportedOfPlatform:(id)arg1;
@property(nonatomic) _Bool isFirstBackgroundImageNotEqualToView; // @synthesize isFirstBackgroundImageNotEqualToView=_isFirstBackgroundImageNotEqualToView;
@property(nonatomic) double additionalSafeInsetTop; // @synthesize additionalSafeInsetTop=_additionalSafeInsetTop;
@property(nonatomic) _Bool notAutoExpandFansView; // @synthesize notAutoExpandFansView=_notAutoExpandFansView;
@property(nonatomic) _Bool canAnimate; // @synthesize canAnimate=_canAnimate;
@property(nonatomic) double fansViewHeight; // @synthesize fansViewHeight=_fansViewHeight;
@property(nonatomic) _Bool wealEntranceEnable; // @synthesize wealEntranceEnable=_wealEntranceEnable;
@property(nonatomic) double currentViewHeight; // @synthesize currentViewHeight=_currentViewHeight;
@property(retain, nonatomic) SSThemedLabel *loginRecommendLabel; // @synthesize loginRecommendLabel=_loginRecommendLabel;
@property(retain, nonatomic) SSThemedButton *arrowBtn; // @synthesize arrowBtn=_arrowBtn;
@property(retain, nonatomic) TTCommonwealHasLoginEntranceView *commonHasLoginEntranceView; // @synthesize commonHasLoginEntranceView=_commonHasLoginEntranceView;
@property(retain, nonatomic) TTCommonwealUnLoginEntranceView *commonwealUnloginEntranceView; // @synthesize commonwealUnloginEntranceView=_commonwealUnloginEntranceView;
@property(retain, nonatomic) TTAlphaThemedButton *moreProfileButton; // @synthesize moreProfileButton=_moreProfileButton;
@property(retain, nonatomic) TTAlphaThemedButton *moreLoginButton; // @synthesize moreLoginButton=_moreLoginButton;
@property(retain, nonatomic) TTAlphaThemedButton *weixinButton; // @synthesize weixinButton=_weixinButton;
@property(retain, nonatomic) TTAlphaThemedButton *sinaButton; // @synthesize sinaButton=_sinaButton;
@property(retain, nonatomic) TTAlphaThemedButton *douyinLoginButton; // @synthesize douyinLoginButton=_douyinLoginButton;
@property(retain, nonatomic) TTAlphaThemedButton *huoshanLoginButton; // @synthesize huoshanLoginButton=_huoshanLoginButton;
@property(retain, nonatomic) TTAlphaThemedButton *phoneButton; // @synthesize phoneButton=_phoneButton;
@property(retain, nonatomic) TTAlphaThemedButton *qqButton; // @synthesize qqButton=_qqButton;
@property(retain, nonatomic) SSThemedView *loginBtnPanel; // @synthesize loginBtnPanel=_loginBtnPanel;
@property(retain, nonatomic) TTProfileHeaderVisitorView *visitorContainerView; // @synthesize visitorContainerView=_visitorContainerView;
@property(retain, nonatomic) TTNameContainerView *nameContainerView; // @synthesize nameContainerView=_nameContainerView;
@property(retain, nonatomic) TTVerifyIconImageView *avatarVerifyView; // @synthesize avatarVerifyView=_avatarVerifyView;
@property(retain, nonatomic) SSThemedImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) NSMutableArray *fansInfoArray; // @synthesize fansInfoArray=_fansInfoArray;
@property(nonatomic) double imageRatio; // @synthesize imageRatio=_imageRatio;
@property(nonatomic) double imageWidth; // @synthesize imageWidth=_imageWidth;
@property(nonatomic) double imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TTProfileHeaderAppFansView *appFansView; // @synthesize appFansView=_appFansView;
@property(retain, nonatomic) TTAvatarDecoratorView *decorationView; // @synthesize decorationView=_decorationView;
@property(retain, nonatomic) SSThemedImageView *backgoundImageView; // @synthesize backgoundImageView=_backgoundImageView;
@property(nonatomic) __weak SSThemedView *userInfoView; // @synthesize userInfoView=_userInfoView;
@property(nonatomic) __weak SSThemedView *loginView; // @synthesize loginView=_loginView;
@property(nonatomic) __weak SSThemedTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)commonwealSkip;
- (void)didTapAvatarView;
- (void)themeChanged:(id)arg1;
- (void)moreButtonClicked:(id)arg1;
- (void)sinaButtonClicked:(id)arg1;
- (void)qqButtonClicked:(id)arg1;
- (void)weixinButtonClicked:(id)arg1;
- (void)douyinButtonClicked:(id)arg1;
- (void)huoshanButtonClicked:(id)arg1;
- (void)phoneButtonClicked:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (double)heightOffsetWithCurrentDevice;
- (void)layoutForAdjustingContentoffset;
- (void)layoutMoreLoginButton;
- (void)layoutLoginButtons;
- (void)layoutCommonwealHasLoginEntranceView;
- (void)layoutCommonwealUnloginEntranceView;
- (void)layoutUserInfoViews;
- (void)layoutBackgroudImageView;
- (void)layoutLoginRecommendLabel;
- (void)layoutArrowBtn;
- (void)layoutProfileHeaderView;
- (void)layoutSubviews;
- (void)refreshUserHistoryInfo;
- (void)refreshCommonwealInfoWithTitle:(id)arg1 subTitle:(id)arg2 isEnableGetMoney:(_Bool)arg3;
- (void)refreshUserinfo;
- (void)setupCommonwealShowIfNeeded;
- (void)setupMoreProfileButton;
- (void)setupMoreLoginButton;
- (void)setupPlatformButtons;
- (void)initLoginPanel;
- (void)initBackgroundImageView;
- (void)awakeFromNib;
- (void)willMoveToSuperview:(id)arg1;
- (void)dealloc;

@end

