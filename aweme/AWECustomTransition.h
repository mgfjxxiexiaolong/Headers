//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UINavigationControllerDelegate-Protocol.h"

@class NSString, UIViewController;
@protocol AWECustomTransitionDelegate;

@interface AWECustomTransition : NSObject <UINavigationControllerDelegate>
{
    UIViewController<AWECustomTransitionDelegate> *_controller;
}

@property(nonatomic) __weak UIViewController<AWECustomTransitionDelegate> *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

