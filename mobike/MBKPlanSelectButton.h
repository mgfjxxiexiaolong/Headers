//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class MBKAbroadOBCardModel, NSMutableArray, NSString, UIImageView, UILabel;

@interface MBKPlanSelectButton : UIButton
{
    _Bool _hasCheckBox;
    NSString *_cardId;
    long long _price;
    unsigned long long _payType;
    NSString *_productType;
    MBKAbroadOBCardModel *_model;
    UILabel *_nameLabel;
    UILabel *_priceLabel;
    NSMutableArray *_detailLabelArray;
    UIImageView *_picImageView;
}

@property(retain, nonatomic) UIImageView *picImageView; // @synthesize picImageView=_picImageView;
@property(retain, nonatomic) NSMutableArray *detailLabelArray; // @synthesize detailLabelArray=_detailLabelArray;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) _Bool hasCheckBox; // @synthesize hasCheckBox=_hasCheckBox;
@property(retain, nonatomic) MBKAbroadOBCardModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(nonatomic) unsigned long long payType; // @synthesize payType=_payType;
@property(nonatomic) long long price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
- (void).cxx_destruct;
- (void)layoutViews;
- (void)layoutSubviews;
- (id)init;

@end

