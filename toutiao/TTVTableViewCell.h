//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

@class TTVTableViewItem, UIColor;

@interface TTVTableViewCell : SSThemedTableViewCell
{
    TTVTableViewItem *_item;
    UIColor *_backColor;
}

@property(retain, nonatomic) UIColor *backColor; // @synthesize backColor=_backColor;
@property(retain, nonatomic) TTVTableViewItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)commonInit;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

