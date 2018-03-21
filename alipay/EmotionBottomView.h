//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIScrollView;
@protocol APEmotionBottomViewDelegate;

@interface EmotionBottomView : UIView
{
    _Bool _canSend;
    _Bool _baseEmotionOnly;
    id <APEmotionBottomViewDelegate> _delegate;
    UIScrollView *_scrollSelectView;
    UIButton *_sendButton;
    long long _selectedIndex;
    long long _settingIndex;
}

@property(nonatomic) _Bool baseEmotionOnly; // @synthesize baseEmotionOnly=_baseEmotionOnly;
@property(nonatomic) long long settingIndex; // @synthesize settingIndex=_settingIndex;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UIScrollView *scrollSelectView; // @synthesize scrollSelectView=_scrollSelectView;
@property(nonatomic) _Bool canSend; // @synthesize canSend=_canSend;
@property(nonatomic) __weak id <APEmotionBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)getPackageSettingIndex;
- (long long)getPackageSelectIndex;
- (void)settingButtonPressed:(id)arg1;
- (void)addEmoPackageButtonPressed:(id)arg1;
- (void)sendButtonPressed:(id)arg1;
- (void)emoSelectbuttonPressed:(id)arg1;
- (void)gifSearchButtonPressed:(id)arg1;
- (void)textViewHasText:(_Bool)arg1;
- (void)packageSelected:(long long)arg1;
- (void)updateScrollSelectViewBySelectedIndex:(long long)arg1;
- (void)setBoundLine:(id)arg1 isLeftSide:(_Bool)arg2;
- (id)notPackageButton:(id)arg1;
- (void)initSendButton;
- (id)addEmotionButton;
- (void)changeSelectIndex:(long long)arg1;
@property(readonly, nonatomic) NSString *buttonText;
- (void)setSendButtonText:(id)arg1;
- (void)initSelectButton;
- (id)addButtomButtonWithIconImage:(id)arg1 backgroundImage:(id)arg2 action:(SEL)arg3 originX:(double)arg4 tag:(unsigned long long)arg5;
- (id)initWithFrame:(struct CGRect)arg1 packageSelected:(long long)arg2 baseEmotionOnly:(_Bool)arg3;
- (void)dealloc;

@end
