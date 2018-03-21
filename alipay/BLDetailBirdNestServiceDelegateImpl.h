//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BLMenuItemViewDelegate-Protocol.h"

@class APBirdNestAppViewController, BLDataEngine, NSDictionary, NSString;

@interface BLDetailBirdNestServiceDelegateImpl : NSObject <BLMenuItemViewDelegate>
{
    _Bool _basebizUserStatusChanged;
    NSString *_gotoUrl;
    BLDataEngine *_dataEngine;
    APBirdNestAppViewController *_viewController;
    NSString *_notifyAction;
    NSString *_autoClick;
    NSDictionary *_params;
}

@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *autoClick; // @synthesize autoClick=_autoClick;
@property(retain, nonatomic) NSString *notifyAction; // @synthesize notifyAction=_notifyAction;
@property(nonatomic) __weak APBirdNestAppViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) _Bool basebizUserStatusChanged; // @synthesize basebizUserStatusChanged=_basebizUserStatusChanged;
@property(retain, nonatomic) BLDataEngine *dataEngine; // @synthesize dataEngine=_dataEngine;
@property(retain, nonatomic) NSString *gotoUrl; // @synthesize gotoUrl=_gotoUrl;
- (void).cxx_destruct;
- (void)refreshEvent;
- (void)nameIdentifyCertifyNotify;
- (void)doNotifyRefresh;
- (void)doNotifyBack;
- (void)doNotifySuccess:(id)arg1;
- (void)registerNotifications;
- (void)setBadgeWithBizInNo:(id)arg1;
- (void)popMenu:(id)arg1;
- (void)naviItemViewClicked:(id)arg1;
- (void)APBirdNestServiceViewDidAppear:(id)arg1;
- (void)APBirdNestServiceViewDidLoad:(id)arg1;
- (void)APBirdNestServiceBack:(id)arg1;
- (void)APBirdNestServiceAsyncSubmit:(id)arg1 params:(id)arg2 block:(CDUnknownBlockType)arg3;
- (_Bool)APBirdNestServiceSubmit:(id)arg1 params:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
