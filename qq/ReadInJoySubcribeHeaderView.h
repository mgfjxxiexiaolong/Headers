//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QQAvatarView, ReadInJoyChannelArticle, UIButton, UIImageView, UILabel;

@interface ReadInJoySubcribeHeaderView : UIView
{
    QQAvatarView *avatar;
    UIButton *mTitleButton;
    UIView *lineView;
    UILabel *subcribeLabel;
    UIImageView *subcribeImgView;
    UIView *avatarWrapperView;
    ReadInJoyChannelArticle *_feedsModel;
}

@property(retain, nonatomic) ReadInJoyChannelArticle *feedsModel; // @synthesize feedsModel=_feedsModel;
- (void)dealloc;
- (void)tap;
- (void)layoutSubviewsExt;
- (void)layoutSubviews;
- (void)revertTouchState;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)init;

@end

