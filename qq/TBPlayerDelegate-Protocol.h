//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class AVPlayerItem, TBImageView, TBPlayer;

@protocol TBPlayerDelegate <NSObject>

@optional
- (void)player:(TBPlayer *)arg1 itemPlaybackBufferIsEmpty:(AVPlayerItem *)arg2;
- (void)player:(TBPlayer *)arg1 didUpdateLoadedTimeRanges:(CDStruct_e83c9415)arg2;
- (void)player:(TBPlayer *)arg1 didSetupTBImageView:(TBImageView *)arg2;
- (void)player:(TBPlayer *)arg1 itemReadyToPlay:(AVPlayerItem *)arg2;
- (void)player:(TBPlayer *)arg1 didReachEndForItem:(AVPlayerItem *)arg2;
- (void)player:(TBPlayer *)arg1 didChangeItem:(AVPlayerItem *)arg2;
- (void)player:(TBPlayer *)arg1 didPlay:(CDStruct_1b6d18a9)arg2 loopsCount:(long long)arg3;
@end
