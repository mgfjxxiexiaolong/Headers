//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SAFileReader : NSObject
{
    unsigned long long _fileSize;
}

@property(readonly, nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
- (id)calcuateSHA1;
- (id)calcuateMD5;
- (id)readChunkDataAtRange:(struct _NSRange)arg1;

@end
