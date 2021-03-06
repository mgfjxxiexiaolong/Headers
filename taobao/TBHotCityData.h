//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface TBHotCityData : NSObject <NSCoding>
{
    int _cityType;
    NSString *_cityCode;
    NSString *_cityName;
    NSString *_cityLongitude;
    NSString *_cityLatitude;
}

@property(retain, nonatomic) NSString *cityLatitude; // @synthesize cityLatitude=_cityLatitude;
@property(retain, nonatomic) NSString *cityLongitude; // @synthesize cityLongitude=_cityLongitude;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(retain, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(nonatomic) int cityType; // @synthesize cityType=_cityType;
- (void).cxx_destruct;
- (void)unPacketHotCityData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

