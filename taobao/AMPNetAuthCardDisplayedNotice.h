//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPNetPacket.h"

@class NSString;

@interface AMPNetAuthCardDisplayedNotice : AMPNetPacket
{
    NSString *_cardType;
    NSString *_userId;
}

@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
- (void).cxx_destruct;
- (id)generateMtopBody;
- (id)generateMtopHeader;
- (id)initWithAuthCardType:(id)arg1 user:(id)arg2;

@end
