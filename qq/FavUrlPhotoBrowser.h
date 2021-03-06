//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/FavUrlPhoto.h>

#import <QQMainProject/FavVideoDelegate-Protocol.h>

@class FavPhotoInfo, NSString;

@interface FavUrlPhotoBrowser : FavUrlPhoto <FavVideoDelegate>
{
    FavPhotoInfo *_favPhotoInfo;
    NSString *_oriPhotoUrl;
    NSString *_bigPhotoUrl;
    _Bool _isOriginalDownloading;
    struct CGRect _thumbSmartClipRect;
}

@property(readonly, nonatomic) struct CGRect thumbSmartClipRect; // @synthesize thumbSmartClipRect=_thumbSmartClipRect;
@property(readonly, nonatomic) NSString *bigPhotoUrl; // @synthesize bigPhotoUrl=_bigPhotoUrl;
@property(retain, nonatomic) FavPhotoInfo *favPhotoInfo; // @synthesize favPhotoInfo=_favPhotoInfo;
- (void)cancelDownloadPhoto;
- (void)sendRequest;
- (void)downloadPhoto;
- (void)asynLoadImage;
- (void)onProgress:(id)arg1 progress:(float)arg2;
- (void)onDownload:(id)arg1 result:(int)arg2;
- (void)onUpload:(id)arg1 result:(int)arg2;
- (id)getThumbImage;
- (id)getImage;
- (void)downloadOriginalPhoto;
@property(readonly, nonatomic) _Bool isOriginalDownloading;
- (_Bool)shouldShowDownloadOriginal;
- (_Bool)isTinyVideo;
- (struct CGSize)getThumbSize;
- (id)GetMessageVideoInfo;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

