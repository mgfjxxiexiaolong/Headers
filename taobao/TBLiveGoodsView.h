//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBLiveAddCart, TBLiveShareMessage, UIButton, UIImageView, UILabel;

@interface TBLiveGoodsView : UIView
{
    _Bool _isAllowOpenMiniPlay;
    _Bool _isCollected;
    UIView *_skuParentView;
    UIImageView *_goodsImgView;
    UILabel *_goodsIndexLabel;
    UILabel *_goodsTitleLabel;
    UILabel *_goodsPriceLabel;
    UIButton *_add2CartBtn;
    UIButton *_goDetailBtn;
    TBLiveShareMessage *_msg;
    TBLiveAddCart *_addCart;
}

+ (void)gotoItemDetail:(id)arg1 itemId:(id)arg2 target:(id)arg3 bizScene:(id)arg4;
+ (id)replaceURLParam:(id)arg1;
+ (id)getUTControlNameFromBizScene:(id)arg1;
+ (void)checkTaokeUrl:(id)arg1;
@property(retain, nonatomic) TBLiveAddCart *addCart; // @synthesize addCart=_addCart;
@property(retain, nonatomic) TBLiveShareMessage *msg; // @synthesize msg=_msg;
@property(nonatomic) _Bool isCollected; // @synthesize isCollected=_isCollected;
@property(retain, nonatomic) UIButton *goDetailBtn; // @synthesize goDetailBtn=_goDetailBtn;
@property(retain, nonatomic) UIButton *add2CartBtn; // @synthesize add2CartBtn=_add2CartBtn;
@property(retain, nonatomic) UILabel *goodsPriceLabel; // @synthesize goodsPriceLabel=_goodsPriceLabel;
@property(retain, nonatomic) UILabel *goodsTitleLabel; // @synthesize goodsTitleLabel=_goodsTitleLabel;
@property(retain, nonatomic) UILabel *goodsIndexLabel; // @synthesize goodsIndexLabel=_goodsIndexLabel;
@property(retain, nonatomic) UIImageView *goodsImgView; // @synthesize goodsImgView=_goodsImgView;
@property(nonatomic) __weak UIView *skuParentView; // @synthesize skuParentView=_skuParentView;
@property(nonatomic) _Bool isAllowOpenMiniPlay; // @synthesize isAllowOpenMiniPlay=_isAllowOpenMiniPlay;
- (void).cxx_destruct;
- (id)getGoDetailBizScene;
- (void)goDetailBtnClicked;
- (void)add2CartBtnClicked;
- (void)bindGoodsData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

