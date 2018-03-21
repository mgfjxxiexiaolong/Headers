//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UILabel;

@interface TBOrderStepInfoView : UIView
{
    UILabel *_name;
    UILabel *_status;
    UILabel *_statusMemo;
    NSMutableArray *_extras;
    NSMutableArray *_orderPriceDetails;
    NSMutableArray *_payDetails;
    UIView *_tipView;
    id _data;
    UIView *_payDetailBackgroundView;
    UIView *_payDetailSepLineView;
    UIView *_payDetailSepLineUpwardArrowView;
}

+ (double)viewHeight:(id)arg1 width:(double)arg2 context:(id)arg3;
@property(retain, nonatomic) UIView *payDetailSepLineUpwardArrowView; // @synthesize payDetailSepLineUpwardArrowView=_payDetailSepLineUpwardArrowView;
@property(retain, nonatomic) UIView *payDetailSepLineView; // @synthesize payDetailSepLineView=_payDetailSepLineView;
@property(retain, nonatomic) UIView *payDetailBackgroundView; // @synthesize payDetailBackgroundView=_payDetailBackgroundView;
@property(nonatomic) __weak id data; // @synthesize data=_data;
@property(retain, nonatomic) UIView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) NSMutableArray *payDetails; // @synthesize payDetails=_payDetails;
@property(retain, nonatomic) NSMutableArray *orderPriceDetails; // @synthesize orderPriceDetails=_orderPriceDetails;
@property(retain, nonatomic) NSMutableArray *extras; // @synthesize extras=_extras;
@property(retain, nonatomic) UILabel *statusMemo; // @synthesize statusMemo=_statusMemo;
@property(retain, nonatomic) UILabel *status; // @synthesize status=_status;
@property(retain, nonatomic) UILabel *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 width:(double)arg2;

@end
