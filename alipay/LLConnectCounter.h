//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface LLConnectCounter : NSObject
{
    NSObject *_lock;
    long long _number;
    long long _statusNumber;
}

+ (id)sharedInstance;
@property(nonatomic) long long statusNumber; // @synthesize statusNumber=_statusNumber;
@property(nonatomic) long long number; // @synthesize number=_number;
- (void).cxx_destruct;
- (_Bool)statusValid;
- (_Bool)isOut;
- (_Bool)isInit;
- (_Bool)isRetry;
@property(readonly, nonatomic) _Bool valid;
- (void)restoreNumber;
- (void)initData;

@end

