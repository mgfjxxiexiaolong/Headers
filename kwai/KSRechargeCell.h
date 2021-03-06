//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIButton, UIImageView, UILabel, UIView;

@interface KSRechargeCell : UITableViewCell
{
    CDUnknownBlockType _didTapTailBtn;
    UIImageView *_iconImageView;
    UIButton *_tailBtn;
    UIImageView *_arrowIcon;
    UILabel *_detailLabel;
    UIView *_line;
    NSLayoutConstraint *_lineHeight;
    NSLayoutConstraint *_lineLeading;
    UILabel *_hintLabel;
}

@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(nonatomic) __weak NSLayoutConstraint *lineLeading; // @synthesize lineLeading=_lineLeading;
@property(nonatomic) __weak NSLayoutConstraint *lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) __weak UIView *line; // @synthesize line=_line;
@property(nonatomic) __weak UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(nonatomic) __weak UIImageView *arrowIcon; // @synthesize arrowIcon=_arrowIcon;
@property(nonatomic) __weak UIButton *tailBtn; // @synthesize tailBtn=_tailBtn;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) CDUnknownBlockType didTapTailBtn; // @synthesize didTapTailBtn=_didTapTailBtn;
- (void).cxx_destruct;
- (void)didTapBtn:(id)arg1;
- (void)drawWithIAPKCoinPurchaseItem:(id)arg1;
- (void)drawWithPurchaseItem:(id)arg1 showBtn:(_Bool)arg2;
- (void)awakeFromNib;

@end

