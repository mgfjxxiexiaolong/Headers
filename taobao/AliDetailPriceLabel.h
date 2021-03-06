//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class AliDetailPriceViewModel, AliDetailPriceViewStyle, UIView;

@interface AliDetailPriceLabel : UILabel
{
    AliDetailPriceViewModel *_priceModel;
    AliDetailPriceViewStyle *_priceStyle;
    UIView *_disableLine;
}

+ (id)getPriceFrontOrTailSize:(int)arg1 specificSize:(double)arg2;
+ (_Bool)isValidLabel:(id)arg1;
@property(retain, nonatomic) UIView *disableLine; // @synthesize disableLine=_disableLine;
@property(retain, nonatomic) AliDetailPriceViewStyle *priceStyle; // @synthesize priceStyle=_priceStyle;
@property(retain, nonatomic) AliDetailPriceViewModel *priceModel; // @synthesize priceModel=_priceModel;
- (void).cxx_destruct;
- (void)setAttribute:(id)arg1 range:(struct _NSRange)arg2 color:(id)arg3 font:(id)arg4;
- (long long)getTailEnd:(id)arg1 startIndex:(unsigned long long)arg2;
- (struct _NSRange)findTailRange:(id)arg1 startIndex:(unsigned long long)arg2;
- (void)configAttribute:(id)arg1 nameLength:(long long)arg2 charLength:(long long)arg3 priceLength:(long long)arg4 priceStyle:(id)arg5;
- (void)setVoiceOverText:(id)arg1;
- (void)drawPriceItem:(id)arg1 style:(id)arg2;
- (void)updatePriceStyle;
- (void)setConstrainedSize:(struct CGSize)arg1 type:(int)arg2;
- (id)init;

@end

