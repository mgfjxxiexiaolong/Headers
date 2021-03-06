//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKBaseViewController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UIScrollView, UITextView;

@interface customerServiceCannotUnlocViewController : MBKBaseViewController <UITextViewDelegate, UIScrollViewDelegate>
{
    UIButton *report;
    UILabel *scanNote;
    UILabel *bikeCode;
    UILabel *reScan;
    NSString *_reportBikeCode;
    UIScrollView *_backScroll;
    UITextView *_textView;
    UILabel *_placeholder;
    UILabel *_noteLabel;
}

@property(retain) UILabel *noteLabel; // @synthesize noteLabel=_noteLabel;
@property(retain, nonatomic) UILabel *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain) UIScrollView *backScroll; // @synthesize backScroll=_backScroll;
@property(retain, nonatomic) NSString *reportBikeCode; // @synthesize reportBikeCode=_reportBikeCode;
- (void).cxx_destruct;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)resignKeyboard;
- (void)scanStateChange;
- (void)reoprtActioin:(id)arg1;
- (void)scanClicked:(id)arg1;
- (void)setupView;
- (void)relayoutSureButton;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)addNavigationBar;
- (void)viewDidLoad;
- (int)pageNameType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

