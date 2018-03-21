//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/BaseSingleton.h>

@class NSMutableDictionary;

@interface CFT_TPNotifyCallback : BaseSingleton
{
    long long _incCount;
    NSMutableDictionary *_notifydict;
}

+ (void)notifyWithCode:(id)arg1 msg:(id)arg2 extraData:(id)arg3;
+ (void)notifyWithCode:(id)arg1 msg:(id)arg2;
+ (void)notifySuccess:(id)arg1;
+ (void)notifyParamError;
+ (void)notifyUserCancel;
+ (void)notify:(id)arg1 errorCode:(long long)arg2;
@property(retain, nonatomic) NSMutableDictionary *notifydict; // @synthesize notifydict=_notifydict;
- (id)recentNotifyItem;
- (id)notifyItemWithTag:(id)arg1 seq:(id)arg2;
- (id)notifyItemWithTag:(id)arg1;
- (id)currentNotifyItem;
- (void)dealloc;
- (void)onDataReady:(id)arg1 DataInfo:(id)arg2;
- (_Bool)notifyWithTag:(id)arg1 seq:(id)arg2 result:(id)arg3 errorCode:(long long)arg4;
- (_Bool)notifyWithTag:(id)arg1 result:(id)arg2 errorCode:(long long)arg3;
- (void)registerWithTag:(id)arg1 handle:(id)arg2 callback:(SEL)arg3 rootVc:(id)arg4 seq:(id)arg5;
- (id)init;

@end
