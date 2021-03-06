//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/ITBPBParseData-Protocol.h>

@class NSString, TBErrorInfo;

@interface TBRspTranslateToken : NSObject <ITBPBParseData>
{
    unsigned int _shootTime;
    TBErrorInfo *_error;
    NSString *_dstBuffer;
    NSString *_coverUrl;
    NSString *_oldestVid;
}

@property(retain, nonatomic) NSString *oldestVid; // @synthesize oldestVid=_oldestVid;
@property(nonatomic) unsigned int shootTime; // @synthesize shootTime=_shootTime;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) NSString *dstBuffer; // @synthesize dstBuffer=_dstBuffer;
@property(retain, nonatomic) TBErrorInfo *error; // @synthesize error=_error;
@property(readonly, copy) NSString *description;
- (_Bool)parsePBData:(char *)arg1 withLength:(int)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

