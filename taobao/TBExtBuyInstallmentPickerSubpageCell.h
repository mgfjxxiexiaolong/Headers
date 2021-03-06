//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class StyleKitContext, TBTradeInstallmentOption, UIButton, UILabel, UIView;
@protocol TBExtBuyImageProtocol;

@interface TBExtBuyInstallmentPickerSubpageCell : UITableViewCell
{
    _Bool _isLastRow;
    _Bool _enable;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_tipLabel;
    UIButton *_selectionButton;
    UIView *_line;
    TBTradeInstallmentOption *_option;
    StyleKitContext *_styleKitContext;
    id <TBExtBuyImageProtocol> _imageLoader;
}

@property(retain, nonatomic) id <TBExtBuyImageProtocol> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) StyleKitContext *styleKitContext; // @synthesize styleKitContext=_styleKitContext;
@property(nonatomic) __weak TBTradeInstallmentOption *option; // @synthesize option=_option;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(nonatomic) _Bool isLastRow; // @synthesize isLastRow=_isLastRow;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIButton *selectionButton; // @synthesize selectionButton=_selectionButton;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)bindData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

