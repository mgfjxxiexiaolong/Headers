//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, TTCategory, TTCategorySelectorView, UIButton;

@protocol TTCategorySelectorViewDelegate <NSObject>
- (void)categorySelectorView:(TTCategorySelectorView *)arg1 selectCategory:(TTCategory *)arg2 animated:(_Bool)arg3;

@optional
- (double)categorySelectorTextGlowSize;
- (NSArray *)categorySelectorTextGlowColors;
- (NSArray *)categorySelectorTextColors;
- (void)categorySelectorView:(TTCategorySelectorView *)arg1 closeCategoryView:(_Bool)arg2;
- (void)categorySelectorView:(TTCategorySelectorView *)arg1 didClickSearchButton:(UIButton *)arg2;
- (void)categorySelectorView:(TTCategorySelectorView *)arg1 didClickExpandButton:(UIButton *)arg2;
@end

