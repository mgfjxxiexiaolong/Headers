//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface AWSSHPBaseCell : UITableViewCell
{
    _Bool _isLastCell;
    _Bool _hiddeLine;
    double _paddingLeft;
    UILabel *_btmLineLabel;
}

+ (id)createCellWithTableView:(id)arg1 cellId:(id)arg2;
+ (double)cellHeight;
@property(retain, nonatomic) UILabel *btmLineLabel; // @synthesize btmLineLabel=_btmLineLabel;
@property(nonatomic) _Bool hiddeLine; // @synthesize hiddeLine=_hiddeLine;
@property(nonatomic) _Bool isLastCell; // @synthesize isLastCell=_isLastCell;
@property(nonatomic) double paddingLeft; // @synthesize paddingLeft=_paddingLeft;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setData:(id)arg1;
- (void)setupViews;
- (void)setLine;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
