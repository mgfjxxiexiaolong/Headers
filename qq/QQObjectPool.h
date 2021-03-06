//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock, NSThread, NSTimer;

@interface QQObjectPool : NSObject
{
    NSRecursiveLock *_dictLock;
    NSMutableDictionary *_subPoolDict;
    NSTimer *_timer;
    NSThread *_recoverThread;
    _Bool _isThreadExit;
    unsigned int _freeMem;
    unsigned int _inactiveMem;
    unsigned int _totalMem;
}

+ (id)instance;
- (unsigned int)getTotalMem;
- (unsigned int)getInactiveMem;
- (unsigned int)getFreeMem;
- (void)removeAllObjects;
- (void)removeSubPoolAllObject:(int)arg1;
- (_Bool)subPoolExist:(int)arg1;
- (id)subPool:(int)arg1;
- (void)RecoverProcess;
- (void)RecoverOnePool:(id)arg1;
- (void)UpdateMemoryStatus;
- (void)UpdateSubPoolTime:(unsigned long long)arg1;
- (void)RecoverThreadMain:(id)arg1;
- (void)dealloc;
- (id)init;

@end

