//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UILabel;

@interface TXDPayCodeMerchantView : UIView
{
    UILabel *_titleLabel;
    NSArray *_iconList;
    NSMutableArray *_iconViews;
}

@property(retain, nonatomic) NSMutableArray *iconViews; // @synthesize iconViews=_iconViews;
@property(retain, nonatomic) NSArray *iconList; // @synthesize iconList=_iconList;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

