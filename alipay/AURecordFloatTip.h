//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, UIImageView, UILabel;

@interface AURecordFloatTip : UIView
{
    long long _recordIndex;
    NSTimer *_timer;
    UILabel *_messageLabel;
    UIView *_backgroundView;
    UIImageView *_decibelView;
}

@property(retain, nonatomic) UIImageView *decibelView; // @synthesize decibelView=_decibelView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
- (void).cxx_destruct;
- (void)dismissRecordView;
- (void)showRecodingInView:(id)arg1;
- (void)startTimerTask;
- (void)autoUpdateDecibe;
- (id)init;

@end
