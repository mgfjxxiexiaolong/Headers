//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MBKOrderTaxiInfo : NSObject
{
    long long _payForPickUp;
    long long _dispatchFee;
    NSArray *_riderTags;
}

@property(retain, nonatomic) NSArray *riderTags; // @synthesize riderTags=_riderTags;
@property(nonatomic) long long dispatchFee; // @synthesize dispatchFee=_dispatchFee;
@property(nonatomic) long long payForPickUp; // @synthesize payForPickUp=_payForPickUp;
- (void).cxx_destruct;

@end

