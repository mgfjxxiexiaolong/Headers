//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface QQBiuEditorHeadGuideView : UIView
{
    UIView *_guideContent;
    UIView *_penguinView;
    NSMutableArray *_penguinSubLayers;
}

@property(retain, nonatomic) NSMutableArray *penguinSubLayers; // @synthesize penguinSubLayers=_penguinSubLayers;
@property(retain, nonatomic) UIView *penguinView; // @synthesize penguinView=_penguinView;
@property(retain, nonatomic) UIView *guideContent; // @synthesize guideContent=_guideContent;
- (void).cxx_destruct;
- (void)addPenguinViewWithPoint:(struct CGPoint)arg1;
- (id)createThreeHeadPicWithUins:(id)arg1;
- (void)addGuideContentWithUins:(id)arg1;
- (void)startAnimationOnce;
- (id)initWithFriendUins:(id)arg1;

@end

