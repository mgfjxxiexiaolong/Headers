//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

#import "ErrorViewProtocal-Protocol.h"

@class NSObject, NSString, SSThemedButton, SSThemedImageView, SSThemedLabel, UIButton;
@protocol TTFollowCategoryEmptyViewDelegate;

@interface TTFollowCategoryEmptyView : SSThemedView <ErrorViewProtocal>
{
    SSThemedButton *_containerView;
    SSThemedLabel *_errorMsg;
    SSThemedImageView *_errorImage;
    unsigned long long _viewType;
    UIButton *_refreshButton;
    UIButton *_actionBtn;
    SSThemedButton *_goAddfriendButton;
    NSObject<TTFollowCategoryEmptyViewDelegate> *_emptyViewDelegate;
}

@property(nonatomic) __weak NSObject<TTFollowCategoryEmptyViewDelegate> *emptyViewDelegate; // @synthesize emptyViewDelegate=_emptyViewDelegate;
@property(retain, nonatomic) SSThemedButton *goAddfriendButton; // @synthesize goAddfriendButton=_goAddfriendButton;
@property(retain, nonatomic) UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) UIButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
@property(retain, nonatomic) SSThemedImageView *errorImage; // @synthesize errorImage=_errorImage;
@property(retain, nonatomic) SSThemedLabel *errorMsg; // @synthesize errorMsg=_errorMsg;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)init;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType customEmptyErrorImageNameBlock;
@property(copy, nonatomic) CDUnknownBlockType customEmptyErrorMsgBlock;
@property(copy, nonatomic) CDUnknownBlockType customFullScreenErrorViewBlock;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
