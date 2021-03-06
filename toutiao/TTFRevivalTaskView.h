//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIWebViewDelegate-Protocol.h"

@class NSDictionary, NSString, TTFBridgeTracker, TTFRevivalTaskBridge, TTFRevivalWebViewDomBridge, UIButton, UIImageView, UILabel;
@protocol TTFRevivalTaskDelegate, TTFWebViewProtocol;

@interface TTFRevivalTaskView : UIView <UIWebViewDelegate>
{
    _Bool _didFinishLoad;
    _Bool _isViewShow;
    NSDictionary *_trackerDict;
    UIView *_backgroundMaskView;
    UIView *_containerView;
    UIButton *_closeButton;
    UILabel *_titleLabel;
    UIImageView *_headIconView;
    id <TTFWebViewProtocol> _webviewAdaptor;
    TTFBridgeTracker *_tracker;
    TTFRevivalTaskBridge *_revivalTaskBridge;
    TTFRevivalWebViewDomBridge *_domBridge;
    id <TTFRevivalTaskDelegate> _taskDelegate;
}

+ (id)getAppParameterSet;
+ (id)getAppendedQueryString;
@property(nonatomic) _Bool isViewShow; // @synthesize isViewShow=_isViewShow;
@property(nonatomic) _Bool didFinishLoad; // @synthesize didFinishLoad=_didFinishLoad;
@property(nonatomic) __weak id <TTFRevivalTaskDelegate> taskDelegate; // @synthesize taskDelegate=_taskDelegate;
@property(retain, nonatomic) TTFRevivalWebViewDomBridge *domBridge; // @synthesize domBridge=_domBridge;
@property(retain, nonatomic) TTFRevivalTaskBridge *revivalTaskBridge; // @synthesize revivalTaskBridge=_revivalTaskBridge;
@property(retain, nonatomic) TTFBridgeTracker *tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <TTFWebViewProtocol> webviewAdaptor; // @synthesize webviewAdaptor=_webviewAdaptor;
@property(retain, nonatomic) UIImageView *headIconView; // @synthesize headIconView=_headIconView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *backgroundMaskView; // @synthesize backgroundMaskView=_backgroundMaskView;
@property(copy, nonatomic) NSDictionary *trackerDict; // @synthesize trackerDict=_trackerDict;
- (void).cxx_destruct;
- (void)linearAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hide;
- (void)showInView:(id)arg1;
- (_Bool)isURLInWhiteList:(id)arg1;
- (id)urlRequestAppendCommentParams:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)preloadInView:(id)arg1;
- (void)requestRevivalTask:(_Bool)arg1;
- (void)injectObjectToJSContext:(id)arg1;
- (id)jsContext;
- (void)rebuildWebview;
- (void)initComponents;
- (void)ttf_accountStatusChangeNotification:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 taskDelegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

