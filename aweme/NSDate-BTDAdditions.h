//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (BTDAdditions)
+ (id)btd_dateWithString:(id)arg1 format:(id)arg2 timeZone:(id)arg3 locale:(id)arg4;
+ (id)btd_dateWithString:(id)arg1 format:(id)arg2;
+ (long long)btd_uptime;
- (id)btd_stringWithFormat:(id)arg1 timeZone:(id)arg2 locale:(id)arg3;
- (id)btd_stringWithFormat:(id)arg1;
- (id)btd_dateByAddingSeconds:(long long)arg1;
- (id)btd_dateByAddingMinutes:(long long)arg1;
- (id)btd_dateByAddingHours:(long long)arg1;
- (id)btd_dateByAddingDays:(long long)arg1;
- (id)btd_dateByAddingWeeks:(long long)arg1;
- (id)btd_dateByAddingMonths:(long long)arg1;
- (id)btd_dateByAddingYears:(long long)arg1;
- (_Bool)btd_isSameDay:(id)arg1;
- (long long)btd_second;
- (long long)btd_minute;
- (long long)btd_hour;
- (long long)btd_day;
- (long long)btd_month;
- (long long)btd_year;
@end
