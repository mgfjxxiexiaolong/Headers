//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliCartBlockButton.h"

@class UIColor;

@interface AliCartStepperButton : AliCartBlockButton
{
    int _type;
    int _seperateLineStyle;
    double _seperateLineWidth;
    UIColor *_seperateLineColor;
}

@property(retain, nonatomic) UIColor *seperateLineColor; // @synthesize seperateLineColor=_seperateLineColor;
@property(nonatomic) double seperateLineWidth; // @synthesize seperateLineWidth=_seperateLineWidth;
@property(nonatomic) int seperateLineStyle; // @synthesize seperateLineStyle=_seperateLineStyle;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;

@end

