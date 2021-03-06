//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSStreamDelegate-Protocol.h>

@class BeaconDealThread, NSInputStream, NSMutableData, NSOutputStream, NSString, NSTimer;
@protocol BeaconAsyncSocketDelegate, OS_dispatch_queue;

@interface BeaconAsyncSocket : NSObject <NSStreamDelegate>
{
    _Bool _toExit;
    _Bool _readOpend;
    _Bool _writeOpend;
    _Bool _needReleaseDealThread;
    int _socketState;
    id <BeaconAsyncSocketDelegate> _delegate;
    NSString *_orgHost;
    long long _orgPort;
    NSMutableData *_sendData;
    NSMutableData *_recvData;
    NSObject<OS_dispatch_queue> *_delegateDealThread;
    BeaconDealThread *_socketDealThread;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSTimer *_connectTimer;
}

+ (id)CRLFData;
@property(nonatomic) _Bool needReleaseDealThread; // @synthesize needReleaseDealThread=_needReleaseDealThread;
@property(nonatomic) _Bool writeOpend; // @synthesize writeOpend=_writeOpend;
@property(nonatomic) _Bool readOpend; // @synthesize readOpend=_readOpend;
@property(retain, nonatomic) NSTimer *connectTimer; // @synthesize connectTimer=_connectTimer;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(retain, nonatomic) BeaconDealThread *socketDealThread; // @synthesize socketDealThread=_socketDealThread;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateDealThread; // @synthesize delegateDealThread=_delegateDealThread;
@property(nonatomic) _Bool toExit; // @synthesize toExit=_toExit;
@property(retain, nonatomic) NSMutableData *recvData; // @synthesize recvData=_recvData;
@property(retain, nonatomic) NSMutableData *sendData; // @synthesize sendData=_sendData;
@property(nonatomic) long long orgPort; // @synthesize orgPort=_orgPort;
@property(retain, nonatomic) NSString *orgHost; // @synthesize orgHost=_orgHost;
@property(nonatomic) __weak id <BeaconAsyncSocketDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int socketState; // @synthesize socketState=_socketState;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)getAnErrorWithStream:(id)arg1;
- (void)dealSendData;
- (void)dealRecvData;
- (void)close;
- (void)closeWithError:(id)arg1;
- (void)connectTimeout:(id)arg1;
- (void)dealloc;
- (void)disconnect;
- (_Bool)isConnected;
- (void)sendData:(id)arg1 andTag:(long long)arg2;
- (_Bool)connectToHost:(id)arg1 onPort:(unsigned short)arg2 withTimeout:(double)arg3 error:(id *)arg4;
- (id)initWithDelegate:(id)arg1 delegateDealQueue:(id)arg2 socketDealThread:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

