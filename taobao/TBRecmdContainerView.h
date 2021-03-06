//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSString, RNSTubView, TBRecmdEngine, UICollectionView;

@interface TBRecmdContainerView : UIView
{
    NSString *_channel;
    NSDictionary *_param;
    UIView *_businessView;
    CDUnknownBlockType _handler;
    unsigned long long _type;
    TBRecmdEngine *_recmdEngine;
    UICollectionView *_guessView;
    RNSTubView *_containerView;
}

@property(retain, nonatomic) RNSTubView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UICollectionView *guessView; // @synthesize guessView=_guessView;
@property(retain, nonatomic) TBRecmdEngine *recmdEngine; // @synthesize recmdEngine=_recmdEngine;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) UIView *businessView; // @synthesize businessView=_businessView;
@property(retain, nonatomic) NSDictionary *param; // @synthesize param=_param;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
- (void).cxx_destruct;
- (void)registEngineActions;
- (void)queryGuessData;
- (void)addPullToReresh;
- (void)configGestureProxy;
- (void)updateBusinessView:(id)arg1;
- (_Bool)needLayoutAllView;
- (void)stopRefreshAnimating;
- (id)initWithFrame:(struct CGRect)arg1 channel:(id)arg2 param:(id)arg3 businessView:(id)arg4 pullToRefreshHandler:(CDUnknownBlockType)arg5;
- (id)refreshHostView;
@property(readonly, nonatomic) TBRecmdEngine *engine;

@end

