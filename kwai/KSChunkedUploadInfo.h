//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSUBaseResponse.h"

@class NSString;

@interface KSChunkedUploadInfo : KSUBaseResponse
{
    NSString *_fileKey;
    unsigned long long _partSize;
}

@property(nonatomic) unsigned long long partSize; // @synthesize partSize=_partSize;
@property(retain, nonatomic) NSString *fileKey; // @synthesize fileKey=_fileKey;
- (void).cxx_destruct;

@end

