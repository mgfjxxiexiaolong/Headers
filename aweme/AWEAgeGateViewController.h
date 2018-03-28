//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AWENavView, NSDateFormatter, UIButton, UIDatePicker, UILabel, UITextField, UIView;

@interface AWEAgeGateViewController : UIViewController
{
    CDUnknownBlockType _completionBlock;
    AWENavView *_navView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UITextField *_birthdayTextField;
    UIView *_separateView;
    UIButton *_continueButton;
    UIDatePicker *_birthdayPicker;
    NSDateFormatter *_dateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) UIDatePicker *birthdayPicker; // @synthesize birthdayPicker=_birthdayPicker;
@property(retain, nonatomic) UIButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) UIView *separateView; // @synthesize separateView=_separateView;
@property(retain, nonatomic) UITextField *birthdayTextField; // @synthesize birthdayTextField=_birthdayTextField;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) AWENavView *navView; // @synthesize navView=_navView;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)pickedBirthdayDidChange:(id)arg1;
- (void)continueCheck:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)configureConstraints;
- (void)viewDidLoad;
- (id)initWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
