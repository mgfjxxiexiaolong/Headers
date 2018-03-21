//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "O2OPopFutureFilterPopoverViewDelegate-Protocol.h"

@class NSArray, NSString, O2OPopFutureFilterPopoverView, UIImageView, UILabel;
@protocol O2OPopFutureAddressViewDelegate;

@interface O2OPopFutureAddressView : UIView <O2OPopFutureFilterPopoverViewDelegate>
{
    id <O2OPopFutureAddressViewDelegate> _delegate;
    UIImageView *_locationView;
    UIImageView *_arrowView;
    UILabel *_addressView;
    UILabel *_distanceView;
    UIImageView *_distanceArrowView;
    UIView *_addressBackgroundView;
    UIView *_distanceBackgroundView;
    UIView *_contentView;
    O2OPopFutureFilterPopoverView *_popoverView;
    NSString *_addressStr;
    NSArray *_radiusList;
    double _originHeight;
}

@property(nonatomic) double originHeight; // @synthesize originHeight=_originHeight;
@property(retain, nonatomic) NSArray *radiusList; // @synthesize radiusList=_radiusList;
@property(retain, nonatomic) NSString *addressStr; // @synthesize addressStr=_addressStr;
@property(retain, nonatomic) O2OPopFutureFilterPopoverView *popoverView; // @synthesize popoverView=_popoverView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *distanceBackgroundView; // @synthesize distanceBackgroundView=_distanceBackgroundView;
@property(retain, nonatomic) UIView *addressBackgroundView; // @synthesize addressBackgroundView=_addressBackgroundView;
@property(retain, nonatomic) UIImageView *distanceArrowView; // @synthesize distanceArrowView=_distanceArrowView;
@property(retain, nonatomic) UILabel *distanceView; // @synthesize distanceView=_distanceView;
@property(retain, nonatomic) UILabel *addressView; // @synthesize addressView=_addressView;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIImageView *locationView; // @synthesize locationView=_locationView;
@property(nonatomic) __weak id <O2OPopFutureAddressViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didSelectedItem:(id)arg1 selectedIndex:(unsigned long long)arg2 currentIndex:(unsigned long long)arg3;
- (void)cancel;
- (id)addressName;
- (id)distanceName:(id)arg1;
- (void)layoutView;
- (void)updateView;
- (void)updateAddress:(id)arg1 radiusList:(id)arg2;
- (void)showPopoverView:(_Bool)arg1;
- (void)distanceViewTap;
- (void)updateAddressViewState;
- (void)addressViewTap;
- (id)initWithFrame:(struct CGRect)arg1 address:(id)arg2 radiusList:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
