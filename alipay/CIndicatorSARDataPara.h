//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@interface CIndicatorSARDataPara : NSObject <NSCoding>
{
    CDStruct_2b56ed6f _sar;
    CDStruct_1ed7117a _date;
}

@property(nonatomic) CDStruct_2b56ed6f sar; // @synthesize sar=_sar;
@property(nonatomic) CDStruct_1ed7117a date; // @synthesize date=_date;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

