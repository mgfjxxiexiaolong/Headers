//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAudioRecorderDelegate-Protocol.h"

@class AVAudioRecorder, NSString;

@interface KSAudioRecorder : NSObject <AVAudioRecorderDelegate>
{
    _Bool _isCancelling;
    AVAudioRecorder *_audioRecorder;
    CDUnknownBlockType _onSuccess;
    CDUnknownBlockType _onError;
    long long _categoryIndex;
}

@property(nonatomic) long long categoryIndex; // @synthesize categoryIndex=_categoryIndex;
@property(nonatomic) _Bool isCancelling; // @synthesize isCancelling=_isCancelling;
@property(copy, nonatomic) CDUnknownBlockType onError; // @synthesize onError=_onError;
@property(copy, nonatomic) CDUnknownBlockType onSuccess; // @synthesize onSuccess=_onSuccess;
@property(retain, nonatomic) AVAudioRecorder *audioRecorder; // @synthesize audioRecorder=_audioRecorder;
- (void).cxx_destruct;
- (void)audioRecorderEncodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioRecorderDidFinishRecording:(id)arg1 successfully:(_Bool)arg2;
- (_Bool)recording;
- (void)cancel;
- (void)stop;
- (void)pause;
- (void)record;
- (void)restoreAudioSession;
- (void)prepareAudioSession;
- (void)prepareToRecord;
- (void)dealloc;
- (id)initWithOutputPath:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
