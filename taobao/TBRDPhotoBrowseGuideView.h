//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface TBRDPhotoBrowseGuideView : UIView
{
    _Bool _isRecursive;
    UIView *_wrapLine;
    UIImageView *_ivLine;
    UIImageView *_ivHand;
}

+ (_Bool)dismiss;
+ (void)showInView:(id)arg1;
@property(nonatomic) _Bool isRecursive; // @synthesize isRecursive=_isRecursive;
@property(retain, nonatomic) UIImageView *ivHand; // @synthesize ivHand=_ivHand;
@property(retain, nonatomic) UIImageView *ivLine; // @synthesize ivLine=_ivLine;
@property(retain, nonatomic) UIView *wrapLine; // @synthesize wrapLine=_wrapLine;
- (void).cxx_destruct;
- (void)dealloc;
- (void)animate;
- (void)tapAction:(id)arg1;
- (id)init;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

