//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, YiCustomerService, YiEvaluation, YiMessage, YiService;

@protocol YiIMServiceDelegate <NSObject>

@optional
- (void)service:(YiService *)arg1 didRequireComment:(YiEvaluation *)arg2;
- (void)service:(YiService *)arg1 didConectToCustomerService:(YiCustomerService *)arg2;
- (void)service:(YiService *)arg1 didReceivedError:(NSError *)arg2;
- (void)service:(YiService *)arg1 didReceivedMessage:(YiMessage *)arg2;
- (void)yiImServiceResumed:(YiService *)arg1;
- (void)yiImServiceResuming:(YiService *)arg1;
- (void)yiImServicePaused:(YiService *)arg1 error:(NSError *)arg2;
- (void)yiImServicePaused:(YiService *)arg1;
@end
