//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <QQMainProject/QQAudioPlayDelegate-Protocol.h>
#import <QQMainProject/QQAudioSessionManagerDelegate-Protocol.h>
#import <QQMainProject/QQCircularProgressViewDelegate-Protocol.h>
#import <QQMainProject/QQPttRecorderDelegate-Protocol.h>
#import <QQMainProject/QQPttTouchDelegate-Protocol.h>
#import <QQMainProject/QQVoiceAnimDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>
#import <QQMainProject/UICollectionViewDataSource-Protocol.h>
#import <QQMainProject/UICollectionViewDelegate-Protocol.h>
#import <QQMainProject/UIScrollViewDelegate-Protocol.h>
#import <QQMainProject/VoiceChangeDelegate-Protocol.h>
#import <QQMainProject/VolumeMeterDelegate-Protocol.h>

@class NSString, NSTimer, QQAudioPlayView, QQChangeVoicePlayPanel, QQMessageModel, QQPttRecordBtn, QQPttRecorder, QQVoicePlayAnimationView, UIActivityIndicatorView, UIButton, UILabel, UIScrollView, UIView;
@protocol ClickRecordViewProtocol;

@interface ClickRecordViewController : UIViewController <QQPttRecorderDelegate, QQAudioSessionManagerDelegate, QQAudioPlayDelegate, QQPttTouchDelegate, VoiceChangeDelegate, UIAlertViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, QQCircularProgressViewDelegate, VolumeMeterDelegate, QQVoiceAnimDelegate, UIScrollViewDelegate>
{
    UIView *_bgView;
    UIView *_sheetView;
    UIActivityIndicatorView *_indicator;
    UIButton *_btnStart;
    UIButton *_btnRecord;
    UIButton *_btnCancel;
    UIButton *_btnSend;
    UILabel *_labelBeginText;
    UILabel *_labelTime;
    UILabel *_preparingTipsLable;
    QQVoicePlayAnimationView *_voicePlayAnimView;
    _Bool _bDeviceOk;
    NSTimer *_timer;
    double _recordTime;
    _Bool _bRecording;
    _Bool _voiceChange;
    _Bool _bShort;
    _Bool _bFristFail;
    _Bool _bLessthanIPhone5;
    struct CGRect _contentFrame;
    id <ClickRecordViewProtocol> _recordDelegate;
    long long _maxRecordTimeLength;
    NSString *_uuid;
    QQMessageModel *_pttMessageModel;
    QQAudioPlayView *_audioPlayView;
    _Bool *_isMaskViewShowed;
    QQPttRecorder *_recorder;
    int _xo;
    int _pttFormat;
    _Bool _hasSetPttFormat;
    id _chatViewController;
    QQPttRecordBtn *_pushButton;
    UIScrollView *_scrollView;
    QQChangeVoicePlayPanel *_voiceChangePlayPanel;
}

@property(nonatomic) _Bool *isMaskViewShowed; // @synthesize isMaskViewShowed=_isMaskViewShowed;
- (void).cxx_destruct;
- (_Bool)needShowVoiceAnimation;
- (float)getCurrentVoicePeakPower;
- (void)hideAudioMask;
- (void)showAudioMask;
- (double)peakPowerLevel;
- (void)dealWithIntterrupt;
- (_Bool)unregisteListener;
- (_Bool)registeListener;
- (void)applicationEnterBackground;
- (void)videoReqInterrupt;
- (void)pttUploaderNotificationHandle:(id)arg1;
- (void)LogoutNotification;
- (void)onRecordCancel:(id)arg1;
- (void)onRecordData:(id)arg1 recordTime:(double)arg2;
- (void)onDeviceReady:(id)arg1;
- (void)onRecordBeInterrupt;
- (void)onRecordReady:(id)arg1;
- (void)onRecordTimeOut:(id)arg1;
- (_Bool)checkAndShowGroupAudioChattingTips;
- (void)onRecordFailed:(id)arg1;
- (void)onRecordEnd:(id)arg1 send:(_Bool)arg2;
- (double)getRecordTime;
- (_Bool)stopRecording;
- (_Bool)startRecorde;
- (_Bool)startRecording;
- (void)setPttFormat:(int)arg1;
- (id)InitPttRecorder:(double)arg1;
@property(readonly, nonatomic) QQPttRecorder *recorder; // @dynamic recorder;
- (void)sendPtt;
- (void)uploadPtt;
- (id)GenMessageModel;
- (void)onRecordTooShort:(id)arg1;
- (void)initRecordArgu;
- (id)initWithDelegate:(id)arg1;
- (id)initWithChatViewController:(id)arg1;
- (void)touchEnd:(id)arg1;
- (void)touchCancel:(id)arg1;
- (void)touchMove:(id)arg1;
- (void)touchBegin:(id)arg1;
- (void)send;
- (void)OnSend;
- (void)OnCancel;
- (void)configAccTimeLAbel;
- (void)updateTimeLabel:(int)arg1;
- (void)timerAdvanced:(id)arg1;
- (void)startTimer;
- (void)isDeviceOk;
- (void)resetToStart;
- (void)onPlayedTime:(int)arg1;
- (_Bool)isOnAuditionState;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onAuthResult:(id)arg1;
- (void)onRfreshVoiceChangePanel;
- (void)showVoiceChangePanel;
- (void)showAudioPlayView;
- (void)onClickRecordBtn:(id)arg1;
- (void)publicAccReport:(id)arg1 withExfield:(id)arg2;
- (void)ctrClickReport;
- (void)onClickStartBtn:(id)arg1;
- (void)dealloc;
- (_Bool)shouldAutorotate;
- (void)setSendBtnTitle:(id)arg1;
- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)attachMainView:(id)arg1 frame:(struct CGRect)arg2;
- (void)show;

// Remaining properties
@property(nonatomic) _Bool bDeviceOk; // @dynamic bDeviceOk;
@property(nonatomic) _Bool bRecording; // @dynamic bRecording;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long maxRecordTimeLength; // @dynamic maxRecordTimeLength;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;
@property(nonatomic) _Bool voiceChange; // @dynamic voiceChange;

@end

