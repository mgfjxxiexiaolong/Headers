//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AppDelegate.h"

#import "KSUStatisticsDelegate-Protocol.h"

@class NSString;

@interface AppDelegate (KSUStatistics) <KSUStatisticsDelegate>
+ (_Bool)ksu_class_swizzleMethodAndStore:(SEL)arg1 replacementIMP:(CDUnknownFunctionPointerType)arg2 storeIMP:(CDUnknownFunctionPointerType *)arg3;
+ (void)load;
@property(nonatomic, getter=isStatisticsDisabled) _Bool statisticsDisabled;
- (id)ksu_timePackage;
- (id)ksu_experiments;
- (double)ksu_longitude;
- (double)ksu_latitude;
- (id)ksu_street;
- (id)ksu_county;
- (id)ksu_city;
- (id)ksu_province;
- (id)ksu_country;
- (id)ksu_unnormalized;
- (int)ksu_product;
- (id)ksu_channel;
- (id)ksu_language;
- (unsigned long long)ksu_userId;
- (id)ksu_deviceId;
- (id)ksu_urlRequestWithBatchReport:(id)arg1 priority:(long long)arg2;
- (double)ksu_reportTimeIntervalSecond;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

