//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBSearchImageView, UILabel;

@interface TBXSearchBotSearchPullToRefreshView : UIView
{
    UILabel *_titleLabel;
    TBSearchImageView *_backgroundView;
    TBSearchImageView *_logo;
}

@property(retain, nonatomic) TBSearchImageView *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) TBSearchImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)configWithData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

