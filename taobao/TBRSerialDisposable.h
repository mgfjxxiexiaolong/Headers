//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBRDisposable.h"

@interface TBRSerialDisposable : TBRDisposable
{
    TBRDisposable *_disposable;
    _Bool _disposed;
    int _spinLock;
}

+ (id)serialDisposableWithDisposable:(id)arg1;
- (void).cxx_destruct;
- (void)dispose;
- (id)swapInDisposable:(id)arg1;
- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
@property(retain) TBRDisposable *disposable;
- (_Bool)isDisposed;

@end
