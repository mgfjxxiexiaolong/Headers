//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface TBOrderEmptyView : UIView
{
    UIImageView *_emptyImgView;
    UILabel *_emptyTipsLabel;
    UILabel *_subEmptyTipsLabel;
}

@property(retain, nonatomic) UILabel *subEmptyTipsLabel; // @synthesize subEmptyTipsLabel=_subEmptyTipsLabel;
@property(retain, nonatomic) UILabel *emptyTipsLabel; // @synthesize emptyTipsLabel=_emptyTipsLabel;
@property(retain, nonatomic) UIImageView *emptyImgView; // @synthesize emptyImgView=_emptyImgView;
- (void).cxx_destruct;
- (void)changeTipText;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

