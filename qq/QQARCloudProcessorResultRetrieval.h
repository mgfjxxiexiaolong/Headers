//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, QQARIRLogicRsp, QQARJdSearchRsp;

@interface QQARCloudProcessorResultRetrieval : NSObject
{
    int _errorcode;
    NSString *_errormsg;
    QQARIRLogicRsp *_msg_ir_logic_rsp;
    QQARJdSearchRsp *_jd_search_rsp;
}

@property(retain, nonatomic) QQARJdSearchRsp *jd_search_rsp; // @synthesize jd_search_rsp=_jd_search_rsp;
@property(retain, nonatomic) QQARIRLogicRsp *msg_ir_logic_rsp; // @synthesize msg_ir_logic_rsp=_msg_ir_logic_rsp;
@property(retain, nonatomic) NSString *errormsg; // @synthesize errormsg=_errormsg;
@property(nonatomic) int errorcode; // @synthesize errorcode=_errorcode;
- (void).cxx_destruct;

@end
