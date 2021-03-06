//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "HTSVideoNetMusicCollectionViewModel-Protocol.h"

@class NSError, NSMutableArray, NSString;

@interface HTSVideoNetMusicCollectionAppendableViewModel : NSObject <HTSVideoNetMusicCollectionViewModel>
{
    _Bool _loaded;
    NSError *_error;
    NSMutableArray *_audioCollections;
    CDUnknownBlockType _headerRefreshing;
    CDUnknownBlockType _footerRefreshing;
}

@property(copy, nonatomic) CDUnknownBlockType footerRefreshing; // @synthesize footerRefreshing=_footerRefreshing;
@property(copy, nonatomic) CDUnknownBlockType headerRefreshing; // @synthesize headerRefreshing=_headerRefreshing;
@property(retain, nonatomic) NSMutableArray *audioCollections; // @synthesize audioCollections=_audioCollections;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
- (void).cxx_destruct;
- (void)updateWithAudioCollections:(id)arg1;
- (void)appendAudioCollections:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

