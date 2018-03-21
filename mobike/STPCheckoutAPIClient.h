//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURLSession, NSURLSessionTask, STPAPIClient, STPVoidPromise;

@interface STPCheckoutAPIClient : NSObject
{
    NSString *_merchantName;
    STPVoidPromise *_bootstrapPromise;
    NSString *_publishableKey;
    NSURLSession *_accountSession;
    NSURLSessionTask *_lookupTask;
    STPAPIClient *_tokenClient;
}

+ (id)genericRememberMeErrorWithResponseData:(id)arg1 message:(id)arg2;
+ (id)cancellationError;
@property(retain, nonatomic) STPAPIClient *tokenClient; // @synthesize tokenClient=_tokenClient;
@property(retain, nonatomic) NSURLSessionTask *lookupTask; // @synthesize lookupTask=_lookupTask;
@property(retain, nonatomic) NSURLSession *accountSession; // @synthesize accountSession=_accountSession;
@property(copy, nonatomic) NSString *publishableKey; // @synthesize publishableKey=_publishableKey;
@property(retain, nonatomic) STPVoidPromise *bootstrapPromise; // @synthesize bootstrapPromise=_bootstrapPromise;
@property(copy, nonatomic) NSString *merchantName; // @synthesize merchantName=_merchantName;
- (void).cxx_destruct;
- (id)parseTokenFromResponse:(id)arg1 data:(id)arg2;
- (id)createAccountWithCardParams:(id)arg1 email:(id)arg2 phone:(id)arg3;
- (id)createTokenWithAccount:(id)arg1;
- (id)submitSMSCode:(id)arg1 forVerification:(id)arg2;
- (id)sendSMSToAccountWithEmail:(id)arg1;
- (id)lookupEmail:(id)arg1;
@property(readonly, nonatomic) _Bool readyForLookups;
- (id)initWithPublishableKey:(id)arg1;

@end
