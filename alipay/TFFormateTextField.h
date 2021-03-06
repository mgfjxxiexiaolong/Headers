//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, TFTextFiled, UIImageView;
@protocol TFFormateTextFieldDelegate;

@interface TFFormateTextField : UIView <UITextFieldDelegate>
{
    _Bool _editable;
    id <TFFormateTextFieldDelegate> _delegate;
    TFTextFiled *_textField;
    UIImageView *_bgImageView;
}

@property(nonatomic) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic) __weak UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic) __weak TFTextFiled *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak id <TFFormateTextFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)relayoutContentTextField;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeFontObserver;
- (void)addFontObserver;
- (void)refreshText:(id)arg1;
@property(readonly, nonatomic) NSString *text;
- (void)createContentView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidChange;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

