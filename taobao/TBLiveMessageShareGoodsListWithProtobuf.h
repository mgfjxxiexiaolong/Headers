//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface TBLiveMessageShareGoodsListWithProtobuf : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int goodsIndex; // @dynamic goodsIndex;
@property(retain, nonatomic) NSMutableArray *goodslistArray; // @dynamic goodslistArray;
@property(readonly, nonatomic) unsigned long long goodslistArray_Count; // @dynamic goodslistArray_Count;
@property(nonatomic) int totalCount; // @dynamic totalCount;

@end
