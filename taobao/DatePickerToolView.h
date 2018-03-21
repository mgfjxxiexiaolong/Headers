//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDate, UIDatePicker, UISwitch;
@protocol DatePickerToolViewDelegate;

@interface DatePickerToolView : UIView
{
    _Bool _isAllDay;
    id <DatePickerToolViewDelegate> _delegate;
    NSDate *_date;
    UIDatePicker *_datePicker;
    UISwitch *_switchAllDay;
}

@property(retain, nonatomic) UISwitch *switchAllDay; // @synthesize switchAllDay=_switchAllDay;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property id <DatePickerToolViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isAllDay; // @synthesize isAllDay=_isAllDay;
- (void).cxx_destruct;
- (void)switchToAllDay:(id)arg1;
- (void)chooseDatePickerComplete:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
