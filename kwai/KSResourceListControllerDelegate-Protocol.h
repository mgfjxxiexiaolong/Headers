//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KSResourceListViewController;
@protocol KSResourceManager;

@protocol KSResourceListControllerDelegate <NSObject>

@optional
- (void)resourceListViewControllerFinishUpdate:(KSResourceListViewController *)arg1;
- (void)resourceListViewController:(KSResourceListViewController *)arg1 selectedResouceBecomesAvailable:(id <KSResourceManager>)arg2;
- (void)resourceListViewController:(KSResourceListViewController *)arg1 didSelectResource:(id <KSResourceManager>)arg2;
@end

