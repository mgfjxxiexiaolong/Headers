//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBSDKServerDelegate-Protocol.h"

@class NSString;

@interface TBECTIntercom : NSObject <TBSDKServerDelegate>
{
    _Bool _firing;
}

@property(nonatomic) _Bool firing; // @synthesize firing=_firing;
- (void)begFault:(id)arg1;
- (void)begOk:(id)arg1;
- (void)processUModel:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (_Bool)needGetoff:(id)arg1;
- (void)noticeRobotOver:(id)arg1 success:(_Bool)arg2 desc:(id)arg3;
- (_Bool)inspectFlyRobotData:(id)arg1 data:(id)arg2 error:(id)arg3 scene:(id)arg4;
- (void)subEndNotice:(id)arg1 suc:(_Bool)arg2 has:(_Bool)arg3 v:(id)arg4 des:(id)arg5;
- (void)getoffFly:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (void)fireM:(id)arg1;
- (void)fireC:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
