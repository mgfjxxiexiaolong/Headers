//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/UserSummaryBaseCell.h>

@class QQLevelView, UIImageView;

@interface UserSummaryQQLevelCell : UserSummaryBaseCell
{
    _Bool _isQQDaren;
    _Bool _shouldShowQQDarenIcon;
    int _QQLevel;
    _Bool _shouldShowAccelerationIcon;
    UIImageView *_qqDarenView;
    QQLevelView *_qqLevelView;
    UIImageView *_qqLevelAccelerationView;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
@property(nonatomic) _Bool shouldShowAccelerationIcon; // @dynamic shouldShowAccelerationIcon;
@property(nonatomic) int QQLevel; // @dynamic QQLevel;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(nonatomic) _Bool isQQDaren; // @dynamic isQQDaren;
@property(nonatomic) _Bool shouldShowQQDarenIcon; // @dynamic shouldShowQQDarenIcon;

@end

