//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSObject, NSString, UIView, UIViewController, UIWebView;

@protocol ALAUserTrackProtocol <NSObject>
- (void)endPerformanceUserTrackWithType:(NSString *)arg1 onPage:(NSString *)arg2 endPhase:(NSString *)arg3 eventType:(NSString *)arg4 eventId:(int)arg5 userInfo:(NSDictionary *)arg6;
- (void)endPerformanceUserTrackWithType:(NSString *)arg1 onPage:(NSString *)arg2 endPhase:(NSString *)arg3;
- (void)endPerformanceUserTrackWithType:(NSString *)arg1 onPage:(NSString *)arg2 endPhase:(NSString *)arg3 eventId:(int)arg4 userInfo:(NSDictionary *)arg5;
- (void)addPerformanceUserTrackWithType:(NSString *)arg1 phaseEnd:(NSString *)arg2 onPage:(NSString *)arg3 eventType:(NSString *)arg4 eventId:(int)arg5 userInfo:(NSDictionary *)arg6;
- (void)addPerformanceUserTrackWithType:(NSString *)arg1 phaseBegin:(NSString *)arg2 onPage:(NSString *)arg3 eventType:(NSString *)arg4 eventId:(int)arg5 userInfo:(NSDictionary *)arg6;
- (void)startPerformanceUserTrackWithType:(NSString *)arg1 onPage:(NSString *)arg2 eventType:(NSString *)arg3 eventId:(int)arg4 userInfo:(NSDictionary *)arg5;
- (void)startPerformanceUserTrackWithType:(NSString *)arg1 onPage:(NSString *)arg2 eventId:(int)arg3;
- (void)et_updateViewProperties:(UIView *)arg1 properties:(NSDictionary *)arg2;
- (void)et_updateViewControllerProperties:(UIViewController *)arg1 properties:(NSDictionary *)arg2;
- (void)et_ctrlClickedWithQueryParentViewController:(UIView *)arg1 actionName:(NSString *)arg2 properties:(NSDictionary *)arg3;
- (void)et_viewCtrlClicked:(UIView *)arg1 actionName:(NSString *)arg2 properties:(NSDictionary *)arg3;
- (void)et_viewControllerCtrlClicked:(UIViewController *)arg1 actionName:(NSString *)arg2 properties:(NSDictionary *)arg3;
- (void)et_viewLeave:(UIView *)arg1 properties:(NSDictionary *)arg2;
- (void)et_viewEnter:(UIView *)arg1 properties:(NSDictionary *)arg2;
- (void)et_updateViewControllerPageName:(UIViewController *)arg1 pageName:(NSString *)arg2;
- (void)setH5Url:(NSString *)arg1;
- (void)h5UT:(NSDictionary *)arg1 vc:(UIWebView *)arg2;
- (void)updateUserAccount:(NSString *)arg1 userid:(NSString *)arg2 args:(NSDictionary *)arg3;
- (void)commitEvent:(int)arg1 arg1:(NSString *)arg2 arg2:(NSString *)arg3 arg3:(NSString *)arg4 args:(NSDictionary *)arg5;
- (void)commitEvent:(int)arg1 arg1:(NSString *)arg2 arg2:(NSString *)arg3 arg3:(NSString *)arg4;
- (void)commitEvent:(int)arg1 arg1:(NSString *)arg2 arg2:(NSString *)arg3;
- (void)commitEvent:(int)arg1 arg1:(NSString *)arg2;
- (void)commitEvent:(int)arg1;
- (void)commitEvent:(NSString *)arg1 dict:(NSDictionary *)arg2;
- (void)ctrlClicked:(NSString *)arg1 onPage:(NSObject *)arg2 args:(NSDictionary *)arg3 action:(NSString *)arg4 objectType:(NSString *)arg5 objectId:(NSString *)arg6;
- (void)ctrlClicked:(NSString *)arg1 onPage:(NSObject *)arg2 args:(NSDictionary *)arg3;
- (void)ctrlClicked:(NSString *)arg1 args:(NSDictionary *)arg2 action:(NSString *)arg3 objectType:(NSString *)arg4 objectId:(NSString *)arg5;
- (void)ctrlClicked:(NSString *)arg1 args:(NSDictionary *)arg2;
- (void)ctrlClicked:(NSString *)arg1 onPage:(NSObject *)arg2;
- (void)ctrlClicked:(NSString *)arg1;
- (void)enter:(id)arg1 args:(NSDictionary *)arg2;
- (void)enter:(id)arg1 from:(id)arg2;
- (void)enter:(id)arg1;
@end

