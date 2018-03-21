//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NearbyLoginScoreModel, QQAsynUrlImageView;
@protocol QQLbsLoginHeartTipViewDelegate;

@interface QQLbsLoginHeartTipView : UIView
{
    QQAsynUrlImageView *_upperImgView;
    NearbyLoginScoreModel *_todayScoreModel;
    NSArray *_scoreConfigList;
    id <QQLbsLoginHeartTipViewDelegate> _delegate;
}

@property(nonatomic) __weak id <QQLbsLoginHeartTipViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *scoreConfigList; // @synthesize scoreConfigList=_scoreConfigList;
@property(retain, nonatomic) NearbyLoginScoreModel *todayScoreModel; // @synthesize todayScoreModel=_todayScoreModel;
@property(retain, nonatomic) QQAsynUrlImageView *upperImgView; // @synthesize upperImgView=_upperImgView;
- (void).cxx_destruct;
- (void)bottomBtnClick;
- (void)layoutUpperImgView;
- (id)getTomorrowScoreStr;
- (long long)getConfigMaxScore;
- (id)initWithFrame:(struct CGRect)arg1 withTodayScore:(id)arg2 withConfigList:(id)arg3;

@end
