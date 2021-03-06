//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CAAnimationlessLayer, KSEdgeRoundImageView, KSLetterList, KSRoundedImageAsset, UILabel;

@interface KSMessageChooseFriendCell : UITableViewCell
{
    KSEdgeRoundImageView *_headerView;
    UILabel *_nameLabel;
    CAAnimationlessLayer *_line;
    KSRoundedImageAsset *_imageAsset;
    KSLetterList *_letterList;
}

+ (double)cellHeight;
@property(retain, nonatomic) KSLetterList *letterList; // @synthesize letterList=_letterList;
@property(retain, nonatomic) KSRoundedImageAsset *imageAsset; // @synthesize imageAsset=_imageAsset;
@property(retain, nonatomic) CAAnimationlessLayer *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) KSEdgeRoundImageView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)lazyLoad;
- (void)drawWithLetterList:(id)arg1 fullLineStyle:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

