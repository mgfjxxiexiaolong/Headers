//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FBSDKMessengerURLHandlerDelegate;

@interface FBSDKMessengerURLHandler : NSObject
{
    id <FBSDKMessengerURLHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBSDKMessengerURLHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_valueForKey:(id)arg1 fromComponents:(id)arg2;
- (void)_processCancel;
- (void)_processOpenFromComposer:(id)arg1;
- (void)_processReply:(id)arg1;
- (id)_appIDsForExtras:(id)arg1;
- (id)_appLinkParamsForURL:(id)arg1;
- (id)_appLinksDictionary:(id)arg1;
- (_Bool)openURL:(id)arg1 sourceApplication:(id)arg2;
- (_Bool)canOpenURL:(id)arg1 sourceApplication:(id)arg2;

@end
