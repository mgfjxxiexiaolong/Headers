//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBLiveTweSVModuleInterface-Protocol.h"

@class NSString, TBLiveTweSVEntity, TBLiveTweSVInteractor, TBMPBPlayerView, UIViewController;
@protocol TBLiveTweSVViewInterface;

@interface TBLiveTweSVPresenter : NSObject <TBLiveTweSVModuleInterface>
{
    UIViewController<TBLiveTweSVViewInterface> *_viewController;
    TBLiveTweSVInteractor *_interactor;
    TBLiveTweSVEntity *_entity;
    TBMPBPlayerView *_videoPlayerView;
}

@property(retain, nonatomic) TBMPBPlayerView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(nonatomic) __weak TBLiveTweSVEntity *entity; // @synthesize entity=_entity;
@property(nonatomic) __weak TBLiveTweSVInteractor *interactor; // @synthesize interactor=_interactor;
@property(nonatomic) __weak UIViewController<TBLiveTweSVViewInterface> *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (_Bool)isInLivingRoom;
- (void)popViewControllerAnimated:(id)arg1 animated:(_Bool)arg2;
- (id)initWithInteracor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
