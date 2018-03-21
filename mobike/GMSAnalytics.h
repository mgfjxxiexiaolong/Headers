//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSAnalyticsTimer;

@interface GMSAnalytics : NSObject
{
    GMSAnalyticsTimer *_frameTimer;
    GMSAnalyticsTimer *_tilePrepTimer;
    GMSAnalyticsTimer *_tileUnpackTimer;
}

@property(readonly, nonatomic) GMSAnalyticsTimer *tileUnpackTimer; // @synthesize tileUnpackTimer=_tileUnpackTimer;
@property(readonly, nonatomic) GMSAnalyticsTimer *tilePrepTimer; // @synthesize tilePrepTimer=_tilePrepTimer;
@property(readonly, nonatomic) GMSAnalyticsTimer *frameTimer; // @synthesize frameTimer=_frameTimer;
- (void).cxx_destruct;
- (id)initWithAnalyticsLogger:(id)arg1;

@end
