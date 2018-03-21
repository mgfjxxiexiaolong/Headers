//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSArray, NSString, UIImage, UIView;

@interface MirrorBusinessShareScrollView : UIScrollView
{
    _Bool _uiReady;
    NSArray *_data;
    UIImage *_photoImage;
    CDUnknownBlockType _loadResultBlock;
    UIView *_photoCell;
    NSString *_shop;
}

@property(nonatomic) _Bool uiReady; // @synthesize uiReady=_uiReady;
@property(retain, nonatomic) NSString *shop; // @synthesize shop=_shop;
@property(retain, nonatomic) UIView *photoCell; // @synthesize photoCell=_photoCell;
@property(copy, nonatomic) CDUnknownBlockType loadResultBlock; // @synthesize loadResultBlock=_loadResultBlock;
@property(retain, nonatomic) UIImage *photoImage; // @synthesize photoImage=_photoImage;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)checkAndHandleReady;
- (void)setupUI;
- (void)renderData:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;

@end
