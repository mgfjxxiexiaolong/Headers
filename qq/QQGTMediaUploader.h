//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSURLConnectionDataDelegate-Protocol.h>

@class NSMutableData, NSString, NSTimer, NSURLConnection;

@interface QQGTMediaUploader : NSObject <NSURLConnectionDataDelegate>
{
    NSURLConnection *_urlConnection;
    NSTimer *_connectTimer;
    NSMutableData *_rawData;
    CDUnknownBlockType _uploadCallback;
}

@property(copy, nonatomic) CDUnknownBlockType uploadCallback; // @synthesize uploadCallback=_uploadCallback;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (_Bool)uploadMediaFile:(id)arg1 forType:(int)arg2 cgiArgu:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)getDataForFile:(id)arg1;
- (void)uploadMediaFileResult:(int)arg1 errMsg:(id)arg2;
- (void)uploadMediaFileTimeout;
- (void)cancelRequest;
- (void)cancelTimer;
- (void)startTimer;
- (void)cancelTask;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

