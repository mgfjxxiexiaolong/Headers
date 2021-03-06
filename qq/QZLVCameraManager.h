//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCaptureSession, AVCaptureVideoPreviewLayer;
@protocol AVCaptureVideoDataOutputSampleBufferDelegate;

@interface QZLVCameraManager : NSObject
{
    long long _cameraFps;
    AVCaptureSession *_session;
    id <AVCaptureVideoDataOutputSampleBufferDelegate> _delegate;
    AVCaptureVideoPreviewLayer *_cameraLayer;
}

+ (long long)cameraAvailableState;
+ (_Bool)isBackCameraExist;
+ (_Bool)isFrontCameraExist;
+ (id)backCamera;
+ (id)frontCamera;
+ (id)cameraWithPosition:(long long)arg1;
+ (_Bool)turnLED:(_Bool)arg1 cameraPosition:(long long)arg2;
+ (_Bool)isLEDOn:(long long)arg1;
+ (_Bool)isEnableLED:(long long)arg1;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *cameraLayer; // @synthesize cameraLayer=_cameraLayer;
@property(nonatomic) __weak id <AVCaptureVideoDataOutputSampleBufferDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(nonatomic) long long cameraFps; // @synthesize cameraFps=_cameraFps;
- (void).cxx_destruct;
- (_Bool)focusAtPoint:(struct CGPoint)arg1;
- (void)stopSession;
- (_Bool)startSession;
- (void)setDefaultFPSIfNeeded;
- (_Bool)setCameraResolutionWidth:(long long)arg1 height:(long long)arg2;
- (_Bool)switchCamera:(_Bool)arg1;
- (long long)cameraPosition;
- (void)onCaptureSessionStopRunningNotification:(id)arg1;
- (void)onCaptureSessionErrorNotification:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

@end

