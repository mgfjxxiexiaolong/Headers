//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MCArrivalRateAndTimeUTModel, MCMessageLinkMonitorModel, NSData, NSString;

@interface AMPMessageContext : NSObject
{
    NSString *_accsDataId;
    NSData *_accsData;
    MCArrivalRateAndTimeUTModel *_arrivalRateAndTimeUTModel;
    MCMessageLinkMonitorModel *_messageLinkMonitorModel;
}

@property(retain, nonatomic) MCMessageLinkMonitorModel *messageLinkMonitorModel; // @synthesize messageLinkMonitorModel=_messageLinkMonitorModel;
@property(retain, nonatomic) MCArrivalRateAndTimeUTModel *arrivalRateAndTimeUTModel; // @synthesize arrivalRateAndTimeUTModel=_arrivalRateAndTimeUTModel;
@property(retain, nonatomic) NSData *accsData; // @synthesize accsData=_accsData;
@property(retain, nonatomic) NSString *accsDataId; // @synthesize accsDataId=_accsDataId;
- (void).cxx_destruct;
- (id)initWithConext:(id)arg1;

@end
