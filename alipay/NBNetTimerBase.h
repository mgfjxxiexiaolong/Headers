//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer;

@interface NBNetTimerBase : NSObject
{
    _Bool _inRunloop;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool inRunloop; // @synthesize inRunloop=_inRunloop;
- (void).cxx_destruct;
- (void)timeoutHandle;
- (void)dealloc;
- (void)deleteFromRunloop;
- (void)startInRunloop:(id)arg1 internal:(double)arg2 repeat:(_Bool)arg3;
- (id)init;

@end

