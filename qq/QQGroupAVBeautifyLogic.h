//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQAVBeautifyGLViewDelegate-Protocol.h>

@class NSString, QQAVBeautifyGLView, QQGroupVideoChatViewController;

@interface QQGroupAVBeautifyLogic : NSObject <QQAVBeautifyGLViewDelegate>
{
    _Bool _usedBeautify;
    float _beautifyLevel;
    int _beauty_server_ctl;
    QQGroupVideoChatViewController *_ownerVC;
    QQAVBeautifyGLView *_beautifyView;
}

@property(nonatomic) int beauty_server_ctl; // @synthesize beauty_server_ctl=_beauty_server_ctl;
@property(nonatomic) _Bool usedBeautify; // @synthesize usedBeautify=_usedBeautify;
@property(nonatomic) float beautifyLevel; // @synthesize beautifyLevel=_beautifyLevel;
@property(retain, nonatomic) QQAVBeautifyGLView *beautifyView; // @synthesize beautifyView=_beautifyView;
@property(nonatomic) __weak QQGroupVideoChatViewController *ownerVC; // @synthesize ownerVC=_ownerVC;
- (void).cxx_destruct;
- (void)onDisplayBeautifyView:(id)arg1;
- (void)displayBeautifyFrame:(id)arg1;
- (void)onBeautify:(float)arg1;
- (void)onActionButton;
- (_Bool)isBeautifyViewShow;
- (void)dismissBeautifyView;
- (void)showBeautifyView;
- (void)onVCLoadView;
- (void)dealloc;
- (void)willDealloc;
- (void)unInit;
- (id)initWithOwnerVC:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

