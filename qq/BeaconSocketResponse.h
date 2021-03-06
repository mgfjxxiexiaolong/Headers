//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/AnaLocalObjInitWithWupProtocol-Protocol.h>

@class NSData, NSMutableDictionary, NSString;

@interface BeaconSocketResponse : NSObject <AnaLocalObjInitWithWupProtocol>
{
    int statusCode;
    NSMutableDictionary *header;
    NSData *body;
    NSString *msg;
}

@property(retain, nonatomic) NSString *msg; // @synthesize msg;
@property(retain, nonatomic) NSData *body; // @synthesize body;
@property(retain, nonatomic) NSMutableDictionary *header; // @synthesize header;
@property(nonatomic) int statusCode; // @synthesize statusCode;
- (void)dealloc;
- (void)initWithWUPModel:(struct SocketResponse *)arg1;
- (void)initLocalObjWithWupBuffer:(JceInputStream_de19c559 *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

