//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSObject, TTVCommodityButton, TTVVideoPlayerStateStore;
@protocol TTVCommodityButtonViewDelegate;

@interface TTVCommodityButtonView : UIView
{
    NSObject<TTVCommodityButtonViewDelegate> *_delegate;
    TTVVideoPlayerStateStore *_playerStateStore;
    NSArray *_commoditys;
    TTVCommodityButton *_buttonView;
}

@property(retain, nonatomic) TTVCommodityButton *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) NSArray *commoditys; // @synthesize commoditys=_commoditys;
@property(retain, nonatomic) TTVVideoPlayerStateStore *playerStateStore; // @synthesize playerStateStore=_playerStateStore;
@property(nonatomic) __weak NSObject<TTVCommodityButtonViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)ttv_clickCommodityTrack;
- (void)ttv_showCommodityTrack;
- (id)commonDic;
- (id)ttv_position;
- (void)actionChangeCallbackWithAction:(id)arg1 state:(id)arg2;
- (void)changeEntityWithPlaybackTime:(double)arg1;
- (void)ttv_kvo;
- (void)dealloc;
- (void)ttv_clickCommodityButton;
- (id)init;

@end
