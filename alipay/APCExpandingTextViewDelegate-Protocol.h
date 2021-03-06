//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class APCExpandingTextView, NSString, UIImage;

@protocol APCExpandingTextViewDelegate

@optional
- (void)expandingTextView:(APCExpandingTextView *)arg1 willPasteImage:(UIImage *)arg2;
- (_Bool)expandingTextViewShouldReturn:(APCExpandingTextView *)arg1;
- (void)expandingTextViewDidChangeSelection:(APCExpandingTextView *)arg1;
- (void)expandingTextView:(APCExpandingTextView *)arg1 didChangeHeight:(float)arg2;
- (void)expandingTextView:(APCExpandingTextView *)arg1 willChangeHeight:(float)arg2;
- (void)expandingTextViewDidChange:(APCExpandingTextView *)arg1;
- (_Bool)expandingTextView:(APCExpandingTextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)expandingTextViewDidEndEditing:(APCExpandingTextView *)arg1;
- (void)expandingTextViewDidBeginEditing:(APCExpandingTextView *)arg1;
- (_Bool)expandingTextViewShouldEndEditing:(APCExpandingTextView *)arg1;
- (_Bool)expandingTextViewShouldBeginEditing:(APCExpandingTextView *)arg1;
@end

