//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class APayProcessor, APayRoute, NSDictionary, NSString;

@interface AlipaySDK : NSObject <UIAlertViewDelegate>
{
    NSString *_schemeStr;
    NSString *_executingOrderStr;
    CDUnknownBlockType _completionBlock;
    APayRoute *_route;
    APayProcessor *_processor;
    NSDictionary *_alertOkAction;
    NSDictionary *_alertCancelAction;
}

+ (id)defaultService;
@property(retain, nonatomic) NSDictionary *alertCancelAction; // @synthesize alertCancelAction=_alertCancelAction;
@property(retain, nonatomic) NSDictionary *alertOkAction; // @synthesize alertOkAction=_alertOkAction;
@property(readonly, nonatomic) APayProcessor *processor; // @synthesize processor=_processor;
@property(readonly, nonatomic) APayRoute *route; // @synthesize route=_route;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) NSString *executingOrderStr; // @synthesize executingOrderStr=_executingOrderStr;
@property(copy, nonatomic) NSString *schemeStr; // @synthesize schemeStr=_schemeStr;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)cleanInfoWhenGoPortal;
- (void)cleanData;
- (void)processResultUrl:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)processAuth_V2Result:(id)arg1 standbyCallback:(CDUnknownBlockType)arg2;
- (void)auth_V2WithInfo:(id)arg1 fromScheme:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)authWithInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)currentVersion;
- (_Bool)isLogined;
- (id)dictionaryFromRegular:(id)arg1 pattern:(id)arg2;
- (void)processAuthResult:(id)arg1 standbyCallback:(CDUnknownBlockType)arg2;
- (void)processOrderWithPaymentResult:(id)arg1 standbyCallback:(CDUnknownBlockType)arg2;
- (void)callbackWithResult:(id)arg1;
- (void)setUrl:(id)arg1;
- (long long)routeTypeWithConfig:(id)arg1;
- (void)payOrder:(id)arg1 fromScheme:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

