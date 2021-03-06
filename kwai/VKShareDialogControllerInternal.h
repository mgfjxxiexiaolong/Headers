//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "VKSdkDelegate-Protocol.h"
#import "VKSdkUIDelegate-Protocol.h"

@class NSMutableArray, NSObject, NSString, UIBarButtonItem, UICollectionView, VKPostSettings, VKShareDialogController;
@protocol OS_dispatch_queue, VKSdkUIDelegate;

@interface VKShareDialogControllerInternal : UIViewController <UITextViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, VKSdkDelegate, VKSdkUIDelegate>
{
    NSObject<OS_dispatch_queue> *imageProcessingQueue;
    _Bool _prepared;
    VKShareDialogController *_parent;
    UIBarButtonItem *_sendButton;
    NSMutableArray *_attachmentsArray;
    VKPostSettings *_postSettings;
    id <VKSdkUIDelegate> _oldDelegate;
}

@property(nonatomic) __weak id <VKSdkUIDelegate> oldDelegate; // @synthesize oldDelegate=_oldDelegate;
@property(nonatomic) _Bool prepared; // @synthesize prepared=_prepared;
@property(retain, nonatomic) VKPostSettings *postSettings; // @synthesize postSettings=_postSettings;
@property(retain, nonatomic) NSMutableArray *attachmentsArray; // @synthesize attachmentsArray=_attachmentsArray;
@property(retain, nonatomic) UIBarButtonItem *sendButton; // @synthesize sendButton=_sendButton;
@property(nonatomic) __weak VKShareDialogController *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (void)removeAttachIfExists:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)createAttachments;
- (void)vkSdkUserAuthorizationFailed;
- (void)vkSdkAuthorizationStateUpdatedWithResult:(id)arg1;
- (void)vkSdkAccessAuthorizationFinishedWithResult:(id)arg1;
- (void)vkSdkShouldPresentViewController:(id)arg1;
- (void)vkSdkNeedCaptchaEnter:(id)arg1;
- (void)authorize:(id)arg1;
- (void)openSettings:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)close:(id)arg1;
- (id)rightBarButtonItems;
- (void)prepare;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)setAuthorizationState:(unsigned long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) UICollectionView *attachmentsScrollView;
- (void)loadView;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

