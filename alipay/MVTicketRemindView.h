//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDelegate-Protocol.h"

@class MVSeatTicketModel, MVTableViewDataSource, MVTicketRemindTableView, NSString, UIScrollView;

@interface MVTicketRemindView : UIView <UITableViewDelegate>
{
    MVSeatTicketModel *_ticket;
    MVTableViewDataSource *_dataSource;
    UIScrollView *_scrollView;
    MVTicketRemindTableView *_tableView;
}

@property(retain, nonatomic) MVTicketRemindTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) MVTableViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) MVSeatTicketModel *ticket; // @synthesize ticket=_ticket;
- (void).cxx_destruct;
- (void)dismiss;
- (void)show;
- (id)initWithTicketModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
