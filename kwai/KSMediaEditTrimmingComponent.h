//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LYWComponent.h"

@class KSMediaEditTrimmingViewController;

@interface KSMediaEditTrimmingComponent : LYWComponent
{
    KSMediaEditTrimmingViewController *_trimmingViewController;
}

@property(retain, nonatomic) KSMediaEditTrimmingViewController *trimmingViewController; // @synthesize trimmingViewController=_trimmingViewController;
- (void).cxx_destruct;
- (_Bool)_stateObserveThrottled;
- (void)_setupTrimmingWithNewState:(id)arg1 oldState:(id)arg2;
- (void)newState:(id)arg1 oldState:(id)arg2;
- (id)initWithStore:(id)arg1;

@end

