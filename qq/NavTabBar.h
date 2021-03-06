//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIColor, UIScrollView;
@protocol NavTabBarDelegate;

@interface NavTabBar : UIView
{
    UIScrollView *_navgationTabBar;
    UIView *_line;
    NSMutableArray *_items;
    NSMutableArray *_itemsWidth;
    long long _lastItemIndex;
    UIView *_upSeparatorLine;
    UIView *_downSeparatorLine;
    id <NavTabBarDelegate> _delegate;
    long long _currentItemIndex;
    NSArray *_itemTitles;
    UIColor *_lineColor;
}

@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(retain, nonatomic) NSArray *itemTitles; // @synthesize itemTitles=_itemTitles;
@property(nonatomic) long long currentItemIndex; // @synthesize currentItemIndex=_currentItemIndex;
@property(nonatomic) __weak id <NavTabBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)adjustNavTabBarLayout;
- (void)loadPersonTheme;
- (void)reloadAppearance;
- (void)getButtonsWidthWithTitles:(id)arg1;
- (void)itemPressed:(id)arg1;
- (void)updateSelectedButtonTitleColor;
- (struct CGPoint)centerForButtonIndex:(unsigned long long)arg1;
- (double)contentWidthAndAddNavTabBarItemsWithButtonsWidth:(id)arg1;
- (void)showLineWithButtonWidth:(double)arg1;
- (void)initUI;
- (void)updateBarBackgroundColorNormal;
- (void)updateData;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

