//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MVBaseTableViewCell.h"

@class MVLineView, MVSimpleTagLabel, UILabel;

@interface MVScheduleFilmActivityCell : MVBaseTableViewCell
{
    MVSimpleTagLabel *_activityTagLabel;
    UILabel *_activityTitleLabel;
    UILabel *_activityDescLabel;
    UILabel *_indicatorLabel;
    MVLineView *_bottomLineView;
}

@property(retain, nonatomic) MVLineView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UILabel *indicatorLabel; // @synthesize indicatorLabel=_indicatorLabel;
@property(retain, nonatomic) UILabel *activityDescLabel; // @synthesize activityDescLabel=_activityDescLabel;
@property(retain, nonatomic) UILabel *activityTitleLabel; // @synthesize activityTitleLabel=_activityTitleLabel;
@property(retain, nonatomic) MVSimpleTagLabel *activityTagLabel; // @synthesize activityTagLabel=_activityTagLabel;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

