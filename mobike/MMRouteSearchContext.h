//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMRouteSearcher;

@interface MMRouteSearchContext : NSObject
{
    MMRouteSearcher *_searcher;
}

@property(retain, nonatomic) MMRouteSearcher *searcher; // @synthesize searcher=_searcher;
- (void).cxx_destruct;
- (void)walkingSearchWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSearcher:(id)arg1;

@end

