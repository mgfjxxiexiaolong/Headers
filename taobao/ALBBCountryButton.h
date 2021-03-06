//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "ALBBCountryListViewControllerDelegate-Protocol.h"

@class ALBBCountryCode, NSString, UIImageView, UILabel, UINavigationController;
@protocol ALBBCountryBtnDelegate;

@interface ALBBCountryButton : UIButton <ALBBCountryListViewControllerDelegate>
{
    int _type;
    ALBBCountryCode *_selectedCountry;
    UILabel *_countryLabel;
    UIImageView *_accessoryView;
    UINavigationController *_sourceController;
    id <ALBBCountryBtnDelegate> _delegate;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) __weak id <ALBBCountryBtnDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UINavigationController *sourceController; // @synthesize sourceController=_sourceController;
@property(retain, nonatomic) UIImageView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) UILabel *countryLabel; // @synthesize countryLabel=_countryLabel;
@property(retain, nonatomic) ALBBCountryCode *selectedCountry; // @synthesize selectedCountry=_selectedCountry;
- (void).cxx_destruct;
- (void)updateCountries:(id)arg1;
- (void)countryListViewController:(id)arg1 selectedCountry:(id)arg2;
- (void)registGetCountryCode:(CDUnknownBlockType)arg1;
- (void)loginGetCountryCode:(CDUnknownBlockType)arg1;
- (void)goToSelectCountry;
- (void)onCountryClick;
- (id)initWithType:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

