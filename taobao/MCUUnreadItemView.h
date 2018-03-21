//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIFont, UILabel;

@interface MCUUnreadItemView : UIView
{
    UILabel *_unreadCountLabel;
    _Bool _weakReminder;
    unsigned long long _unreadCount;
    UIFont *_font;
}

@property(nonatomic) _Bool weakReminder; // @synthesize weakReminder=_weakReminder;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) unsigned long long unreadCount; // @synthesize unreadCount=_unreadCount;
- (void).cxx_destruct;
- (void)resizeWithContent;
- (void)setUnreadCount:(unsigned long long)arg1 weakReminder:(_Bool)arg2;
- (void)doUpdateCornerRadius;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
