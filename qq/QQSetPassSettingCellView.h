//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QUICustomViewPositionCell.h>

@class UIButton, UIImageView;

@interface QQSetPassSettingCellView : QUICustomViewPositionCell
{
    UIButton *_tipsButton;
    UIImageView *_checkView;
}

@property(readonly, nonatomic) UIImageView *checkView; // @synthesize checkView=_checkView;
@property(readonly, nonatomic) UIButton *tipsButton; // @synthesize tipsButton=_tipsButton;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (void)addCheckView;
- (void)addTipsButton;

@end
