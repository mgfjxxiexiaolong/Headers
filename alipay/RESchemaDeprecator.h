//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RERouterRule.h"

@class NSArray;

@interface RESchemaDeprecator : RERouterRule
{
    NSArray *_deprecateSchemas;
}

@property(retain, nonatomic) NSArray *deprecateSchemas; // @synthesize deprecateSchemas=_deprecateSchemas;
- (void).cxx_destruct;
- (_Bool)executeWithApp:(id)arg1 launchOptions:(id)arg2 isResume:(_Bool)arg3;
- (id)init;

@end

