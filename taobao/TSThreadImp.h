//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSThread;

@interface TSThreadImp : NSObject
{
    _Bool _stopRunning;
    NSThread *_workThread;
}

@property(retain, nonatomic) NSThread *workThread; // @synthesize workThread=_workThread;
@property(nonatomic) _Bool stopRunning; // @synthesize stopRunning=_stopRunning;
- (void).cxx_destruct;
- (void)stop;
- (void)executeBlock:(CDUnknownBlockType)arg1;
- (void)runLoopThread;
- (id)initWith:(id)arg1 andPriority:(double)arg2 andName:(id)arg3;
- (id)init;
- (void)dealloc;

@end
