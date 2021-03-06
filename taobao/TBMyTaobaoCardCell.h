//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBMyTaobaoCollectionViewCell.h"

@class TBMTBModule, TBMyTaobaoAdvertMask, TBMyTaobaoAdvertView, TBMyTaobaoRecommendMask, UIImageGIFView, UILabel, UIView, UIViewController, VLView, WJSBundleModel;
@protocol VLViewDelegate;

@interface TBMyTaobaoCardCell : TBMyTaobaoCollectionViewCell
{
    _Bool _fireMyTaobaoRefresh;
    _Bool _fireReload;
    _Bool _isLoadJSBundleError;
    UIView *_placeholderView;
    UIView *_defaultView;
    VLView *_vlView;
    TBMTBModule *_moduleData;
    UIViewController<VLViewDelegate> *_sourceViewController;
    TBMyTaobaoAdvertView *_advertView;
    UILabel *_errorLabel;
    UILabel *_retryLabel;
    UIView *_defaultBtnView;
    UILabel *_defaultBtnTitle;
    UILabel *_defaultMsgLabel;
    UILabel *_defaultDescLabel;
    UIImageGIFView *_defaultImageView;
    UIImageGIFView *_defaultAllImageView;
    TBMyTaobaoRecommendMask *_mask;
    TBMyTaobaoAdvertMask *_advertMask;
    WJSBundleModel *_jsCacheModel;
}

@property(retain, nonatomic) WJSBundleModel *jsCacheModel; // @synthesize jsCacheModel=_jsCacheModel;
@property(retain, nonatomic) TBMyTaobaoAdvertMask *advertMask; // @synthesize advertMask=_advertMask;
@property(retain, nonatomic) TBMyTaobaoRecommendMask *mask; // @synthesize mask=_mask;
@property(retain, nonatomic) UIImageGIFView *defaultAllImageView; // @synthesize defaultAllImageView=_defaultAllImageView;
@property(retain, nonatomic) UIImageGIFView *defaultImageView; // @synthesize defaultImageView=_defaultImageView;
@property(retain, nonatomic) UILabel *defaultDescLabel; // @synthesize defaultDescLabel=_defaultDescLabel;
@property(retain, nonatomic) UILabel *defaultMsgLabel; // @synthesize defaultMsgLabel=_defaultMsgLabel;
@property(retain, nonatomic) UILabel *defaultBtnTitle; // @synthesize defaultBtnTitle=_defaultBtnTitle;
@property(retain, nonatomic) UIView *defaultBtnView; // @synthesize defaultBtnView=_defaultBtnView;
@property(retain, nonatomic) UILabel *retryLabel; // @synthesize retryLabel=_retryLabel;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(nonatomic) _Bool isLoadJSBundleError; // @synthesize isLoadJSBundleError=_isLoadJSBundleError;
@property(retain, nonatomic) TBMyTaobaoAdvertView *advertView; // @synthesize advertView=_advertView;
@property(nonatomic) _Bool fireReload; // @synthesize fireReload=_fireReload;
@property(nonatomic) _Bool fireMyTaobaoRefresh; // @synthesize fireMyTaobaoRefresh=_fireMyTaobaoRefresh;
@property(nonatomic) __weak UIViewController<VLViewDelegate> *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(retain, nonatomic) TBMTBModule *moduleData; // @synthesize moduleData=_moduleData;
@property(retain, nonatomic) VLView *vlView; // @synthesize vlView=_vlView;
@property(retain, nonatomic) UIView *defaultView; // @synthesize defaultView=_defaultView;
@property(retain, nonatomic) UIView *placeholderView; // @synthesize placeholderView=_placeholderView;
- (void).cxx_destruct;
- (_Bool)checkForceDownGrade:(id)arg1;
- (void)layOutCardHeader:(id)arg1;
- (_Bool)p_isNativeUrl:(id)arg1;
- (_Bool)p_isWeexUrl:(id)arg1;
- (void)errorWithMsg:(id)arg1 CanRetry:(_Bool)arg2;
- (void)defaultBtnViewClicked;
- (void)headerClicked;
- (void)loadJSBundle;
- (void)showRecommendMask:(_Bool)arg1;
- (void)showDecoration:(id)arg1;
- (void)setData:(id)arg1;
- (void)initDefaultView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

