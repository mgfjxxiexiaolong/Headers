//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SDCGICommonHead : NSObject
{
    unsigned int _pid;
    unsigned int _seq;
    unsigned int _flag;
    unsigned long long _din;
    unsigned long long _tinyid;
    NSString *_sn;
}

@property unsigned int flag; // @synthesize flag=_flag;
@property unsigned int seq; // @synthesize seq=_seq;
@property(copy, nonatomic) NSString *sn; // @synthesize sn=_sn;
@property unsigned int pid; // @synthesize pid=_pid;
@property unsigned long long tinyid; // @synthesize tinyid=_tinyid;
@property unsigned long long din; // @synthesize din=_din;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *version;
@property(readonly, nonatomic) NSString *uinA2;
@property(readonly) unsigned int uin;

@end

