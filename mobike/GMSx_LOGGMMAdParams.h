//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_PBMutableArray, NSString;

@interface GMSx_LOGGMMAdParams : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;
@property(retain, nonatomic) NSString *locationAdInteractionURL;
@property(nonatomic) _Bool hasLocationAdInteractionURL;
@property(retain, nonatomic) NSString *redirectURL;
@property(nonatomic) _Bool hasRedirectURL;

// Remaining properties
@property(nonatomic) _Bool hasLocationAdInteractionUrl; // @dynamic hasLocationAdInteractionUrl;
@property(nonatomic) _Bool hasPreviousAdInteractionsArray; // @dynamic hasPreviousAdInteractionsArray;
@property(nonatomic) _Bool hasRedirectUrl; // @dynamic hasRedirectUrl;
@property(retain, nonatomic) NSString *locationAdInteractionUrl; // @dynamic locationAdInteractionUrl;
@property(retain, nonatomic) GMSx_PBMutableArray *previousAdInteractionsArray; // @dynamic previousAdInteractionsArray;
@property(retain, nonatomic) NSString *redirectUrl; // @dynamic redirectUrl;

@end

