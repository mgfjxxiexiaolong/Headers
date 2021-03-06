//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HTSLiveAnimationImp-Protocol.h"

@class NSString, UIImage;

@interface HTSTopAnchorAnimationView : UIView <HTSLiveAnimationImp>
{
    CDUnknownBlockType _onCompletion;
    UIImage *_avatarImage;
    NSString *_title;
    NSString *_subTitle;
}

+ (id)animationView;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *avatarImage; // @synthesize avatarImage=_avatarImage;
- (void).cxx_destruct;
- (void)showInView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismiss;
- (void)show;
- (void)loadSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

