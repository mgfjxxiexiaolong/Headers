//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBLMLayerInfoOrderList, TBLMPopRequest, TBLMWaitingList;

@interface TBLMLayerInfo : NSObject
{
    TBLMLayerInfoOrderList *_layerInfoOrderList;
    unsigned long long _level;
    TBLMPopRequest *_currentRequest;
    TBLMWaitingList *_waitingList;
}

+ (id)layerInfoWithLevel:(unsigned long long)arg1;
@property(retain, nonatomic) TBLMWaitingList *waitingList; // @synthesize waitingList=_waitingList;
@property(retain, nonatomic) TBLMPopRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
@property(nonatomic) __weak TBLMLayerInfoOrderList *layerInfoOrderList; // @synthesize layerInfoOrderList=_layerInfoOrderList;
- (void).cxx_destruct;
- (void)remove:(id)arg1;
- (void)tryOpen:(id)arg1;
- (_Bool)isEmpty;
- (long long)compare:(id)arg1;
- (unsigned long long)getLevel;

@end
