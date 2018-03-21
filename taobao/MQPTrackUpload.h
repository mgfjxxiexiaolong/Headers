//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString;
@protocol MQPTrackUploadDelegate;

@interface MQPTrackUpload : NSObject
{
    NSString *_fileName;
    id <MQPTrackUploadDelegate> _delegate;
    long long _retryCount;
    long long _retryInterval;
    NSData *_logData;
}

+ (void)removeLogFile:(id)arg1;
@property(retain, nonatomic) NSData *logData; // @synthesize logData=_logData;
@property(nonatomic) long long retryInterval; // @synthesize retryInterval=_retryInterval;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) __weak id <MQPTrackUploadDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (void).cxx_destruct;
- (void)onDelegate:(_Bool)arg1;
- (_Bool)makeLogDataPackTask:(id)arg1;
- (_Bool)connectionWithLogFile:(id)arg1;
- (id)init;

@end
