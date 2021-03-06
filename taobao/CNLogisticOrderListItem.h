//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class CNExtPackageAttr, CNLogisticAdItem, CNLogisticAppointmentItem, CNLogisticCourierInfo, CNLogisticNewAdsDO, CNLogisticOnlineTouchSettingDTO, CNLogisticTraceAbilityItem, CNLogisticsExceptionTraceItem, CNLogisticsNewComplainItem, CNLogisticsOnlineHelpItem, CNLogisticsServiceListItem, CNServiceProvider, NSArray, NSNumber, NSString;
@protocol CNLogisticPackageListItem, CNLogisticTransitListItem, CNLogisticsServiceListItem;

@interface CNLogisticOrderListItem : TBJSONModel
{
    NSString *_showEvaluation;
    NSString *_partnerName;
    NSString *_packageTitle;
    NSString *_partnerCode;
    NSString *_mailNo;
    NSString *_stationFetchType;
    NSString *_stationChannel;
    NSString *_orderCode;
    NSString *_subtitle1;
    NSString *_statusCode;
    NSString *_logisticStatus;
    NSString *_logisticStatusDesc;
    NSString *_logisticStatusDesc2;
    NSString *_partnerContactPhone;
    NSString *_subTitle2;
    NSString *_stationAuthCode;
    NSString *_stationPackage;
    NSString *_stationId;
    NSString *_tbPackage;
    NSString *_showComplain;
    NSString *_logisticsServiceTitle;
    NSString *_logisticsServiceTitleDesc;
    NSString *_prorityServiceId;
    NSString *_itemsNum;
    NSString *_expressmanDisUrl;
    NSString *_addr;
    CNLogisticTraceAbilityItem *_traceAbility;
    NSArray<CNLogisticPackageListItem> *_packageItemList;
    NSArray<CNLogisticTransitListItem> *_transitList;
    NSArray<CNLogisticsServiceListItem> *_logisticsServiceList;
    NSArray<CNLogisticsServiceListItem> *_commonServiceList;
    CNLogisticsServiceListItem *_prorityService;
    CNLogisticCourierInfo *_tbLogisticCourier;
    CNLogisticsNewComplainItem *_h5Complain;
    CNLogisticsOnlineHelpItem *_onlineHelp;
    CNLogisticAdItem *_adsDO;
    CNServiceProvider *_serviceProvider;
    CNLogisticAppointmentItem *_appointmentService;
    CNLogisticsExceptionTraceItem *_exceptionSrvDetail;
    CNLogisticNewAdsDO *_ldNewAdsDO;
    CNLogisticOnlineTouchSettingDTO *_onlineTouchSettingDTO;
    CNExtPackageAttr *_extPackageAttr;
    NSNumber *_showStationDelivery;
}

