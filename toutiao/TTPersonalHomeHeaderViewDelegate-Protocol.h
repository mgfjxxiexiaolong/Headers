//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TTPersonalHomeHeaderView;

@protocol TTPersonalHomeHeaderViewDelegate <NSObject>

@optional
- (void)headerView:(TTPersonalHomeHeaderView *)arg1 didSelectedMultiplePlatformFollowersInfoViewSpreadOut:(_Bool)arg2;
- (void)headerView:(TTPersonalHomeHeaderView *)arg1 didSelectedIntroduceSpreadOut:(_Bool)arg2;
- (void)headerView:(TTPersonalHomeHeaderView *)arg1 didSelectedFollowSpreadOut:(_Bool)arg2;
- (void)headerViewDidSelectedStar;
- (void)headerViewDidSelectedCertification;
- (void)headerViewDidSelectedPrivateMessage;
- (void)headerViewDidSelectedIconView;
- (void)headerViewDidSelectedProfile;
- (void)headerViewDidSelectedUnBlock;
- (void)headerViewDidSelectedCancelFollow;
- (void)headerViewDidSelectedFollow;
@end
