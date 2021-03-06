//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, NSTimer, QQAsynUrlImageView, UIButton, UIImageView, UILabel;

@interface QQVIPFunctionTipsView : UIView
{
    long long _type;
    NSString *_imageName;
    NSString *_contentString;
    NSString *_uniqueViewID;
    NSTimer *_autoDismiss;
    UILabel *_label;
    UIButton *_bg;
    QQAsynUrlImageView *_readerView;
    UIImageView *_arrowView;
    CDUnknownBlockType _tapBlock;
}

@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) QQAsynUrlImageView *readerView; // @synthesize readerView=_readerView;
@property(retain, nonatomic) UIButton *bg; // @synthesize bg=_bg;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) NSTimer *autoDismiss; // @synthesize autoDismiss=_autoDismiss;
@property(retain, nonatomic) NSString *uniqueViewID; // @synthesize uniqueViewID=_uniqueViewID;
@property(retain, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)didPushBannerClickedUp;
- (void)didPushBannerClickedDown;
- (void)handleTapRecognizer;
- (void)dealloc;
- (void)autoDismissAction;
- (void)onQQWillLogoutCurrentAccountNotification;
- (void)onRemove;
- (void)onFontChange;
- (void)refreshUIFrame;
- (void)setAutoDismissTimer;
- (id)initWithFrame:(struct CGRect)arg1 withImageNamed:(id)arg2 withContentString:(id)arg3 withTapBlock:(CDUnknownBlockType)arg4;

@end

