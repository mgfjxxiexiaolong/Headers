//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/DBAsyncCallbackProtocol-Protocol.h>
#import <QQMainProject/IQQDBOperationBase-Protocol.h>

@class NSString;

@interface RJIC : NSObject <DBAsyncCallbackProtocol, IQQDBOperationBase>
{
    long long _last;
}

+ (id)shareInstance;
- (void)dealloc;
- (_Bool)RJIC_ON;
- (void)save:(double)arg1;
- (double)last;
- (unsigned long long)getTableSign;
- (id)conv:(id)arg1;
- (id)contact:(id)arg1 content:(id)arg2;
- (id)split:(id)arg1 seg:(unsigned long long)arg2 pfix:(id)arg3;
- (id)convDic:(id)arg1;
- (void)rp:(id)arg1 t:(unsigned long long)arg2;
- (id)en:(id)arg1;
- (id)calcGD:(id)arg1 ls:(id)arg2;
- (id)calcC:(id)arg1 ls:(id)arg2;
- (void)runCGD:(id)arg1 t:(unsigned long long)arg2;
- (void)onDbAsyncCallback:(id)arg1 userdata:(id)arg2 workID:(int)arg3;
- (id)resC2C:(id)arg1 sql:(const char *)arg2 su:(long long)arg3 db:(id)arg4;
- (id)res:(id)arg1 sql:(const char *)arg2 su:(long long)arg3 db:(id)arg4;
- (id)run:(id)arg1 db:(id)arg2;
- (void)runIC:(id)arg1;
- (void)checkReport;
- (void)doIt;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
