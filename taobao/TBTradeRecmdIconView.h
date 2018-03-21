//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIImageView, UILabel;

@interface TBTradeRecmdIconView : UIView
{
    unsigned long long _iconType;
    UIImageView *_imageView;
    UILabel *_label;
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) unsigned long long iconType; // @synthesize iconType=_iconType;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIColor *textColor; // @dynamic textColor;
@property(retain, nonatomic) UIColor *bgColor; // @dynamic bgColor;
@property(retain, nonatomic) NSString *text; // @dynamic text;
- (id)init;

@end
