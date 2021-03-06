//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FARedItemButton, UIButton;
@protocol FANearFileNavigationBarDelegate;

@interface FANearFileNavigationBar : UIView
{
    UIView *_titleView;
    UIButton *_backBtn;
    FARedItemButton *_fileBtn;
    id <FANearFileNavigationBarDelegate> _delegate;
}

- (void)onFileBtnClick:(id)arg1;
- (void)onBackBtnClick:(id)arg1;
- (void)setFileRedPointHidden:(_Bool)arg1;
- (void)setFileBtnHidden:(_Bool)arg1;
- (void)setCustomTitleView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)initFileBtn;
- (void)initGoBackBtn;
- (void)loadSubView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

