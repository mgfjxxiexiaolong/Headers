//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface ARBinhaiActivityColorProgressView : UIView
{
    double _progress;
    UIColor *_bgColor;
    UIColor *_frontColor;
}

+ (Class)layerClass;
@property(retain, nonatomic) UIColor *frontColor; // @synthesize frontColor=_frontColor;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end

