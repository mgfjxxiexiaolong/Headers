//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "STPCoreTableViewController.h"

#import "STPAddCardViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, STPAddress, STPPaymentConfiguration, STPUserInformation, UIImageView;
@protocol STPPaymentMethod, STPPaymentMethodsInternalViewControllerDelegate;

@interface STPPaymentMethodsInternalViewController : STPCoreTableViewController <UITableViewDataSource, UITableViewDelegate, STPAddCardViewControllerDelegate>
{
    STPPaymentConfiguration *_configuration;
    STPUserInformation *_prefilledInformation;
    STPAddress *_shippingAddress;
    NSArray *_paymentMethods;
    id <STPPaymentMethod> _selectedPaymentMethod;
    id <STPPaymentMethodsInternalViewControllerDelegate> _delegate;
    UIImageView *_cardImageView;
}

@property(nonatomic) __weak UIImageView *cardImageView; // @synthesize cardImageView=_cardImageView;
@property(nonatomic) __weak id <STPPaymentMethodsInternalViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <STPPaymentMethod> selectedPaymentMethod; // @synthesize selectedPaymentMethod=_selectedPaymentMethod;
@property(retain, nonatomic) NSArray *paymentMethods; // @synthesize paymentMethods=_paymentMethods;
@property(retain, nonatomic) STPAddress *shippingAddress; // @synthesize shippingAddress=_shippingAddress;
@property(retain, nonatomic) STPUserInformation *prefilledInformation; // @synthesize prefilledInformation=_prefilledInformation;
@property(retain, nonatomic) STPPaymentConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)addCardViewController:(id)arg1 didCreateToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addCardViewControllerDidCancel:(id)arg1;
- (void)updateWithPaymentMethodTuple:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)handleBackOrCancelTapped:(id)arg1;
- (void)createAndSetupViews;
- (id)initWithConfiguration:(id)arg1 theme:(id)arg2 prefilledInformation:(id)arg3 shippingAddress:(id)arg4 paymentMethodTuple:(id)arg5 delegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

