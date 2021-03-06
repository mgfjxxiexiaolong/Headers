//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Mobike_Model.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface OperationIconConfig : Mobike_Model <NSCoding>
{
    long long _code;
    NSString *_singleClusterUrl;
    NSString *_singleClusterSelectUrl;
    double _startTime;
    double _endTime;
}

@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *singleClusterSelectUrl; // @synthesize singleClusterSelectUrl=_singleClusterSelectUrl;
@property(retain, nonatomic) NSString *singleClusterUrl; // @synthesize singleClusterUrl=_singleClusterUrl;
@property long long code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)initWithInfo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