@property(retain, nonatomic) NSNumber *showStationDelivery; // @synthesize showStationDelivery=_showStationDelivery;
@property(retain, nonatomic) CNExtPackageAttr *extPackageAttr; // @synthesize extPackageAttr=_extPackageAttr;
@property(retain, nonatomic) CNLogisticOnlineTouchSettingDTO *onlineTouchSettingDTO; // @synthesize onlineTouchSettingDTO=_onlineTouchSettingDTO;
@property(retain, nonatomic) CNLogisticNewAdsDO *ldNewAdsDO; // @synthesize ldNewAdsDO=_ldNewAdsDO;
@property(retain, nonatomic) CNLogisticsExceptionTraceItem *exceptionSrvDetail; // @synthesize exceptionSrvDetail=_exceptionSrvDetail;
@property(retain, nonatomic) CNLogisticAppointmentItem *appointmentService; // @synthesize appointmentService=_appointmentService;
@property(retain, nonatomic) CNServiceProvider *serviceProvider; // @synthesize serviceProvider=_serviceProvider;
@property(retain, nonatomic) CNLogisticAdItem *adsDO; // @synthesize adsDO=_adsDO;
@property(retain, nonatomic) CNLogisticsOnlineHelpItem *onlineHelp; // @synthesize onlineHelp=_onlineHelp;
@property(retain, nonatomic) CNLogisticsNewComplainItem *h5Complain; // @synthesize h5Complain=_h5Complain;
@property(retain, nonatomic) CNLogisticCourierInfo *tbLogisticCourier; // @synthesize tbLogisticCourier=_tbLogisticCourier;
@property(retain, nonatomic) CNLogisticsServiceListItem *prorityService; // @synthesize prorityService=_prorityService;
@property(retain, nonatomic) NSArray<CNLogisticsServiceListItem> *commonServiceList; // @synthesize commonServiceList=_commonServiceList;
@property(retain, nonatomic) NSArray<CNLogisticsServiceListItem> *logisticsServiceList; // @synthesize logisticsServiceList=_logisticsServiceList;
@property(retain, nonatomic) NSArray<CNLogisticTransitListItem> *transitList; // @synthesize transitList=_transitList;
@property(retain, nonatomic) NSArray<CNLogisticPackageListItem> *packageItemList; // @synthesize packageItemList=_packageItemList;
@property(retain, nonatomic) CNLogisticTraceAbilityItem *traceAbility; // @synthesize traceAbility=_traceAbility;
@property(retain, nonatomic) NSString *addr; // @synthesize addr=_addr;
@property(retain, nonatomic) NSString *expressmanDisUrl; // @synthesize expressmanDisUrl=_expressmanDisUrl;
@property(retain, nonatomic) NSString *itemsNum; // @synthesize itemsNum=_itemsNum;
@property(retain, nonatomic) NSString *prorityServiceId; // @synthesize prorityServiceId=_prorityServiceId;
@property(retain, nonatomic) NSString *logisticsServiceTitleDesc; // @synthesize logisticsServiceTitleDesc=_logisticsServiceTitleDesc;
@property(retain, nonatomic) NSString *logisticsServiceTitle; // @synthesize logisticsServiceTitle=_logisticsServiceTitle;
@property(retain, nonatomic) NSString *showComplain; // @synthesize showComplain=_showComplain;
@property(retain, nonatomic) NSString *tbPackage; // @synthesize tbPackage=_tbPackage;
@property(retain, nonatomic) NSString *stationId; // @synthesize stationId=_stationId;
@property(retain, nonatomic) NSString *stationPackage; // @synthesize stationPackage=_stationPackage;
@property(retain, nonatomic) NSString *stationAuthCode; // @synthesize stationAuthCode=_stationAuthCode;
@property(retain, nonatomic) NSString *subTitle2; // @synthesize subTitle2=_subTitle2;
@property(retain, nonatomic) NSString *partnerContactPhone; // @synthesize partnerContactPhone=_partnerContactPhone;
@property(retain, nonatomic) NSString *logisticStatusDesc2; // @synthesize logisticStatusDesc2=_logisticStatusDesc2;
@property(retain, nonatomic) NSString *logisticStatusDesc; // @synthesize logisticStatusDesc=_logisticStatusDesc;
@property(retain, nonatomic) NSString *logisticStatus; // @synthesize logisticStatus=_logisticStatus;
@property(retain, nonatomic) NSString *statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSString *subtitle1; // @synthesize subtitle1=_subtitle1;
@property(retain, nonatomic) NSString *orderCode; // @synthesize orderCode=_orderCode;
@property(retain, nonatomic) NSString *stationChannel; // @synthesize stationChannel=_stationChannel;
@property(retain, nonatomic) NSString *stationFetchType; // @synthesize stationFetchType=_stationFetchType;
@property(retain, nonatomic) NSString *mailNo; // @synthesize mailNo=_mailNo;
@property(retain, nonatomic) NSString *partnerCode; // @synthesize partnerCode=_partnerCode;
@property(retain, nonatomic) NSString *packageTitle; // @synthesize packageTitle=_packageTitle;
@property(retain, nonatomic) NSString *partnerName; // @synthesize partnerName=_partnerName;
@property(retain, nonatomic) NSString *showEvaluation; // @synthesize showEvaluation=_showEvaluation;
- (void).cxx_destruct;
- (id)itemIds;
- (_Bool)isSign;

@end

