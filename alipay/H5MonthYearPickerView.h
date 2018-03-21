//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPickerView.h>

@class NSArray, NSCalendar, NSDate;

@interface H5MonthYearPickerView : UIPickerView
{
    _Bool _onlyYear;
    NSDate *_date;
    NSCalendar *_calendar;
    long long _minimumYear;
    long long _maximumYear;
    long long _minimumMonth;
    long long _maximumMonth;
}

@property(nonatomic) long long maximumMonth; // @synthesize maximumMonth=_maximumMonth;
@property(nonatomic) long long minimumMonth; // @synthesize minimumMonth=_minimumMonth;
@property(nonatomic) long long maximumYear; // @synthesize maximumYear=_maximumYear;
@property(nonatomic) long long minimumYear; // @synthesize minimumYear=_minimumYear;
@property(nonatomic) _Bool onlyYear; // @synthesize onlyYear=_onlyYear;
@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSDate *maximumDate; // @dynamic maximumDate;
@property(retain, nonatomic) NSDate *minimumDate; // @dynamic minimumDate;
@property(readonly, nonatomic) NSArray *monthStrings;
- (id)initWithFrame:(struct CGRect)arg1;

@end
