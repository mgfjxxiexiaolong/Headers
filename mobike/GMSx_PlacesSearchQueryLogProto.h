//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_RectProto, NSString;

@interface GMSx_PlacesSearchQueryLogProto : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_RectProto *bound; // @dynamic bound;
@property(nonatomic) _Bool hasBound; // @dynamic hasBound;
@property(nonatomic) _Bool hasMaxResults; // @dynamic hasMaxResults;
@property(nonatomic) _Bool hasResultOffset; // @dynamic hasResultOffset;
@property(nonatomic) _Bool hasTextQuery; // @dynamic hasTextQuery;
@property(nonatomic) int maxResults; // @dynamic maxResults;
@property(nonatomic) int resultOffset; // @dynamic resultOffset;
@property(retain, nonatomic) NSString *textQuery; // @dynamic textQuery;

@end
