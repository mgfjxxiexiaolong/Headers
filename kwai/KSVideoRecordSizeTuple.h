//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface KSVideoRecordSizeTuple : NSObject
{
    NSString *_captureSessionPreset;
    struct CGSize _videoSize;
    struct CGSize _capturePresetSize;
}

@property(retain, nonatomic) NSString *captureSessionPreset; // @synthesize captureSessionPreset=_captureSessionPreset;
@property(nonatomic) struct CGSize capturePresetSize; // @synthesize capturePresetSize=_capturePresetSize;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
- (void).cxx_destruct;
- (id)initWithVideoSize:(struct CGSize)arg1 capturePresetSize:(struct CGSize)arg2 captureSessionPreset:(id)arg3;

@end
