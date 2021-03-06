//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZBaseCoverView.h>

@class NSString, QZPanoramaView;

@interface QZPanoramaCoverView : QZBaseCoverView
{
    _Bool _notInWindow;
    QZPanoramaView *_panoramaView;
    NSString *_panoramaUrl;
    NSString *_bgUrl;
}

@property(nonatomic) _Bool notInWindow; // @synthesize notInWindow=_notInWindow;
@property(retain, nonatomic) NSString *bgUrl; // @synthesize bgUrl=_bgUrl;
@property(retain, nonatomic) NSString *panoramaUrl; // @synthesize panoramaUrl=_panoramaUrl;
@property(retain, nonatomic) QZPanoramaView *panoramaView; // @synthesize panoramaView=_panoramaView;
- (_Bool)isPanoramaCoverViewInWindow;
- (_Bool)checkViewInWindow:(struct CGPoint *)arg1;
- (void)willEndDraging:(struct CGPoint *)arg1;

@end

