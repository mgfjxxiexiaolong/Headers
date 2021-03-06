//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface KSVideoMusicRealTimeLogService : NSObject
{
    NSMutableSet *_exposuredItemIndexes;
    NSMutableDictionary *_exposuredItemsToUpload;
}

@property(retain, nonatomic) NSMutableDictionary *exposuredItemsToUpload; // @synthesize exposuredItemsToUpload=_exposuredItemsToUpload;
@property(retain, nonatomic) NSMutableSet *exposuredItemIndexes; // @synthesize exposuredItemIndexes=_exposuredItemIndexes;
- (void).cxx_destruct;
- (void)uploadExposureLogIfNeeded;
- (void)musicItemExposured:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)uploadActionLog:(short)arg1 forMusic:(id)arg2;

@end

