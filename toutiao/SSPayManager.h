//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface SSPayManager : NSObject
{
    struct __SecKey *_publicKeyRef;
    CDUnknownBlockType _payHandler;
    NSDictionary *_trade;
}

+ (void)registerWxAppID:(id)arg1;
+ (id)sharedPayManager;
@property(copy, nonatomic) NSDictionary *trade; // @synthesize trade=_trade;
@property(copy, nonatomic) CDUnknownBlockType payHandler; // @synthesize payHandler=_payHandler;
- (void).cxx_destruct;
- (_Bool)_verifySignature:(id)arg1 usingSecKey:(struct __SecKey *)arg2 signedData:(id)arg3;
- (struct __SecKey *)_secKeyWithString:(id)arg1;
- (id)_dictionaryWithURLQuery:(id)arg1;
- (void)_payForAliPayWithSDKInfo:(id)arg1;
- (void)_payForWXWithSDKInfo:(id)arg1;
- (_Bool)_validateTradeInfo:(id)arg1 signature:(id)arg2;
- (_Bool)_supportTradeInfo:(id)arg1;
- (void)_handleAliPayResponse:(id)arg1;
- (void)handleWXPayResponse:(id)arg1;
- (void)payForTrade:(id)arg1 finishHandler:(CDUnknownBlockType)arg2;
- (_Bool)canPayForTrade:(id)arg1;
- (_Bool)canPayForURL:(id)arg1;
- (_Bool)canHandleOpenURL:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)registerWxAppIDIfNeeded;

@end

