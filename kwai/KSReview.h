//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface KSReview : NSObject
{
    NSTimer *_timer;
}

+ (id)sharedKSReview;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)deleteFiles;
@property(nonatomic) _Bool inReviewing;
- (void)dealloc;
- (id)init;

@end

