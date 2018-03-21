//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray;

@interface hw264encoder : NSObject
{
    void *phw264Enc;
    CDUnknownFunctionPointerType pEncCB;
    int m_nWidth;
    int m_nHeight;
    char *pNalData;
    NSMutableArray *pFrameIndex;
    int m_nBitrate;
    int m_nFrameRate;
    int m_nFrameType;
    int m_nEncBitrate;
    int m_nEncFrameType;
    int m_nEncFrameRate;
    int m_nKeyDuration;
    int m_baseTime;
    int m_nEnableVbr;
    int m_nEnableBFrame;
    NSLock *IndexLock;
    unsigned long long m_nRecordTime;
    struct OpaqueVTCompressionSession *_compressionSession;
    struct __CVPixelBufferPool *_pool;
}

@property struct __CVPixelBufferPool *pool; // @synthesize pool=_pool;
@property struct OpaqueVTCompressionSession *compressionSession; // @synthesize compressionSession=_compressionSession;
- (void).cxx_destruct;
- (int)set_key_duration:(int)arg1;
- (int)enc_configure_property:(int)arg1 withData:(int)arg2;
- (int)DoIndexFind;
- (void)DoEncCB:(char *)arg1 withlength:(int)arg2 withNal:(char *)arg3 withNallength:(int)arg4 withDataFormat:(int)arg5 withIndex:(int)arg6;
- (void)SetParam:(struct __CFDictionary *)arg1 withkey:(struct __CFString *)arg2 withValue:(int)arg3;
- (void)setEncCallback:(void *)arg1 withFunction:(CDUnknownFunctionPointerType)arg2;
- (int)releaseencoder;
- (int)doencoder:(const char *)arg1 withDataLen:(int)arg2 withFrameIndex:(int)arg3 withSyncId:(int)arg4;
- (int)initencoder:(int)arg1 withHeight:(int)arg2 withBitrate:(int)arg3 WithFrameRate:(int)arg4 WithBFrame:(int)arg5 WithEnableVBR:(int)arg6;

@end
