//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface LVClassInfo : NSObject
{
    NSMutableDictionary *_methods;
    NSMutableDictionary *_apiHash;
}

+ (id)classInfo:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *apiHash; // @synthesize apiHash=_apiHash;
@property(retain, nonatomic) NSMutableDictionary *methods; // @synthesize methods=_methods;
- (void).cxx_destruct;
- (void)setMethod:(id)arg1 exist:(_Bool)arg2;
- (_Bool)existMethod:(id)arg1;
- (id)getMethod:(id)arg1;
- (void)addMethod:(id)arg1 key:(id)arg2;
- (id)init;

@end
