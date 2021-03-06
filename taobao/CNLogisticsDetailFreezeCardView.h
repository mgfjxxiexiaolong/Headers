//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CNLogisticsDetailCell.h"

@class CNLogisticsDetailFreezeCardModel, UIButton, UIImageView, UILabel;

@interface CNLogisticsDetailFreezeCardView : CNLogisticsDetailCell
{
    CNLogisticsDetailFreezeCardModel *cellModel;
    UIButton *_helpButton;
    UILabel *_titleLabel;
    UILabel *_highestTemperatureLabel;
    UILabel *_currentTemperatureLabel;
    UIImageView *_temperatureImageView;
    UIImageView *_iconImageView;
    UIImageView *_pointImageView;
}

@property(retain, nonatomic) UIImageView *pointImageView; // @synthesize pointImageView=_pointImageView;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak UIImageView *temperatureImageView; // @synthesize temperatureImageView=_temperatureImageView;
@property(nonatomic) __weak UILabel *currentTemperatureLabel; // @synthesize currentTemperatureLabel=_currentTemperatureLabel;
@property(nonatomic) __weak UILabel *highestTemperatureLabel; // @synthesize highestTemperatureLabel=_highestTemperatureLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIButton *helpButton; // @synthesize helpButton=_helpButton;
@property(retain, nonatomic) CNLogisticsDetailFreezeCardModel *cellModel; // @synthesize cellModel;
- (void).cxx_destruct;
- (void)contact:(id)arg1;
- (void)openUrl:(id)arg1;
- (void)setPointCenter:(int)arg1;
- (void)updateModel;
- (void)initModel;
- (void)awakeFromNib;

@end

