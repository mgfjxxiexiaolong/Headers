//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSArray, NSMutableDictionary, NSString;

@interface QQAvatarInfo : QQModel
{
    NSString *_uin;
    NSString *_groupUin;
    NSString *_tinyId;
    NSString *_phone;
    int _type;
    BOOL _faceType;
    short _systemAvatarId;
    NSString *_baseUrl;
    BOOL _faceFlag;
    unsigned int _timestamp;
    NSString *_host;
    NSString *_infoKey;
    NSMutableDictionary *_urlCachesState;
    int _xo;
    NSArray *_urls;
    NSString *_verifyString;
}

@property(readonly, nonatomic) NSString *verifyString; // @synthesize verifyString=_verifyString;
- (void).cxx_destruct;
- (id)description;
- (id)identity;
- (_Bool)isEqual:(id)arg1;
- (id)makeAppropriateUrlBySize:(int)arg1;
- (struct CGSize)size;
- (id)initWithUin:(id)arg1 groupUin:(id)arg2 tinyId:(id)arg3 phone:(id)arg4 type:(int)arg5 faceType:(BOOL)arg6 systemAvatarId:(short)arg7 baseUrl:(id)arg8 faceFlag:(BOOL)arg9 timestamp:(unsigned int)arg10 verifyString:(id)arg11;

// Remaining properties
@property(readonly, nonatomic) NSString *baseUrl; // @dynamic baseUrl;
@property(readonly, nonatomic) BOOL faceFlag; // @dynamic faceFlag;
@property(readonly, nonatomic) BOOL faceType; // @dynamic faceType;
@property(readonly, nonatomic) NSString *groupUin; // @dynamic groupUin;
@property(readonly, nonatomic) NSString *host; // @dynamic host;
@property(retain, nonatomic) NSString *infoKey; // @dynamic infoKey;
@property(readonly, nonatomic) NSString *phone; // @dynamic phone;
@property(readonly, nonatomic) short systemAvatarId; // @dynamic systemAvatarId;
@property(readonly, nonatomic) unsigned int timestamp; // @dynamic timestamp;
@property(readonly, nonatomic) NSString *tinyId; // @dynamic tinyId;
@property(readonly, nonatomic) int type; // @dynamic type;
@property(readonly, nonatomic) NSString *uin; // @dynamic uin;
@property(retain, nonatomic) NSMutableDictionary *urlCachesState; // @dynamic urlCachesState;

@end

