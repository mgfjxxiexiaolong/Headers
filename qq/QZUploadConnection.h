//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QZUploadStreamDelegate-Protocol.h>

@class NSMutableArray, NSString, NSThread, QZUpIpInfo, QZUploadCostTime;
@protocol QZUploadConnectionDelegate;

@interface QZUploadConnection : NSObject <QZUploadStreamDelegate>
{
    _Bool _stop;
    QZUploadCostTime *_costTime;
    id <QZUploadConnectionDelegate> _delegate;
    QZUpIpInfo *_ipInfo;
    NSString *_domainIp;
    double _socketTimeoutInterval;
    double _connectTimeoutInterval;
    long long _maxSeg;
    NSString *_packetTag;
    double _expiredTime;
    long long _retryCount;
    NSThread *_connectionThread;
    NSMutableArray *_streams;
    NSMutableArray *_dataToSendArray;
}

@property(retain, nonatomic) NSMutableArray *dataToSendArray; // @synthesize dataToSendArray=_dataToSendArray;
@property(retain, nonatomic) NSMutableArray *streams; // @synthesize streams=_streams;
@property(retain, nonatomic) NSThread *connectionThread; // @synthesize connectionThread=_connectionThread;
@property(nonatomic) _Bool stop; // @synthesize stop=_stop;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) double expiredTime; // @synthesize expiredTime=_expiredTime;
@property(retain, nonatomic) NSString *packetTag; // @synthesize packetTag=_packetTag;
@property(nonatomic) long long maxSeg; // @synthesize maxSeg=_maxSeg;
@property(nonatomic) double connectTimeoutInterval; // @synthesize connectTimeoutInterval=_connectTimeoutInterval;
@property(nonatomic) double socketTimeoutInterval; // @synthesize socketTimeoutInterval=_socketTimeoutInterval;
@property(retain, nonatomic) NSString *domainIp; // @synthesize domainIp=_domainIp;
@property(retain, nonatomic) QZUpIpInfo *ipInfo; // @synthesize ipInfo=_ipInfo;
@property(nonatomic) __weak id <QZUploadConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QZUploadCostTime *costTime; // @synthesize costTime=_costTime;
- (void).cxx_destruct;
- (void)performSelector:(SEL)arg1 onDelegateThreadWithObject:(id)arg2;
- (void)notifyDidReadData:(id)arg1;
- (void)notifyErrorOccured:(id)arg1;
- (void)notifyReadyToWriteData;
- (void)handleStreamTimeout;
- (void)stream:(id)arg1 didReadData:(id)arg2 withTag:(id)arg3;
- (void)stream:(id)arg1 didErrorOcurred:(id)arg2;
- (void)streamDidWriteData:(id)arg1;
- (void)stream:(id)arg1 didConnectedToIp:(id)arg2 port:(long long)arg3;
- (void)trySendDataToStream:(id)arg1;
- (void)dequeDataToSend;
- (id)getFreeStream;
- (void)sendDataOnConnectionThread:(id)arg1;
- (void)send:(id)arg1;
- (void)checkIfDataCanWrite;
- (_Bool)isDataArraySpaceAvailable;
- (void)prepareForReuse;
- (void)closeOnConnectionThread;
- (void)clearAllStream;
- (void)disconnectOnConnectionThread;
- (void)disconnect;
- (void)close;
- (_Bool)needRedirect;
- (void)handleObtainCompeletedWithStream:(id)arg1;
- (void)createNewStreamWithIpInfo:(id)arg1;
- (void)connect:(id)arg1;
- (void)connectWithStreamCount:(long long)arg1;
- (void)runConnection;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

