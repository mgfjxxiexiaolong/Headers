//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableDictionary, TTVPlayerStateStore;

@interface TTVPlayerSliderMarkPointView : UIView
{
    TTVPlayerStateStore *_playerStateStore;
    NSMutableDictionary *_itemViews;
    unsigned long long _pointStyle;
}

@property(nonatomic) unsigned long long pointStyle; // @synthesize pointStyle=_pointStyle;
@property(retain, nonatomic) NSMutableDictionary *itemViews; // @synthesize itemViews=_itemViews;
@property(retain, nonatomic) TTVPlayerStateStore *playerStateStore; // @synthesize playerStateStore=_playerStateStore;
- (void).cxx_destruct;
- (void)ttv_updateitemViewsFrame;
- (struct CGRect)itemViewFrame;
- (void)ttv_refreshSliderViewWithInsertTimes;
- (void)updateFrame;
- (void)ttv_addKVO;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2;
- (void)dealloc;

@end

