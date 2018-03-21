//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBBuyTableViewAdapterProtocol-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, TBBuyKit;
@protocol UIScrollViewDelegate;

@interface TBBuyAdapter : NSObject <TBBuyTableViewAdapterProtocol>
{
    NSMutableArray *_dataSource;
    id <UIScrollViewDelegate> _delegate;
    TBBuyKit *_tbbuykit;
    NSDictionary *_bundleCellMap;
}

@property(retain, nonatomic) NSDictionary *bundleCellMap; // @synthesize bundleCellMap=_bundleCellMap;
@property(retain, nonatomic) TBBuyKit *tbbuykit; // @synthesize tbbuykit=_tbbuykit;
@property(nonatomic) __weak id <UIScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)setController:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)cellNameFromModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
