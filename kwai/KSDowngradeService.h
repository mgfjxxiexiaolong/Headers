//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSCDNDowngradeConfigration, NSArray;

@interface KSDowngradeService : NSObject
{
    _Bool _isFetchingDowngradeConfigrationFromCDN;
    KSCDNDowngradeConfigration *_downgradeConfigration;
    NSArray *_fetchingDowngradeConfigrationCDNUrls;
    unsigned long long _currentFetchingDowngradeConfigrationCDNIndex;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isFetchingDowngradeConfigrationFromCDN; // @synthesize isFetchingDowngradeConfigrationFromCDN=_isFetchingDowngradeConfigrationFromCDN;
@property(nonatomic) unsigned long long currentFetchingDowngradeConfigrationCDNIndex; // @synthesize currentFetchingDowngradeConfigrationCDNIndex=_currentFetchingDowngradeConfigrationCDNIndex;
@property(retain, nonatomic) NSArray *fetchingDowngradeConfigrationCDNUrls; // @synthesize fetchingDowngradeConfigrationCDNUrls=_fetchingDowngradeConfigrationCDNUrls;
@property(retain, nonatomic) KSCDNDowngradeConfigration *downgradeConfigration; // @synthesize downgradeConfigration=_downgradeConfigration;
- (void).cxx_destruct;
- (id)currentTimeVersion;
- (void)logWithConfigrationVersion:(id)arg1;
- (_Bool)disableFeedStat;
- (_Bool)disableCheckFilter;
- (_Bool)enableDelayUpload;
- (void)restructDowngradeData:(id)arg1;
- (void)requestDowngradeConfigrationWithVersion:(id)arg1;
- (void)requestDowngradeConfigration;
- (id)init;
- (id)geoHashForKey:(id)arg1 latitude:(double)arg2 longitude:(double)arg3;

@end

