//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface ShoppingAccountMsgPicInfo : NSObject
{
    long long puin;
    long long msgId;
    unsigned long long sendtime;
    NSMutableArray *urls;
}

@property(retain, nonatomic) NSMutableArray *urls; // @synthesize urls;
@property(nonatomic) unsigned long long sendtime; // @synthesize sendtime;
@property(nonatomic) long long msgId; // @synthesize msgId;
@property(nonatomic) long long puin; // @synthesize puin;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPuin:(unsigned long long)arg1 msgId:(unsigned long long)arg2 urls:(id)arg3;
- (void)dealloc;

@end

