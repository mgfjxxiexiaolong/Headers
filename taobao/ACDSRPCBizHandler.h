//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ACDSRPCHandler-Protocol.h"

@class NSString;

@interface ACDSRPCBizHandler : NSObject <ACDSRPCHandler>
{
    _Bool _needLoginBox;
    unsigned long long _strategy;
    NSString *_cacheKey;
    unsigned long long _retryCnt;
    unsigned long long _codeType;
    CDUnknownBlockType _callback;
    Class _returnClass_;
    Class _firstClass_;
    Class _secondClass_;
}

+ (id)handlerWithReturnDict:(Class)arg1 second:(Class)arg2;
+ (id)handlerWithReturnArray:(Class)arg1;
+ (id)handlerWithType:(Class)arg1;
@property(nonatomic) Class secondClass_; // @synthesize secondClass_=_secondClass_;
@property(nonatomic) Class firstClass_; // @synthesize firstClass_=_firstClass_;
@property(nonatomic) Class returnClass_; // @synthesize returnClass_=_returnClass_;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) unsigned long long codeType; // @synthesize codeType=_codeType;
@property(nonatomic) unsigned long long retryCnt; // @synthesize retryCnt=_retryCnt;
@property(copy, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(nonatomic) unsigned long long strategy; // @synthesize strategy=_strategy;
@property(nonatomic) _Bool needLoginBox; // @synthesize needLoginBox=_needLoginBox;
- (void).cxx_destruct;
- (void)onFailed:(id)arg1;
- (void)onSuccess:(id)arg1;
- (id)init:(Class)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
