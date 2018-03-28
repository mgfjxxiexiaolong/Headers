//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSNumber, NSString;

@interface TTVideoDomainInfo : NSObject
{
    NSString *_host;
    NSArray *_ips;
    NSNumber *_ttl;
    NSDate *_requestDate;
}

@property(retain, nonatomic) NSDate *requestDate; // @synthesize requestDate=_requestDate;
@property(retain, nonatomic) NSNumber *ttl; // @synthesize ttl=_ttl;
@property(copy, nonatomic) NSArray *ips; // @synthesize ips=_ips;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (void)formateIfIsIpv6;
- (_Bool)isCacheValidNow;
- (id)randomIP;
- (id)initWithDictionary:(id)arg1;

@end
