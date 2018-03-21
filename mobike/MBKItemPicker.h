//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKBaseTitleActionSheet.h"

@class NSMutableArray, UIButton, UIView;
@protocol MBKItemPickerDateSource, MBKItemPickerDelegate;

@interface MBKItemPicker : MBKBaseTitleActionSheet
{
    id <MBKItemPickerDelegate> _delegate;
    id <MBKItemPickerDateSource> _dateSource;
    UIView *_itemView;
    UIButton *_confirmButton;
    NSMutableArray *_itemButtons;
}

@property(retain, nonatomic) NSMutableArray *itemButtons; // @synthesize itemButtons=_itemButtons;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIView *itemView; // @synthesize itemView=_itemView;
@property(nonatomic) __weak id <MBKItemPickerDateSource> dateSource; // @synthesize dateSource=_dateSource;
@property(nonatomic) __weak id <MBKItemPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addMasConstraints;
- (void)reloadData;
- (id)itemForIndex:(long long)arg1;
- (void)deselectItemAtIndex:(long long)arg1;
- (void)selectItemAtIndex:(long long)arg1;
- (id)init;

@end
