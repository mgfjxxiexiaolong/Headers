//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponent.h"

@class AliDetailCouponInfoComponentModel, NSMutableArray, UIButton, UILabel;

@interface AliDetailCouponInfoComponent : AliDetailComponent
{
    NSMutableArray *_iconImageViewArray;
    NSMutableArray *_titleLabelArray;
    UIButton *_tipButton;
    UILabel *_tipLabel;
    AliDetailCouponInfoComponentModel *_couponInfoModel;
}

+ (double)componentHeightForObj:(id)arg1 preferredWidth:(double)arg2;
@property(retain, nonatomic) AliDetailCouponInfoComponentModel *couponInfoModel; // @synthesize couponInfoModel=_couponInfoModel;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIButton *tipButton; // @synthesize tipButton=_tipButton;
@property(retain, nonatomic) NSMutableArray *titleLabelArray; // @synthesize titleLabelArray=_titleLabelArray;
@property(retain, nonatomic) NSMutableArray *iconImageViewArray; // @synthesize iconImageViewArray=_iconImageViewArray;
- (void).cxx_destruct;
- (void)setObject:(id)arg1;
- (void)clear;
- (void)adjustTipViewLayout;
- (void)updateTipViewContent;
- (id)tipView;
- (id)makeTitleLabel;
- (id)makeIconImageView;
- (void)layoutSubviews;
- (void)setUp;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
