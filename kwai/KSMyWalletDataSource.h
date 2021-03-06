//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSTableViewDataSource-Protocol.h"

@class KSPurchaseHeader, NSArray, NSMutableArray, NSString;

@interface KSMyWalletDataSource : NSObject <KSTableViewDataSource>
{
    NSMutableArray *_otherItems;
    KSPurchaseHeader *_purchaseHeader;
    NSMutableArray *_kCoinItems;
    NSArray *_mineItems;
}

@property(readonly, nonatomic) NSArray *mineItems; // @synthesize mineItems=_mineItems;
@property(readonly, nonatomic) NSMutableArray *kCoinItems; // @synthesize kCoinItems=_kCoinItems;
@property(retain, nonatomic) KSPurchaseHeader *purchaseHeader; // @synthesize purchaseHeader=_purchaseHeader;
@property(retain, nonatomic) NSMutableArray *otherItems; // @synthesize otherItems=_otherItems;
- (void).cxx_destruct;
- (CDUnknownBlockType)blockWithSelecter:(SEL)arg1;
- (void)updateCharitableStateWith:(long long)arg1;
- (void)reloadHeaderWithAnimation:(_Bool)arg1;
- (void)didTapCellAtIndexPath:(id)arg1 viewController:(id)arg2;
- (id)itemAtIndexPath:(id)arg1;
- (id)tableViewHeader:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

