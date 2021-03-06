//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FaceWallImageView, NSString, UIButton, UIImageView, UILabel;
@protocol QQGroupSettingViewAppCellDelegate;

@interface QQGroupSettingViewAppCellItem : UIView
{
    UIImageView *_rightCornerView;
    UILabel *_rightCornerLabelView;
    UIButton *_btn;
    UILabel *_titleLabel;
    UILabel *_rightCornerLabel;
    FaceWallImageView *_activityImageView;
    UIView *_activityView;
    NSString *_activityTitle;
    _Bool _isButtonDisabled;
    int _rightCornerCount;
    int _rightCornerRedState;
    id <QQGroupSettingViewAppCellDelegate> _delegate;
    int _xo;
}

- (void)onActivityIconClick:(id)arg1;
- (void)makeRedStateView;
- (void)layoutSubviews;
@property(nonatomic) int rightCornerRedState; // @dynamic rightCornerRedState;
@property(retain, nonatomic) UIView *activityView; // @dynamic activityView;
- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(copy, nonatomic) NSString *activityTitle; // @dynamic activityTitle;
@property(nonatomic) id <QQGroupSettingViewAppCellDelegate> delegate; // @dynamic delegate;
@property(nonatomic) _Bool isButtonDisabled; // @dynamic isButtonDisabled;
@property(nonatomic) int rightCornerCount; // @dynamic rightCornerCount;

@end

