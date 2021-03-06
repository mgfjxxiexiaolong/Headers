//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AVCaptureAudioDataOutputSampleBufferDelegate-Protocol.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class AVCaptureAudioDataOutput, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, HTSAudioCapture, HTSCameraConfiguration, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HTSCameraKit : UIView <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate>
{
    AVCaptureDevice *micphone;
    AVCaptureDeviceInput *audioInput;
    AVCaptureAudioDataOutput *audioOutput;
    AVCaptureDeviceInput *videoInput;
    AVCaptureVideoDataOutput *videoOutput;
    AVCaptureDevice *lastCamera;
    AVCaptureDeviceInput *lastCameraInput;
    NSObject<OS_dispatch_queue> *videoCaptureQueue;
    NSObject<OS_dispatch_queue> *audioCaptureQueue;
    double curOffset;
    double curExposureDuration;
    void *operationQueueKey;
    _Bool _adjustCompleteFlag;
    _Bool _capturePaused;
    _Bool _captureWithAudio;
    HTSCameraConfiguration *_configuration;
    AVCaptureSession *_captureSession;
    CDUnknownBlockType _videoOutputCallback;
    CDUnknownBlockType _audioOutputCallback;
    HTSAudioCapture *_audioCapture;
    NSObject<OS_dispatch_queue> *_operationQueue;
    AVCaptureDevice *_inputCamera;
    NSMutableArray *_observerArray;
}

@property(nonatomic, getter=isCaptureWithAudio) _Bool captureWithAudio; // @synthesize captureWithAudio=_captureWithAudio;
@property(nonatomic) _Bool capturePaused; // @synthesize capturePaused=_capturePaused;
@property _Bool adjustCompleteFlag; // @synthesize adjustCompleteFlag=_adjustCompleteFlag;
@property(retain, nonatomic) NSMutableArray *observerArray; // @synthesize observerArray=_observerArray;
@property(retain, nonatomic) AVCaptureDevice *inputCamera; // @synthesize inputCamera=_inputCamera;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) HTSAudioCapture *audioCapture; // @synthesize audioCapture=_audioCapture;
@property(copy, nonatomic) CDUnknownBlockType audioOutputCallback; // @synthesize audioOutputCallback=_audioOutputCallback;
@property(copy, nonatomic) CDUnknownBlockType videoOutputCallback; // @synthesize videoOutputCallback=_videoOutputCallback;
@property(readonly, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(readonly, nonatomic) HTSCameraConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObservers;
- (void)addObservers;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)setHighFramerateEnable:(_Bool)arg1;
- (_Bool)setTorchEnable:(_Bool)arg1;
- (_Bool)setExposureMode:(long long)arg1;
- (_Bool)setContinuousAutofocus:(_Bool)arg1;
- (_Bool)setExposurePoint:(struct CGPoint)arg1;
- (_Bool)setFocusPoint:(struct CGPoint)arg1;
- (_Bool)hasFlash;
- (_Bool)cameraRampToZoomFactor:(double)arg1;
- (double)maxCameraZoomFactor;
- (double)currentCameraZoomFactor;
- (_Bool)cameraZoomSupported;
- (void)setFrameRate:(unsigned long long)arg1;
- (void)setSessionPreset:(id)arg1;
- (long long)cameraPosition;
- (void)checkExposureReady;
- (void)switchCameraPosition:(id)arg1;
- (void)resumeCameraCapture;
- (void)pauseCameraCapture;
- (void)stopCameraCapture;
- (void)startCameraCapture;
- (_Bool)isRunning;
- (void)removeInputsAndOutputs;
- (_Bool)removeAudioInputsAndOutputs;
- (_Bool)addAudioInputsAndOutputs;
- (void)dealloc;
- (void)setMirror:(_Bool)arg1;
- (void)setBias:(double)arg1;
- (CDStruct_1b6d18a9)calculateExposureDuration;
- (double)calculateISOAccordingOffset:(double)arg1;
- (void)adjustExposure;
- (void)weakenExposure;
- (void)strengthExposure;
- (void)setStablizationMode:(long long)arg1;
- (_Bool)isStablizationSupported;
- (void)setPortrait;
- (void)chooseCameraForHighFrameRate:(id)arg1;
- (id)initWithCameraConfiguration:(id)arg1;
- (id)init;
- (void)runSyncOnOperationQueue:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

