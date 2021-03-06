//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSArray, UIButton;
@protocol QZPhotoTabBarDelegate;

@interface QZPhotoTabBar : UIImageView
{
    NSArray *_buttons;
    UIButton *_seletedButton;
    long long _lastSelectIndex;
    id <QZPhotoTabBarDelegate> _delegate;
    NSArray *_items;
    long long _selectedItemIndex;
    unsigned long long _textColor;
    unsigned long long _textSelectedColor;
    unsigned long long _cursorColor;
}

@property(nonatomic) unsigned long long cursorColor; // @synthesize cursorColor=_cursorColor;
@property(nonatomic) unsigned long long textSelectedColor; // @synthesize textSelectedColor=_textSelectedColor;
@property(nonatomic) unsigned long long textColor; // @synthesize textColor=_textColor;
@property(nonatomic) long long selectedItemIndex; // @synthesize selectedItemIndex=_selectedItemIndex;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <QZPhotoTabBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)selecteAction:(id)arg1;
- (void)loadItems;
- (void)setItems:(id)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

