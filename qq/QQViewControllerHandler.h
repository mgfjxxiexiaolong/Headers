//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQGeneralInformationDelegate-Protocol.h>

@class NSString, QQReportLogModel;

@interface QQViewControllerHandler : NSObject <QQGeneralInformationDelegate>
{
    QQReportLogModel *_logModel;
}

@property(retain, nonatomic) QQReportLogModel *logModel; // @synthesize logModel=_logModel;
- (void)gotoUserSummary:(id)arg1;
- (id)showPublicAccountAIO:(id)arg1;
- (id)showQQWebViewController:(id)arg1;
- (id)showUserSummary:(id)arg1;
- (id)showCoupon:(id)arg1;
- (id)showMarketFace:(id)arg1;
- (id)showChatAvatarSetting:(id)arg1;
- (id)showPublicAccountCard:(id)arg1;
- (id)shareWithFriend:(id)arg1;
- (id)doRequest:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
