//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedButton, TTTagView;
@protocol TTVVideoDetailNatantTagsViewDataProtocol;

@interface TTVVideoDetailNatantTagsView : SSThemedView
{
    id <TTVVideoDetailNatantTagsViewDataProtocol> _viewModel;
    long long _tagPosition;
    TTTagView *_tagsView;
    SSThemedButton *_sourceBtn;
    SSThemedView *_bottomLine;
}

@property(retain, nonatomic) SSThemedView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) SSThemedButton *sourceBtn; // @synthesize sourceBtn=_sourceBtn;
@property(retain, nonatomic) TTTagView *tagsView; // @synthesize tagsView=_tagsView;
@property(nonatomic) long long tagPosition; // @synthesize tagPosition=_tagPosition;
@property(retain, nonatomic) id <TTVVideoDetailNatantTagsViewDataProtocol> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)sourceBtnClicked:(id)arg1;
- (id)_mappingTagsToModel:(id)arg1;
- (void)refreshUI;
- (void)configureUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

