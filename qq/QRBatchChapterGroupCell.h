//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QRBatchChapterGroupCellData, UIButton, UILabel;
@protocol QRBatchChapterGroupCellDelegate;

@interface QRBatchChapterGroupCell : UIView
{
    UIView *_contentView;
    _Bool _isDayMode;
    UILabel *_titleLabel;
    UIButton *_foldButton;
    UIButton *_selectButton;
    UILabel *_alreadyDownloadLabel;
    QRBatchChapterGroupCellData *_data;
    id <QRBatchChapterGroupCellDelegate> _delegate;
}

+ (void)clearReusableQueue;
+ (id)dequeueReusableView;
@property(nonatomic) id <QRBatchChapterGroupCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QRBatchChapterGroupCellData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)selectButtonClicked:(id)arg1;
- (void)foldBtnClicked:(id)arg1;
- (id)initWithDayMode:(_Bool)arg1 width:(double)arg2;

@end
