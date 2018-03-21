//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, NSTimer, QQAVBarrageView, QQAVEatbeansSubtitlesView, QQAVFilmSubtitlesView;

@interface QQAVFunSubtitlesViewController : UIViewController
{
    QQAVBarrageView *_barrageView;
    QQAVEatbeansSubtitlesView *_eatBeansView;
    QQAVFilmSubtitlesView *_filmView;
    _Bool _isKoutu;
    NSTimer *_checkTimer;
    NSTimer *_testTimer;
    int _testCount;
    struct CGRect _filmRect;
    _Bool _isFloating;
    NSString *_selfTag;
    NSString *_peerTag;
}

@property(copy, nonatomic) NSString *peerTag; // @synthesize peerTag=_peerTag;
@property(copy, nonatomic) NSString *selfTag; // @synthesize selfTag=_selfTag;
@property(nonatomic) _Bool isFloating; // @synthesize isFloating=_isFloating;
- (void)updateFrame;
- (void)setSubtitles:(id)arg1 tarText:(id)arg2 type:(int)arg3 statue:(int)arg4;
- (void)onSubTitlesNotification:(id)arg1;
- (void)onTest;
- (void)stopTest;
- (void)startTest;
- (void)onCheck;
- (void)stopCheck;
- (void)startCheck;
- (void)dealloc;
- (_Bool)isFilmModeShow;
- (void)setFilmModeViewFrame:(struct CGRect)arg1;
- (void)setControlBarShow:(_Bool)arg1;
- (void)stop;
- (void)initInterFace:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1;

@end
