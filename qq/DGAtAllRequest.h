//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/SAMRequestItem.h>

@interface DGAtAllRequest : SAMRequestItem
{
    _Bool _sucess;
    _Bool _priviledge;
    long long _uin;
    long long _discussUin;
    long long _uin_remain;
    long long _discussUin_remain;
}

@property(nonatomic) _Bool priviledge; // @synthesize priviledge=_priviledge;
@property(nonatomic) long long discussUin_remain; // @synthesize discussUin_remain=_discussUin_remain;
@property(nonatomic) long long uin_remain; // @synthesize uin_remain=_uin_remain;
@property(nonatomic) long long discussUin; // @synthesize discussUin=_discussUin;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
@property(nonatomic) _Bool sucess; // @synthesize sucess=_sucess;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (id)serviceCmd;

@end
