//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <QQMainProject/QQGroupRobotAnimationViewDelegate-Protocol.h>

@class NSArray, NSString, QQGroupRobotAnimationView, UIImage, UIWindow;
@protocol QQGroupRobotAnimationVCDelegate;

@interface QQGroupRobotAnimationViewController : UIViewController <QQGroupRobotAnimationViewDelegate>
{
    UIWindow *_mainWindow;
    NSString *_resID;
    NSArray *_memUin;
    UIWindow *_animationWindow;
    QQGroupRobotAnimationView *_animationView;
    UIImage *_iconImg;
    int _xo;
    id <QQGroupRobotAnimationVCDelegate> _delegate;
}

@property(nonatomic) id <QQGroupRobotAnimationVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didClickCloseBtn:(id)arg1;
- (void)play:(CDUnknownBlockType)arg1;
- (void)stop;
- (struct CGRect)getWindowFrame;
- (void)dealloc;
- (id)initWithResID:(id)arg1 withMemUin:(id)arg2;

// Remaining properties
@property(retain, nonatomic) QQGroupRobotAnimationView *animationView; // @dynamic animationView;
@property(retain, nonatomic) UIWindow *animationWindow; // @dynamic animationWindow;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIImage *iconImg; // @dynamic iconImg;
@property(retain, nonatomic) NSArray *memUin; // @dynamic memUin;
@property(retain, nonatomic) NSString *resID; // @dynamic resID;
@property(readonly) Class superclass;

@end
