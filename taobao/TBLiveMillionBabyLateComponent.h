//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageGIFView, UIImageView, UILabel;

@interface TBLiveMillionBabyLateComponent : UIView
{
    UIImageGIFView *_imageView;
    UILabel *_lateLabel;
    UILabel *_lateHintLabel;
    UIButton *_continueBtn;
    UIImageView *_shadowView;
}

@property(retain, nonatomic) UIImageView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIButton *continueBtn; // @synthesize continueBtn=_continueBtn;
@property(retain, nonatomic) UILabel *lateHintLabel; // @synthesize lateHintLabel=_lateHintLabel;
@property(retain, nonatomic) UILabel *lateLabel; // @synthesize lateLabel=_lateLabel;
@property(retain, nonatomic) UIImageGIFView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)continueToSee;
- (void)setUpSubViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

