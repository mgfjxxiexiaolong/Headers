//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBCatchMoveInfo : NSObject
{
    long long _time;
    struct CLLocationCoordinate2D _coor;
}

+ (id)moveInfoWithCoor:(struct CLLocationCoordinate2D)arg1 time:(long long)arg2;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(nonatomic) struct CLLocationCoordinate2D coor; // @synthesize coor=_coor;

@end

