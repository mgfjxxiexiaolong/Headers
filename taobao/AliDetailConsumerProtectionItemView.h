//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AliDetailRighsInfo, UILabel;

@interface AliDetailConsumerProtectionItemView : UIView
{
    UILabel *_titleLabel;
    UILabel *_textLabel;
    UIView *_iconView;
    AliDetailRighsInfo *_rightInfo;
}

@property(retain, nonatomic) AliDetailRighsInfo *rightInfo; // @synthesize rightInfo=_rightInfo;
@property(retain, nonatomic) UIView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)descString;
- (id)initWithFrame:(struct CGRect)arg1 setData:(id)arg2;

@end
