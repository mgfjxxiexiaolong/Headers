//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <QQMainProject/RedPointLayoutDelegate-Protocol.h>

@class NSString, UIImageView, UILabel;

@interface DrawerRichStateView : UIButton <RedPointLayoutDelegate>
{
    UILabel *_richStateText;
    UIImageView *_richStateIcon;
    UIImageView *_richStateEditIcon;
}

- (void).cxx_destruct;
- (void)reportWithName:(id)arg1;
- (void)goSigEditor;
- (void)refreshRichState;
- (void)reLayoutSubViews;
- (void)layoutSubviews;
- (void)didReciveRedPointNeedsUpdateNotification:(id)arg1;
- (void)reloadAppearance;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)layOutRedPoint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

