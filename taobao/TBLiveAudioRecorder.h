//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAudioRecorder, NSString;
@protocol TBLiveAudioRecorderDelegate;

@interface TBLiveAudioRecorder : NSObject
{
    NSString *_category;
    unsigned long long _categoryOptions;
    _Bool _nowPause;
    AVAudioRecorder *_recorder;
    id <TBLiveAudioRecorderDelegate> _delegate;
}

@property(nonatomic) __weak id <TBLiveAudioRecorderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool nowPause; // @synthesize nowPause=_nowPause;
@property(retain, nonatomic) AVAudioRecorder *recorder; // @synthesize recorder=_recorder;
- (void).cxx_destruct;
- (id)tempFilePath;
- (id)tempFileName;
- (id)getAudioRecorderSettingDict;
- (void)discardRecordAudio;
- (void)endRecordAudio;
- (_Bool)beginRecordAudio;
- (_Bool)prepareRecordAudio;
- (_Bool)isRecordingAudio;
- (void)stopRecordAudioWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)startRecordAudioWithFilePath:(id)arg1;

@end
