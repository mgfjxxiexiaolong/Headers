//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTFBridgeShareToFriendsDelegate-Protocol.h"

@class JSContext, UIViewController;
@protocol TTFWebViewProtocol;

@interface TTFBridgeShareToFriends : NSObject <TTFBridgeShareToFriendsDelegate>
{
    id <TTFWebViewProtocol> _webviewAdaptor;
    JSContext *_context;
    UIViewController *_controller;
    long long _activity_id;
}

@property(nonatomic) long long activity_id; // @synthesize activity_id=_activity_id;
@property(nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
@property(nonatomic) __weak JSContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <TTFWebViewProtocol> webviewAdaptor; // @synthesize webviewAdaptor=_webviewAdaptor;
- (void).cxx_destruct;
- (void)shareToFriends:(id)arg1;

@end
