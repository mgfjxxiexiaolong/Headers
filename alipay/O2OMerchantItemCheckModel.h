//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OHTTPModel.h"

@class MOBILECSADiscountCanUseResponse, NSDictionary, NSString;

@interface O2OMerchantItemCheckModel : O2OHTTPModel
{
    NSString *_itemId;
    NSString *_shopId;
    NSDictionary *_monitorDic;
    MOBILECSADiscountCanUseResponse *_res;
}

@property(readonly, nonatomic) MOBILECSADiscountCanUseResponse *res; // @synthesize res=_res;
@property(retain, nonatomic) NSDictionary *monitorDic; // @synthesize monitorDic=_monitorDic;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (_Bool)parseResponse:(id)arg1;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;

@end

