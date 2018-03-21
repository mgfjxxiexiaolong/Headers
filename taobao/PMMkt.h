//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "PMSysProtocol-Protocol.h"

@class MKTMultiArray, MKTMultiDictionary, NSString;

@interface PMMkt : NSObject <PMSysProtocol>
{
    MKTMultiArray *_msgIdArray;
    MKTMultiDictionary *_msgIdDict;
}

+ (long long)sysCode;
+ (CDUnknownBlockType)msgCheck;
+ (CDUnknownBlockType)callback;
+ (id)sharedInstance;
@property(retain, nonatomic) MKTMultiDictionary *msgIdDict; // @synthesize msgIdDict=_msgIdDict;
@property(retain, nonatomic) MKTMultiArray *msgIdArray; // @synthesize msgIdArray=_msgIdArray;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
