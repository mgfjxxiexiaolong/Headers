//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TranslateBaseResult;

@interface TranslateRpcResult : NSObject
{
    TranslateBaseResult *_base;
    NSString *_qid;
    NSString *_targetText;
    NSString *_supplier;
}

@property(retain, nonatomic) NSString *supplier; // @synthesize supplier=_supplier;
@property(retain, nonatomic) NSString *targetText; // @synthesize targetText=_targetText;
@property(retain, nonatomic) NSString *qid; // @synthesize qid=_qid;
@property(retain, nonatomic) TranslateBaseResult *base; // @synthesize base=_base;
- (void).cxx_destruct;

@end

