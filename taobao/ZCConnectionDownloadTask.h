//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZCDownloadTask.h"

@class NSOutputStream, NSURLConnection;

@interface ZCConnectionDownloadTask : ZCDownloadTask
{
    unsigned long long _resumeThreshold;
    NSURLConnection *_connection;
    long long _totalBytesRead;
    NSOutputStream *_outputStream;
}

@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(nonatomic) long long totalBytesRead; // @synthesize totalBytesRead=_totalBytesRead;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) unsigned long long resumeThreshold; // @synthesize resumeThreshold=_resumeThreshold;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)cancelTask;
- (void)startTask;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;

@end

