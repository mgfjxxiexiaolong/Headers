//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/TBMultimediaEditComponent.h>

#import <QQMainProject/TBEditStrokeStylePickerViewDataDelegate-Protocol.h>
#import <QQMainProject/TBEditStrokeStylePickerViewDelegate-Protocol.h>
#import <QQMainProject/TBInteractiveElementViewDelegate-Protocol.h>
#import <QQMainProject/TBStoryTextEditViewDelegate-Protocol.h>

@class NSString, TBEditStrokeStylePickerView, TBStoryTextEditView, UIColor, UIView;

@interface TBMultimediaEditTextComponent : TBMultimediaEditComponent <TBStoryTextEditViewDelegate, TBEditStrokeStylePickerViewDelegate, TBInteractiveElementViewDelegate, TBEditStrokeStylePickerViewDataDelegate>
{
    _Bool _defaultClickStart;
    TBStoryTextEditView *_storyTextEditView;
    UIView *_textEditConfirmBar;
    TBEditStrokeStylePickerView *_sliderColorView;
    NSString *_lastEditTextString;
    UIColor *_lastEditTextColor;
}

@property(retain, nonatomic) UIColor *lastEditTextColor; // @synthesize lastEditTextColor=_lastEditTextColor;
@property(retain, nonatomic) NSString *lastEditTextString; // @synthesize lastEditTextString=_lastEditTextString;
@property(nonatomic, getter=isDefaultClickStart) _Bool defaultClickStart; // @synthesize defaultClickStart=_defaultClickStart;
@property(retain, nonatomic) TBEditStrokeStylePickerView *sliderColorView; // @synthesize sliderColorView=_sliderColorView;
@property(retain, nonatomic) UIView *textEditConfirmBar; // @synthesize textEditConfirmBar=_textEditConfirmBar;
@property(retain, nonatomic) TBStoryTextEditView *storyTextEditView; // @synthesize storyTextEditView=_storyTextEditView;
- (id)strokeBarItems;
- (id)mosaicBarItems;
- (id)colorBarItems;
- (id)textureBarItems;
- (void)strokeStylePickerView:(id)arg1 pickColor:(id)arg2 drawStep:(unsigned long long)arg3 resourceInfo:(id)arg4;
- (void)elementMove2Trash:(id)arg1;
- (void)elementClicked:(id)arg1;
- (void)elementMoveEnded:(id)arg1;
- (void)elementMoving:(id)arg1;
- (void)elementLongPressBegan:(id)arg1;
- (void)elementGestureRecognizerDidEnd:(id)arg1 gesture:(id)arg2;
- (void)elementGestureRecognizerWillBegin:(id)arg1 gesture:(id)arg2;
- (void)needUpdateConfirmBar:(double)arg1;
- (void)storyTextViewDidEndEditing:(id)arg1;
- (void)storyTextViewDidBeginEditing:(id)arg1;
- (void)clickTextConfirmCancel:(id)arg1;
- (void)clickTextConfirmOK:(id)arg1;
- (void)getEditActionResult:(id)arg1;
- (void)getPublishInfo:(id)arg1;
- (void)gestureIgnored:(id)arg1;
- (void)videoEdit_keyboardWillHide:(id)arg1;
- (void)videoEdit_keyboardWillShown:(id)arg1;
- (void)unRegisterNotification;
- (void)registeNotifications;
- (void)handleTapContainer:(id)arg1;
- (void)buttonClicked;
- (void)reset;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

