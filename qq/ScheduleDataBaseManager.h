//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ScheduleAlarmTable, ScheduleCalenderDbTable, ScheduleDbStateInfoTable, ScheduleRemindTempCase;

@interface ScheduleDataBaseManager : NSObject
{
    ScheduleDbStateInfoTable *_scheduleStateInfoTable;
    ScheduleRemindTempCase *_scheduleRemindTempCaseTable;
    ScheduleCalenderDbTable *_scheduleCalenderDbTable;
    ScheduleAlarmTable *_scheduleAlarmTable;
}

+ (id)getInstance;
- (_Bool)getAlarmByScheduleID:(id)arg1;
- (void)updateItem:(id)arg1 alarm:(_Bool)arg2;
- (id)getCalenderIdByScheduleId:(id)arg1;
- (_Bool)deleteScheduleCalender:(id)arg1;
- (void)insertScheduleCalender:(id)arg1 CalenderId:(id)arg2;
- (_Bool)isExistScheduleCalenderData;
- (_Bool)EliminateRepetitiveRemind:(id)arg1 time:(unsigned long long)arg2;
- (void)UpdateSheduleRecord:(id)arg1;
- (void)DeleteSheduleRecord:(id)arg1;
- (id)GetSheduleRecord:(id)arg1;
- (void)dealloc;
- (id)init;

@end
