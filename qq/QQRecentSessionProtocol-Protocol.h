//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class QQNavigationController;
@protocol QQPreviewDelegate;

@protocol QQRecentSessionProtocol <NSObject>
- (int)typeOfSession;
- (void)peekViewController:(QQNavigationController *)arg1 fetchVCDelegate:(id <QQPreviewDelegate>)arg2;
- (void)selectViewController:(QQNavigationController *)arg1;
- (void)deleteMessageViewCell;
@end

