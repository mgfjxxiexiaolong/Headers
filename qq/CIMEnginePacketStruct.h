//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CIMEnginePacketStruct : NSObject
{
    unsigned long long _sendSeq;
    unsigned long long _sendTime;
    char *_sendCmd;
    int _failReason;
}

@property(nonatomic) int failReason; // @synthesize failReason=_failReason;
@property(nonatomic) char *sendCmd; // @synthesize sendCmd=_sendCmd;
@property(nonatomic) unsigned long long sendTime; // @synthesize sendTime=_sendTime;
@property(nonatomic) unsigned long long sendSeq; // @synthesize sendSeq=_sendSeq;
- (id)description;
- (void)dealloc;

@end
