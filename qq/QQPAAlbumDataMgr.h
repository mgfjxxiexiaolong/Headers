//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/DBAccountChangedProtocol-Protocol.h>
#import <QQMainProject/DBAsyncCallbackProtocol-Protocol.h>
#import <QQMainProject/IQQDBOperationBase-Protocol.h>

@class GeneralLRUCache, NSMutableArray, NSString, QQPAAlbumDBOperation;

@interface QQPAAlbumDataMgr : NSObject <DBAccountChangedProtocol, IQQDBOperationBase, DBAsyncCallbackProtocol>
{
    QQPAAlbumDBOperation *_albumDataDB_OP;
    NSMutableArray *_albumDataCacheArray;
    GeneralLRUCache *_imageCache;
    NSString *_selfUin;
}

+ (id)GetInstance;
@property(copy, nonatomic) NSString *selfUin; // @synthesize selfUin=_selfUin;
- (void).cxx_destruct;
- (void)onClearCacheEnd;
- (void)clearPreDownloadCacheFiles;
- (_Bool)isHitCacheImage:(id)arg1;
- (id)loadCacheImagePreDownload:(id)arg1;
- (id)loadCacheImage:(id)arg1 photoIndex:(unsigned long long)arg2;
- (void)updateAlbumDataWithModel:(id)arg1;
- (id)getAlbumDataWithAlbumId:(id)arg1;
- (id)getAlbumDataFromCacheWithAlbumId:(id)arg1;
- (void)insertAlbumDataToCacheWithModel:(id)arg1;
- (void)onDbAsyncCallback:(id)arg1 userdata:(id)arg2 workID:(int)arg3;
- (void)onDBChanged:(id)arg1;
- (unsigned long long)getTableSign;
- (void)dealloc;
- (void)initAlbumDataTable;
- (id)initWithUin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

