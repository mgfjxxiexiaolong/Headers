//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PaymentBaseCell.h"

@class UILabel;

@interface PaymentCell : PaymentBaseCell
{
    UILabel *typeLabel;
    UILabel *balanceLabel;
    UILabel *dateLabel;
    UILabel *moneyLabel;
}

@property(retain, nonatomic) UILabel *moneyLabel; // @synthesize moneyLabel;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel;
@property(retain, nonatomic) UILabel *balanceLabel; // @synthesize balanceLabel;
@property(retain, nonatomic) UILabel *typeLabel; // @synthesize typeLabel;
- (void).cxx_destruct;
- (void)onLayout;
- (void)configData;
- (id)stringFromDate:(id)arg1;
- (id)dateFromString:(id)arg1;
- (void)releaseUI;
- (void)initUI;

@end

