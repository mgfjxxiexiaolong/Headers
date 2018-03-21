//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface AWESearchMusicTableViewCell : UITableViewCell
{
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_infoLabel;
    UILabel *_useCountLabel;
}

@property(retain, nonatomic) UILabel *useCountLabel; // @synthesize useCountLabel=_useCountLabel;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)configureWithModel:(id)arg1;
- (void)configureUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
