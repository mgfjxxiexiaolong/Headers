//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GLKit/GLKViewController.h>

#import "GLKViewDelegate-Protocol.h"

@class KSEPreviewPlayer, NSLock, NSString;

@interface KSEPreviewViewController : GLKViewController <GLKViewDelegate>
{
    _Bool _attachCalled;
    KSEPreviewPlayer *_previewPlayer;
    NSLock *_lock;
}

@property(nonatomic) _Bool attachCalled; // @synthesize attachCalled=_attachCalled;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
@property(retain, nonatomic) KSEPreviewPlayer *previewPlayer; // @synthesize previewPlayer=_previewPlayer;
- (float)glViewScale;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

