//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CCRBankInfo, NSString;

@interface CCRepayBill : NSObject
{
    _Bool _isFullCard;
    CCRBankInfo *_bankInfo;
    NSString *_cardInfo;
    NSString *_holderName;
    NSString *_repayCount;
}

@property(retain, nonatomic) NSString *repayCount; // @synthesize repayCount=_repayCount;
@property(retain, nonatomic) NSString *holderName; // @synthesize holderName=_holderName;
@property(nonatomic) _Bool isFullCard; // @synthesize isFullCard=_isFullCard;
@property(retain, nonatomic) NSString *cardInfo; // @synthesize cardInfo=_cardInfo;
@property(retain, nonatomic) CCRBankInfo *bankInfo; // @synthesize bankInfo=_bankInfo;
- (void).cxx_destruct;
- (id)init;

@end
