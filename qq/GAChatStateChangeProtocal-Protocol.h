//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSArray;

@protocol GAChatStateChangeProtocal <NSObject>

@optional
- (void)onMemberSuspectNoisy:(int)arg1 inMemArray:(NSArray *)arg2;
- (_Bool)onSwitchToBarAnimation;
- (void)onShowWaitView;
- (void)onMemberAllUpdate;
- (void)onPPTUploadSate:(int)arg1 inMemArray:(NSArray *)arg2 withPPTUploadSate:(int)arg3;
- (void)onMemberVideoTypeChange:(int)arg1 inMemArray:(NSArray *)arg2;
- (void)onMemberCancelBanAudio:(int)arg1 inMemArray:(NSArray *)arg2;
- (void)onMemberBanAudio:(int)arg1 inMemArray:(NSArray *)arg2;
- (void)onMemberAudioOut:(int)arg1 inMemArray:(NSArray *)arg2;
- (void)onMemberAudioIn:(int)arg1 inMemArray:(NSArray *)arg2;
- (void)onMemberScreenOut:(int)arg1 inMemArray:(NSArray *)arg2;
- (void)onMemberScreenIn:(int)arg1 inMemArray:(NSArray *)arg2;
- (void)onMemberPPTOut:(int)arg1 inMemArray:(NSArray *)arg2;
- (void)onMemberPPTIn:(int)arg1 inMemArray:(NSArray *)arg2;
- (void)onMemberVideoOut:(int)arg1 inMemArray:(NSArray *)arg2;
- (void)onMemberVideoIn:(int)arg1 inMemArray:(NSArray *)arg2;
- (void)onMemberStopSpeaking:(int)arg1 inMemArray:(NSArray *)arg2;
- (void)onMemberStartSpeaking:(int)arg1 inMemArray:(NSArray *)arg2;
- (void)onMemberGetOut:(int)arg1 withGroupID:(long long)arg2 inMemArray:(NSArray *)arg3;
- (void)onMemberGetIn:(int)arg1 withGroupID:(long long)arg2 inMemArray:(NSArray *)arg3;
@end

