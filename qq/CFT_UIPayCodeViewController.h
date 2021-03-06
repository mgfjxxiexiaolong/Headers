//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/CFT_UIBaseTabViewController.h>

#import <QQMainProject/QQTransferAccountFinishDelegate-Protocol.h>
#import <QQMainProject/TPADViewDelegate-Protocol.h>
#import <QQMainProject/TPAlertDialogDelegate-Protocol.h>
#import <QQMainProject/TPPickerSheetDelegate-Protocol.h>
#import <QQMainProject/UIActionSheetDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>
#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>

@class CFT_TPADView, CFT_TPPersonalityResManager, CFT_TPPickerSheet, CFT_UIQQTransferAccountViewController, NSDictionary, NSString, NSTimer, UIImage, UIImageView, UILabel, UIView;

@interface CFT_UIPayCodeViewController : CFT_UIBaseTabViewController <TPPickerSheetDelegate, QQTransferAccountFinishDelegate, UIAlertViewDelegate, UIActionSheetDelegate, UIGestureRecognizerDelegate, TPAlertDialogDelegate, TPADViewDelegate>
{
    UIImageView *_scaleView;
    UIImageView *_qbarImageView;
    UIImageView *_qrImageView;
    UILabel *_updateTipLabel;
    UIView *_updateTipView;
    UIView *_updatingTipView;
    CFT_TPPickerSheet *_payTypePicker;
    UIView *_payTypeView;
    _Bool _isViewScaling;
    struct CGRect _origScaleFrame;
    double _origBrightness;
    _Bool _isTokenRequesting;
    _Bool _isAsyncRequestToken;
    _Bool _isQwalletRequesting;
    _Bool _isRequestTokenAfterQwallet;
    unsigned long long _defalutPayTypeIndex;
    CFT_UIQQTransferAccountViewController *_qqTransferVC;
    double _balance;
    _Bool _isshowAdView;
    CFT_TPPersonalityResManager *_personalityManager;
    _Bool _isShowPersonStyle;
    UIImage *_secondImg;
    double secondImgW;
    double secondImgH;
    _Bool _isSupportRightDrag;
    NSString *_qqSkey;
    NSString *_qqSkeyType;
    NSString *_uin;
    NSString *_comeFrom;
    NSString *_appInfo;
    UIImage *_navBarBgImage;
    CFT_TPADView *_adView;
    NSDictionary *_adconfig;
    NSTimer *_updateCodeTimer;
}

@property(retain, nonatomic) NSTimer *updateCodeTimer; // @synthesize updateCodeTimer=_updateCodeTimer;
@property(copy, nonatomic) NSDictionary *adconfig; // @synthesize adconfig=_adconfig;
@property(nonatomic) CFT_TPADView *adView; // @synthesize adView=_adView;
@property(copy, nonatomic) UIImage *navBarBgImage; // @synthesize navBarBgImage=_navBarBgImage;
@property(retain, nonatomic) NSString *appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) NSString *comeFrom; // @synthesize comeFrom=_comeFrom;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSString *qqSkeyType; // @synthesize qqSkeyType=_qqSkeyType;
@property(retain, nonatomic) NSString *qqSkey; // @synthesize qqSkey=_qqSkey;
@property(nonatomic) _Bool isSupportRightDrag; // @synthesize isSupportRightDrag=_isSupportRightDrag;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

