//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSThirdPardFriendsViewController.h"

#import "KSURLPortalAnnotation-Protocol.h"

@class KSAddressBookModel, KSContactModel, NSString, UIAlertView, UIButton, UIImageView;

@interface KSAddressBookViewController : KSThirdPardFriendsViewController <KSURLPortalAnnotation>
{
    _Bool _showingAlert;
    KSContactModel *_contectModel;
    KSAddressBookModel *_addressBookModel;
    UIButton *_bindButton;
    UIImageView *_bingBtnView;
    UIAlertView *_alert;
}

+ (id)ks_portalPath;
@property(nonatomic) _Bool showingAlert; // @synthesize showingAlert=_showingAlert;
@property(retain, nonatomic) UIAlertView *alert; // @synthesize alert=_alert;
@property(retain, nonatomic) UIImageView *bingBtnView; // @synthesize bingBtnView=_bingBtnView;
@property(retain, nonatomic) UIButton *bindButton; // @synthesize bindButton=_bindButton;
@property(retain, nonatomic) KSAddressBookModel *addressBookModel; // @synthesize addressBookModel=_addressBookModel;
@property(retain, nonatomic) KSContactModel *contectModel; // @synthesize contectModel=_contectModel;
- (void).cxx_destruct;
- (void)showNeedContractsPermissionMessage;
- (void)showBindHeader;
- (void)showBindPhoneAlertOrHeader;
- (void)didTapBindHeader:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (_Bool)ks_presentViewNeedUserAvailable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
