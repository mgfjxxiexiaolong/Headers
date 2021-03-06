//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IDBExceptionDispatcher-Protocol.h>

@class NSString;

@interface DBExceptionDispatcher : NSObject <IDBExceptionDispatcher>
{
    struct multimap<long long, id<IDBExceptionHandler>, std::less<long long>, std::allocator<std::pair<const long long, id<IDBExceptionHandler>>>> m_handler;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)registerDBExceptionHandlerWithErrorcode:(int)arg1 extendErrorCode:(int)arg2 handler:(id)arg3;
- (_Rb_tree_iterator_5564a306)findHandlerWithErrorCode:(int)arg1 extendErrorCode:(int)arg2 handler:(id)arg3;
- (long long)getExceptionKeyWithErrorCode:(int)arg1 extendErrorCode:(int)arg2;
- (void)onDBException:(id)arg1;
- (void)notifyException:(id)arg1 withError:(int)arg2 extenedErrorCode:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

