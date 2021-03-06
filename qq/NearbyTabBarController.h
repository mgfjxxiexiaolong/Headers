//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NearbyBaseViewController.h>

#import <QQMainProject/NearbyTabBarDelegate-Protocol.h>
#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSString, NearbyTabBar, UIColor, UIView;
@protocol NearbyTabBarControllerDelegate;

@interface NearbyTabBarController : NearbyBaseViewController <NearbyTabBarDelegate, UIGestureRecognizerDelegate>
{
    UIView *_contentView;
    unsigned long long _selectedIndex;
    NearbyTabBar *_tabBar;
    id <NearbyTabBarControllerDelegate> _delegate;
    struct CGPoint _panOriginPoint;
    _Bool _panChanged;
    _Bool _enableRightDragToGoBackOnFirstPage;
    _Bool _fromGuiderView;
    NSArray *_viewControllers;
    UIColor *_navBtnTitleColor;
}

@property(nonatomic) _Bool fromGuiderView; // @synthesize fromGuiderView=_fromGuiderView;
@property(retain, nonatomic) UIColor *navBtnTitleColor; // @synthesize navBtnTitleColor=_navBtnTitleColor;
@property(copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(nonatomic) _Bool enableRightDragToGoBackOnFirstPage; // @synthesize enableRightDragToGoBackOnFirstPage=_enableRightDragToGoBackOnFirstPage;
- (void).cxx_destruct;
- (void)changeSelectedIndexIfNeeded:(struct CGPoint)arg1;
- (void)changeSelectedIndex:(struct CGPoint)arg1;
- (void)tabBar:(id)arg1 didSelectIndex:(long long)arg2;
- (void)loadNearbyMyself;
- (void)statusBarDidChangeFrame;
- (void)loadTabBar;
- (id)currentViewController;
@property(nonatomic) unsigned long long selectedIndex; // @dynamic selectedIndex;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)registerNearbyTimeReporter;
- (void)logLeftNaviItem;
- (void)logButtonInfo:(id)arg1;
- (void)leftButtonClick:(id)arg1;
- (struct CGRect)contentRect:(id)arg1;
- (void)updateQQNavigationControllerPanGesture;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)colorForNavButton;
- (void)setLeftButton:(id)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) UIView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <NearbyTabBarControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NearbyTabBar *tabBar; // @dynamic tabBar;

@end

