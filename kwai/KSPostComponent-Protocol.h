//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSCameraWarmable-Protocol.h"

@class UIGestureRecognizer;

@protocol KSPostComponent <KSCameraWarmable>
@property(nonatomic) _Bool active;
- (long long)preferredBottomBarStyle;
- (void)prepareComponentPermissions;
- (_Bool)disablePageGestureRecognizerShouldBegin:(UIGestureRecognizer *)arg1;

@optional
@property(nonatomic) struct UIEdgeInsets ks_additionalSafeAreaInsetsForBelowIOS11;
@end

