//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WEALTHToString.h"

#import "NSCoding-Protocol.h"

@class NSDictionary, NSString, WEALTHFundInstInfo;

@interface WEALTHFundInfo : WEALTHToString <NSCoding>
{
    _Bool _canPurchase;
    NSString *_fundCode;
    NSString *_fundName;
    WEALTHFundInstInfo *_fundInstInfo;
    NSString *_tenThousandIncome;
    NSString *_weekRate;
    NSDictionary *_notices;
}

+ (Class)noticesElementClass;
@property(retain, nonatomic) NSDictionary *notices; // @synthesize notices=_notices;
@property(nonatomic) _Bool canPurchase; // @synthesize canPurchase=_canPurchase;
@property(retain, nonatomic) NSString *weekRate; // @synthesize weekRate=_weekRate;
@property(retain, nonatomic) NSString *tenThousandIncome; // @synthesize tenThousandIncome=_tenThousandIncome;
@property(retain, nonatomic) WEALTHFundInstInfo *fundInstInfo; // @synthesize fundInstInfo=_fundInstInfo;
@property(retain, nonatomic) NSString *fundName; // @synthesize fundName=_fundName;
@property(retain, nonatomic) NSString *fundCode; // @synthesize fundCode=_fundCode;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

