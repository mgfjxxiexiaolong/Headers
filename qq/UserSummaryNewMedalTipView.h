//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/CAAnimationDelegate-Protocol.h>
#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>

@class MedalInfoModel, NSString, UIButton, UIImageView, UILabel;
@protocol UserSummaryNewMedalTipViewDelegate;

@interface UserSummaryNewMedalTipView : UIView <UIGestureRecognizerDelegate, CAAnimationDelegate>
{
    MedalInfoModel *_medalInfoModel;
    id <UserSummaryNewMedalTipViewDelegate> _delegate;
    UIImageView *_leftSquareImageView;
    UILabel *_medalCountLabel;
    UIImageView *_rightSquareImageView;
    UILabel *_medalNameLabel;
    UIImageView *_medalLevelImageView;
    UIButton *_shareButton;
    UIButton *_enterMyMedalWallButton;
    UIButton *_closeButton;
}

@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak UIButton *enterMyMedalWallButton; // @synthesize enterMyMedalWallButton=_enterMyMedalWallButton;
@property(nonatomic) __weak UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(nonatomic) __weak UIImageView *medalLevelImageView; // @synthesize medalLevelImageView=_medalLevelImageView;
@property(nonatomic) __weak UILabel *medalNameLabel; // @synthesize medalNameLabel=_medalNameLabel;
@property(nonatomic) __weak UIImageView *rightSquareImageView; // @synthesize rightSquareImageView=_rightSquareImageView;
@property(nonatomic) __weak UILabel *medalCountLabel; // @synthesize medalCountLabel=_medalCountLabel;
@property(nonatomic) __weak UIImageView *leftSquareImageView; // @synthesize leftSquareImageView=_leftSquareImageView;
@property(retain, nonatomic) id <UserSummaryNewMedalTipViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MedalInfoModel *medalInfoModel; // @synthesize medalInfoModel=_medalInfoModel;
- (void).cxx_destruct;
- (void)closePage;
- (void)enterMyMedalWall:(id)arg1;
- (void)shareMedal:(id)arg1;
- (void)resetButtonAlpha:(id)arg1;
- (void)changeButtonAlpha:(id)arg1;
- (void)placeSubViews;
- (id)createButtonWithTitle:(id)arg1;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

