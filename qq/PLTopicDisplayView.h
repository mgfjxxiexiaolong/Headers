//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface PLTopicDisplayView : UIView
{
    _Bool _isMultiLine;
    int _widthLimit;
    int _lineHeight;
    int _lineSpacing;
    int _lableSpacing;
    NSMutableArray *_labelGroup;
}

@property(retain, nonatomic) NSMutableArray *labelGroup; // @synthesize labelGroup=_labelGroup;
@property(nonatomic) int lableSpacing; // @synthesize lableSpacing=_lableSpacing;
@property(nonatomic) int lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) int lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) int widthLimit; // @synthesize widthLimit=_widthLimit;
@property(nonatomic) _Bool isMultiLine; // @synthesize isMultiLine=_isMultiLine;
- (void)rearrange;
- (struct CGSize)intrinsicContentSize;
- (void)setTopicLabelArray:(id)arg1;
- (void)setTopicTextList:(id)arg1 labelStyle:(unsigned long long)arg2;
- (void)initSetting;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

@end

