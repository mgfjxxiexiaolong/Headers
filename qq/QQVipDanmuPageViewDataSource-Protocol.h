//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSArray, QQVipDanmuPageView, QQVipDanmuTextView;

@protocol QQVipDanmuPageViewDataSource <NSObject>
- (_Bool)tryPauseDisplay:(QQVipDanmuPageView *)arg1;
- (_Bool)tryStartDisplay:(QQVipDanmuPageView *)arg1;
- (_Bool)shouldDisplayNext:(QQVipDanmuPageView *)arg1 withEndBullet:(QQVipDanmuTextView *)arg2;
- (_Bool)shouldSlowNext:(QQVipDanmuPageView *)arg1 withEndBullet:(QQVipDanmuTextView *)arg2;
- (NSArray *)bulletForRightNext:(QQVipDanmuPageView *)arg1 withEndBullet:(QQVipDanmuTextView *)arg2;
@end
