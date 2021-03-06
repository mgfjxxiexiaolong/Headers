//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString;

@interface ProtoSyncOpCode2009 : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasPrincipalIdType;
    _Bool _hasPrincipalId;
    _Bool _hasNeedAck;
    _Bool _hasMsgId;
    _Bool _hasPayload;
    _Bool _hasServerIp;
    _Bool _needAck;
    int _principalIdType;
    unsigned int _serverIp;
    NSString *_principalId;
    NSString *_msgId;
    NSString *_payload;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) unsigned int serverIp; // @synthesize serverIp=_serverIp;
@property(retain, nonatomic) NSString *payload; // @synthesize payload=_payload;
@property(retain, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
@property(nonatomic) _Bool needAck; // @synthesize needAck=_needAck;
@property(retain, nonatomic) NSString *principalId; // @synthesize principalId=_principalId;
@property(nonatomic) int principalIdType; // @synthesize principalIdType=_principalIdType;
@property(readonly) _Bool hasServerIp; // @synthesize hasServerIp=_hasServerIp;
@property(readonly) _Bool hasPayload; // @synthesize hasPayload=_hasPayload;
@property(readonly) _Bool hasMsgId; // @synthesize hasMsgId=_hasMsgId;
@property(readonly) _Bool hasNeedAck; // @synthesize hasNeedAck=_hasNeedAck;
@property(readonly) _Bool hasPrincipalId; // @synthesize hasPrincipalId=_hasPrincipalId;
@property(readonly) _Bool hasPrincipalIdType; // @synthesize hasPrincipalIdType=_hasPrincipalIdType;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

