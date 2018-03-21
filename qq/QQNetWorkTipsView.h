//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/UIActionSheetDelegate-Protocol.h>

@class NSString, UIButton, UIColor, UIFont, UIImage, UILabel, UIProgressView;
@protocol QQNetWorkTipsViewDelegate;

@interface QQNetWorkTipsView : UIView <UIActionSheetDelegate>
{
    UIImage *_backgroundImage;
    UIImage *_errorTipsImage;
    UIButton *_checkOtherButton;
    UILabel *processLabel;
    long long total;
    UIProgressView *progress;
    NSString *_titleString;
    NSString *_contentString;
    UIFont *_titleFont;
    UIFont *_contentFont;
    UIColor *_fontColor;
    struct CGRect _rectBackground;
    struct CGRect _rectErrorTips;
    struct CGRect _rectCheckButton;
    struct CGRect _rectTitle;
    struct CGRect _rectContent;
    _Bool _isShow;
    UIView *_superView;
    id <QQNetWorkTipsViewDelegate> _delegate;
}

@property(nonatomic) id <QQNetWorkTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didCheckButtonSender:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)initState;
- (void)setTotal:(long long)arg1;
- (void)cancelUpLoad;
- (void)removeView;
- (void)hiddenDidStop;
- (void)showDidStop;
- (void)dismiss;
- (void)show;
- (_Bool)isShow;
- (void)showInSuperView:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)removeMe;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
