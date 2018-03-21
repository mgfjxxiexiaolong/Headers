//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WEALTHBaseBankCard.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSString, WEALTHFundTransferOutTipInfo;

@interface WEALTHBankCardForTransferOut : WEALTHBaseBankCard <NSCopying>
{
    NSArray *_arrivingTypes;
    NSString *_quotaAmount;
    NSString *_quotaContent;
    NSString *_perTimeAmountString;
    WEALTHFundTransferOutTipInfo *_fundTransferOutTipInfo;
    NSArray *_arrivingTypeInfos;
    NSArray *_arriveTypeInfoList;
    NSArray *_transferOutChannels;
    NSString *_bankNotice;
    NSString *_cardQuotaContent;
}

+ (Class)transferOutChannelsElementClass;
+ (Class)arriveTypeInfoListElementClass;
+ (Class)arrivingTypeInfosElementClass;
+ (Class)arrivingTypesElementClass;
@property(retain, nonatomic) NSString *cardQuotaContent; // @synthesize cardQuotaContent=_cardQuotaContent;
@property(retain, nonatomic) NSString *bankNotice; // @synthesize bankNotice=_bankNotice;
@property(retain, nonatomic) NSArray *transferOutChannels; // @synthesize transferOutChannels=_transferOutChannels;
@property(retain, nonatomic) NSArray *arriveTypeInfoList; // @synthesize arriveTypeInfoList=_arriveTypeInfoList;
@property(retain, nonatomic) NSArray *arrivingTypeInfos; // @synthesize arrivingTypeInfos=_arrivingTypeInfos;
@property(retain, nonatomic) WEALTHFundTransferOutTipInfo *fundTransferOutTipInfo; // @synthesize fundTransferOutTipInfo=_fundTransferOutTipInfo;
@property(retain, nonatomic) NSString *perTimeAmountString; // @synthesize perTimeAmountString=_perTimeAmountString;
@property(retain, nonatomic) NSString *quotaContent; // @synthesize quotaContent=_quotaContent;
@property(retain, nonatomic) NSString *quotaAmount; // @synthesize quotaAmount=_quotaAmount;
@property(retain, nonatomic) NSArray *arrivingTypes; // @synthesize arrivingTypes=_arrivingTypes;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
