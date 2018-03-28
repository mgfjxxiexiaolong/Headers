//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "TTAccountMulticastProtocol-Protocol.h"
#import "TTHorizontalCategoryBarDelegate-Protocol.h"
#import "TTInteractExitProtocol-Protocol.h"
#import "TTSwipePageViewControllerDelegate-Protocol.h"

@class NSArray, NSString, SSThemedLabel, TTAlphaThemedButton, TTHorizontalCategoryBar, TTNavigationBarItemContainerView, TTSwipePageViewController;

@interface TTFavoriteHistoryViewController : SSViewControllerBase <TTSwipePageViewControllerDelegate, TTHorizontalCategoryBarDelegate, TTAccountMulticastProtocol, TTInteractExitProtocol>
{
    TTHorizontalCategoryBar *_topTabView;
    TTSwipePageViewController *_pageController;
    NSArray *_tabControllers;
    unsigned long long _initialIndex;
    SSThemedLabel *_titleLabel;
    TTNavigationBarItemContainerView *_rightView;
    TTAlphaThemedButton *_searchButton;
}

+ (id)stayIDArray;
+ (id)edittingTitleStringArray;
+ (id)titleStringArray;
@property(retain, nonatomic) TTAlphaThemedButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) TTNavigationBarItemContainerView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long initialIndex; // @synthesize initialIndex=_initialIndex;
@property(retain, nonatomic) NSArray *tabControllers; // @synthesize tabControllers=_tabControllers;
@property(retain, nonatomic) TTSwipePageViewController *pageController; // @synthesize pageController=_pageController;
@property(retain, nonatomic) TTHorizontalCategoryBar *topTabView; // @synthesize topTabView=_topTabView;
- (void).cxx_destruct;
- (void)themeChanged:(id)arg1;
- (id)suitableFinishBackView;
- (void)changeRightButtonTextIfNeededAtIndex:(unsigned long long)arg1;
- (void)disableEditButtonIfNeededForViewController:(id)arg1;
- (void)onAccountStatusChanged:(long long)arg1 platform:(id)arg2;
- (void)registerNotification;
- (struct UIOffset)offsetOfBadgeViewToTitleView;
- (struct UIEdgeInsets)insetForSection;
- (struct CGSize)sizeForEachItem:(id)arg1;
- (void)pageViewControllerWillBeginDragging:(id)arg1;
- (void)pageViewController:(id)arg1 didPagingToIndex:(long long)arg2;
- (void)pageViewController:(id)arg1 willPagingToIndex:(long long)arg2;
- (void)pageViewController:(id)arg1 pagingFromIndex:(long long)arg2 toIndex:(long long)arg3 completePercent:(double)arg4;
- (void)_editActionFired:(id)arg1;
- (void)setupViewControllers;
- (void)setupSwipeViewController;
- (id)p_generateBarButtonWithImageName:(id)arg1 selector:(SEL)arg2;
- (void)_showSearchViewController;
- (void)showSearchPageViewController;
- (void)initRightBarButtonsWithSearchButtonEnable:(_Bool)arg1;
- (void)setupNavigationBar;
- (void)setupComponents;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithRouteParamObj:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
