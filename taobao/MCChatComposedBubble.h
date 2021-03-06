//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCChatBubble.h"

#import "MCChatBubbleBackgroundViewDelegate-Protocol.h"

@class MCChatBubbleBackgroundView, MCComposedMessageView, NSString, UILabel;

@interface MCChatComposedBubble : MCChatBubble <MCChatBubbleBackgroundViewDelegate>
{
    MCChatBubbleBackgroundView *_innerBubbleImageView;
    UILabel *_titleLabel;
    MCComposedMessageView *_composedTopView;
    MCComposedMessageView *_composedBottomView;
    MCComposedMessageView *_composedMiddleView;
}

+ (struct CGSize)bubbleSizeForCellObject:(id)arg1 withContainer:(struct CGSize)arg2;
@property(retain, nonatomic) MCComposedMessageView *composedMiddleView; // @synthesize composedMiddleView=_composedMiddleView;
@property(retain, nonatomic) MCComposedMessageView *composedBottomView; // @synthesize composedBottomView=_composedBottomView;
@property(retain, nonatomic) MCComposedMessageView *composedTopView; // @synthesize composedTopView=_composedTopView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MCChatBubbleBackgroundView *innerBubbleImageView; // @synthesize innerBubbleImageView=_innerBubbleImageView;
- (void).cxx_destruct;
- (void)chatBubbleBackgroundViewLongPress:(id)arg1;
- (void)chatBubbleBackgroundViewTapped:(id)arg1;
- (void)recycle;
- (void)layoutSubviews;
- (void)updateBubbleWithCellObject:(id)arg1 bubbleHandler:(id)arg2 atIndexPath:(id)arg3;
- (id)initWithBubbleStyle:(long long)arg1 subStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

