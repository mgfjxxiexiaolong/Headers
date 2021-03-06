//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SGMSafeGuardSettingModel : NSObject
{
    _Bool _enable;
    long long _statusCode;
    double _defaultTimerInterval;
    double _gyroUpdateInterval;
    double _accelerUpdateInterval;
    double _manualGyroInterval;
    double _manualAccInterval;
    double _sampleInterval;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) double sampleInterval; // @synthesize sampleInterval=_sampleInterval;
@property(nonatomic) double manualAccInterval; // @synthesize manualAccInterval=_manualAccInterval;
@property(nonatomic) double manualGyroInterval; // @synthesize manualGyroInterval=_manualGyroInterval;
@property(nonatomic) double accelerUpdateInterval; // @synthesize accelerUpdateInterval=_accelerUpdateInterval;
@property(nonatomic) double gyroUpdateInterval; // @synthesize gyroUpdateInterval=_gyroUpdateInterval;
@property(nonatomic) double defaultTimerInterval; // @synthesize defaultTimerInterval=_defaultTimerInterval;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;

@end

