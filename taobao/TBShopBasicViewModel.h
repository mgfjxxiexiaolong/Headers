//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSNumber, TBShopContext;

@interface TBShopBasicViewModel : NSObject
{
    CDUnknownBlockType _mainHandler;
    NSMutableDictionary *_userInfo;
    TBShopContext *_shopContext;
}

@property(nonatomic) __weak TBShopContext *shopContext; // @synthesize shopContext=_shopContext;
@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) CDUnknownBlockType mainHandler; // @synthesize mainHandler=_mainHandler;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeKVOForCurrentModel;
- (void)constrcutWithModel:(id)arg1;
- (void)invokeWithData:(id)arg1;
- (id)initWithContext:(id)arg1;
@property(retain, nonatomic) NSNumber *cellHeight;
- (id)cellIdentifier;

@end

