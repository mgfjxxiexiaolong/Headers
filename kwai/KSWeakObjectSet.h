//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface KSWeakObjectSet : NSObject
{
    NSMutableArray *_holders;
}

- (void).cxx_destruct;
- (_Bool)containsObject:(id)arg1;
- (id)objectsArray;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
@property(readonly) unsigned long long count; // @dynamic count;
- (id)init;

@end

