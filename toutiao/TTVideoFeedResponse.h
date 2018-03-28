//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTVideoResponse.h"

@class NSArray, NSString, TTVFeedItem, TTVVideoFeedResponse;

@interface TTVideoFeedResponse : TTVideoResponse
{
    _Bool _isFromLocal;
    long long _increaseNumber;
    NSString *_categoryId;
    NSArray *_feedItems;
    NSArray *_increasedItems;
    TTVFeedItem *_topWeb;
}

@property(retain, nonatomic) TTVFeedItem *topWeb; // @synthesize topWeb=_topWeb;
@property(retain, nonatomic) NSArray *increasedItems; // @synthesize increasedItems=_increasedItems;
@property(retain, nonatomic) NSArray *feedItems; // @synthesize feedItems=_feedItems;
@property(copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(nonatomic) long long increaseNumber; // @synthesize increaseNumber=_increaseNumber;
@property(nonatomic) _Bool isFromLocal; // @synthesize isFromLocal=_isFromLocal;
- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) TTVVideoFeedResponse *originData; // @dynamic originData;

@end
