//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class APButton, UIImageView, UILabel;

@interface PAEmptyFriendViewController : DTViewController
{
    UIImageView *_emptyView;
    APButton *_addButton;
    UILabel *_tipLab;
}

@property(retain, nonatomic) UILabel *tipLab; // @synthesize tipLab=_tipLab;
@property(retain, nonatomic) APButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) UIImageView *emptyView; // @synthesize emptyView=_emptyView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)addBtnAction:(id)arg1;
- (void)setupButton;
- (void)setupTipLab;
- (void)setupEmptyView;
- (void)viewDidLoad;

@end
