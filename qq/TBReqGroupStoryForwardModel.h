//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/ITBPBGetData-Protocol.h>

@class NSString;

@interface TBReqGroupStoryForwardModel : NSObject <ITBPBGetData>
{
    unsigned int _type;
    unsigned int _time;
    unsigned long long _forwardTo;
    NSString *_vid;
}

@property(nonatomic) unsigned int time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(nonatomic) unsigned long long forwardTo; // @synthesize forwardTo=_forwardTo;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (id)getRequestPBData;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

