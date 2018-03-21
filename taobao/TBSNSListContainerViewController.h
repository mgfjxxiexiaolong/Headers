//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

@class NSDictionary, NSString, NSURL, TBSNSListContainer;

@interface TBSNSListContainerViewController : TBViewController
{
    NSString *_pageName;
    NSURL *_URL;
    NSDictionary *_query;
    TBSNSListContainer *_listContainer;
}

@property(retain, nonatomic) TBSNSListContainer *listContainer; // @synthesize listContainer=_listContainer;
@property(retain, nonatomic) NSDictionary *query; // @synthesize query=_query;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
- (void).cxx_destruct;
- (void)createContainerView;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

@end
