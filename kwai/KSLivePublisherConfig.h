//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface KSLivePublisherConfig : NSObject
{
    NSNumber *_kbps;
    NSNumber *_fps;
    NSString *_resolution;
    NSNumber *_videoMaxBitrate;
    NSNumber *_videoMinBitrate;
    NSNumber *_videoInitBitrate;
    NSNumber *_audioBitrate;
    NSNumber *_iFrameInterval;
}

@property(retain, nonatomic) NSNumber *iFrameInterval; // @synthesize iFrameInterval=_iFrameInterval;
@property(retain, nonatomic) NSNumber *audioBitrate; // @synthesize audioBitrate=_audioBitrate;
@property(retain, nonatomic) NSNumber *videoInitBitrate; // @synthesize videoInitBitrate=_videoInitBitrate;
@property(retain, nonatomic) NSNumber *videoMinBitrate; // @synthesize videoMinBitrate=_videoMinBitrate;
@property(retain, nonatomic) NSNumber *videoMaxBitrate; // @synthesize videoMaxBitrate=_videoMaxBitrate;
@property(retain, nonatomic) NSString *resolution; // @synthesize resolution=_resolution;
@property(retain, nonatomic) NSNumber *fps; // @synthesize fps=_fps;
@property(retain, nonatomic) NSNumber *kbps; // @synthesize kbps=_kbps;
- (void).cxx_destruct;
- (id)init;

@end

