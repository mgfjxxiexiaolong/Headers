//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, TTShareManager;
@protocol TTActivityPanelControllerProtocol, TTActivityProtocol;

@protocol TTShareManagerDelegate <NSObject>

@optional
- (void)shareManager:(TTShareManager *)arg1 completedWith:(id <TTActivityProtocol>)arg2 sharePanel:(id <TTActivityPanelControllerProtocol>)arg3 error:(NSError *)arg4 desc:(NSString *)arg5;
- (void)shareManager:(TTShareManager *)arg1 clickedWith:(id <TTActivityProtocol>)arg2 sharePanel:(id <TTActivityPanelControllerProtocol>)arg3;
@end

