//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol LYWStoreSubscriber;

@interface LYWSubscription : NSObject
{
    id <LYWStoreSubscriber> _subscriber;
    CDUnknownBlockType _selector;
}

@property(copy, nonatomic) CDUnknownBlockType selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id <LYWStoreSubscriber> subscriber; // @synthesize subscriber=_subscriber;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

