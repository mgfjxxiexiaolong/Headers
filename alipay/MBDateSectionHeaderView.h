//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel, UITableView;

@interface MBDateSectionHeaderView : UIView
{
    long long _sectionIndex;
    UITableView *_tableView;
    long long _section;
    UILabel *_dateLabel;
    NSString *_dateStr;
}

+ (double)headerHeightForSectionIndex:(long long)arg1;
@property(copy, nonatomic) NSString *dateStr; // @synthesize dateStr=_dateStr;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithWidth:(double)arg1 sectionIndex:(long long)arg2 dateTitle:(id)arg3 tableView:(id)arg4;

@end

