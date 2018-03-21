//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "EWTableViewDelegate-Protocol.h"

@class EWBaseViewModel, NSString, UITableView;

@interface EWBaseSectionDelegate : NSObject <EWTableViewDelegate>
{
    UITableView *_tableView;
    EWBaseViewModel *_viewModel;
}

@property(retain, nonatomic) EWBaseViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (_Bool)hasData;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
