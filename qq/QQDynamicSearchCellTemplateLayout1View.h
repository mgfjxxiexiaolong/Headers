//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQDynamicSearchCellTemplateLeftRightBaseView.h>

@class QQAsynUrlImageView, QQDynamicSearchCellTemplateLeftImageView, UILabel;

@interface QQDynamicSearchCellTemplateLayout1View : QQDynamicSearchCellTemplateLeftRightBaseView
{
    double _leftViewHeight;
    double _rightViewHeight;
    QQDynamicSearchCellTemplateLeftImageView *_leftImageView;
    UILabel *_headLine;
    UILabel *_middleLine;
    UILabel *_footLine;
    UILabel *_footRightLine;
    QQAsynUrlImageView *_headLineIcon;
}

- (double)calHeightForCell;
- (void)resetContentViewFrame;
- (void)layoutRightView;
- (void)layoutLeftView;
- (double)calRightViewHeight;
- (double)calRightViewWidth;
- (double)calLeftViewHeight;
- (double)calLeftViewWidth;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

