//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol MCRecommendData <NSObject>
@property(retain, nonatomic) NSArray *list;
@property(nonatomic) float priority;
@property(copy, nonatomic) NSString *moreUrl;
@property(copy, nonatomic) NSString *moreText;
@property(nonatomic) _Bool moreShow;
@property(retain, nonatomic) NSString *iconUrl;
@property(retain, nonatomic) NSString *recommendType;
@property(nonatomic) long long ttl;
@property(retain, nonatomic) NSString *name;
@end
