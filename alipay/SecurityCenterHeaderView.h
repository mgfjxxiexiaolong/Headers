//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString;

@interface SecurityCenterHeaderView : UIView
{
    NSString *_title;
    NSString *_detail;
}

@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)safetyInsurance;
- (void)updateSubViews;
- (id)init;

@end
