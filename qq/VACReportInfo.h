//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TlibDy/JceObjectV2.h>

@class VACReportBody, VACReportHeader;

@interface VACReportInfo : JceObjectV2
{
}

+ (id)loadFromDisk;
+ (void)deleteFromDisk:(long long)arg1;
+ (id)jceType;
- (void)deleteFromDisk;
- (void)saveToDisk;
- (id)initWithModule:(id)arg1 action:(id)arg2;

// Remaining properties
@property(retain, nonatomic, getter=jce_header, setter=setJce_header:) VACReportHeader *jcev2_p_0_r_header; // @dynamic jcev2_p_0_r_header;
@property(retain, nonatomic, getter=jce_body, setter=setJce_body:) VACReportBody *jcev2_p_1_o_body; // @dynamic jcev2_p_1_o_body;

@end
