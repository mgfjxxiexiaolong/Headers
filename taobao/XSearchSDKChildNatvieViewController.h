//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XSearchSDKChildBaseViewController.h"

@class XSearchCollectionViewComponent, XSearchSDKChildComponent;

@interface XSearchSDKChildNatvieViewController : XSearchSDKChildBaseViewController
{
    XSearchSDKChildComponent *_childComponent;
    XSearchCollectionViewComponent *_collectionViewComponent;
}

@property(retain, nonatomic) XSearchCollectionViewComponent *collectionViewComponent; // @synthesize collectionViewComponent=_collectionViewComponent;
@property(retain, nonatomic) XSearchSDKChildComponent *childComponent; // @synthesize childComponent=_childComponent;
- (void).cxx_destruct;
- (double)listHeaderViewHeight;
- (void)childScrollToTop;
- (void)childComponentSearchFailed:(id)arg1 Error:(id)arg2;
- (void)childComponentSearchSuccess:(id)arg1;
- (void)childComponentSearchStart:(id)arg1;
- (void)findScroll;
- (id)getStickyHeaderView;
- (void)headerLayout;
- (void)tabSearch;
- (void)filterSearch;
- (void)reloadData;
- (void)viewDidLoad;
- (id)initWithService:(id)arg1 Delegate:(id)arg2;

@end

