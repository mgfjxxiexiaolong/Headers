//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, UIScrollView;

@protocol TBPSPhotoSearchResultViewControllerDelegate <NSObject>

@optional
- (void)cancelAnimation:(_Bool)arg1;
- (void)shouldContract:(UIScrollView *)arg1;
- (void)shouldExpand:(UIScrollView *)arg1;
- (void)showSearchBar:(NSDictionary *)arg1;
- (void)share:(id)arg1;
- (void)adjustNaviBarTitle;
- (void)showShare;
- (void)showMenu:(NSArray *)arg1;
- (void)showNaviBar;
- (void)TBOpenURL:(NSString *)arg1;
- (void)camera:(id)arg1;
- (void)backView:(id)arg1;
@end

