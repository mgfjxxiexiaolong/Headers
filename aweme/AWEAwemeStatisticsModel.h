//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSNumber, NSString;

@interface AWEAwemeStatisticsModel : AWEBaseApiModel
{
    NSString *_itemID;
    NSNumber *_commentCount;
    NSNumber *_diggCount;
    NSNumber *_playCount;
    NSNumber *_shareCount;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *shareCount; // @synthesize shareCount=_shareCount;
@property(retain, nonatomic) NSNumber *playCount; // @synthesize playCount=_playCount;
@property(retain, nonatomic) NSNumber *diggCount; // @synthesize diggCount=_diggCount;
@property(retain, nonatomic) NSNumber *commentCount; // @synthesize commentCount=_commentCount;
@property(readonly, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;

@end
