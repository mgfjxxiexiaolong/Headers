//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface QZLVErrorTipsView : UIView
{
    UIImageView *_iconImageView;
    UILabel *_tipsLabel;
    NSString *_tipsMsg;
}

@property(retain, nonatomic) NSString *tipsMsg; // @synthesize tipsMsg=_tipsMsg;
- (void).cxx_destruct;
- (void)adjustFrame;
- (id)tipsLabel;
- (id)iconImageView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
