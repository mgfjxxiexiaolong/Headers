//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class UIColor;

@interface TTUGCPageControlSubview : SSThemedView
{
    long long _index;
    UIColor *_dotColor;
    unsigned long long _state;
    SSThemedView *_dotView;
}

@property(retain, nonatomic) SSThemedView *dotView; // @synthesize dotView=_dotView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIColor *dotColor; // @synthesize dotColor=_dotColor;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end
