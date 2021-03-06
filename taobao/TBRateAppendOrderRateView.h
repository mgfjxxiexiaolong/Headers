//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TBRateImageUploadProtocol-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSString, TBRateAppendOrderRateInfoComponent, TBRateEditPhotoGuidView, TBRateImageUploadView, UILabel, UITextView;
@protocol TBRateImageUploadProtocol;

@interface TBRateAppendOrderRateView : UIView <UITextFieldDelegate, UITextViewDelegate, TBRateImageUploadProtocol>
{
    TBRateAppendOrderRateInfoComponent *_appendRateComponent;
    id <TBRateImageUploadProtocol> _delegate;
    UIView *_splitLineView;
    UILabel *_appendRateLable;
    UITextView *_appendFeedBackTextView;
    TBRateImageUploadView *_imageUploadView;
    NSString *_feedBackplaceholder;
    UIView *_bottomView;
    TBRateEditPhotoGuidView *_editPhotoGuidView;
}

@property(retain, nonatomic) TBRateEditPhotoGuidView *editPhotoGuidView; // @synthesize editPhotoGuidView=_editPhotoGuidView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) NSString *feedBackplaceholder; // @synthesize feedBackplaceholder=_feedBackplaceholder;
@property(retain, nonatomic) TBRateImageUploadView *imageUploadView; // @synthesize imageUploadView=_imageUploadView;
@property(retain, nonatomic) UITextView *appendFeedBackTextView; // @synthesize appendFeedBackTextView=_appendFeedBackTextView;
@property(retain, nonatomic) UILabel *appendRateLable; // @synthesize appendRateLable=_appendRateLable;
@property(retain, nonatomic) UIView *splitLineView; // @synthesize splitLineView=_splitLineView;
@property(nonatomic) id <TBRateImageUploadProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TBRateAppendOrderRateInfoComponent *appendRateComponent; // @synthesize appendRateComponent=_appendRateComponent;
- (void).cxx_destruct;
- (void)showEditGuidView;
- (void)browsePics:(long long)arg1 tagIndex:(long long)arg2;
- (void)addPhoto:(long long)arg1;
- (void)removeAllSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)refreshPhotoArray:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

