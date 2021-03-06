//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSMutableArray;
@protocol MBDistributeDelegate;

@interface MBDistributor : NSObject
{
    NSMutableArray *_activeSprites;
    NSMutableArray *_waitingSprites;
    NSMutableArray *_deadSprites;
    NSDate *_startTime;
    double _previousTime;
    _Bool _shouldCacheDeadSprites;
    id <MBDistributeDelegate> _delegate;
}

@property(nonatomic) __weak id <MBDistributeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *deadSprites; // @synthesize deadSprites=_deadSprites;
@property(readonly, nonatomic) NSArray *activeSprites; // @synthesize activeSprites=_activeSprites;
@property(readonly, nonatomic) NSArray *waitingSprites; // @synthesize waitingSprites=_waitingSprites;
@property(nonatomic) _Bool shouldCacheDeadSprites; // @synthesize shouldCacheDeadSprites=_shouldCacheDeadSprites;
- (void).cxx_destruct;
- (void)deactiveSprite:(id)arg1;
- (void)activeSprite:(id)arg1;
- (_Bool)shouldActiveSprite:(id)arg1;
- (void)distributeSpritesWithPausedDuration:(double)arg1;
- (void)deactiveAllSprites;
- (void)addSprite:(id)arg1;
- (id)initWithStartTime:(id)arg1;

@end

