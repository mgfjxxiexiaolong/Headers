//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMultiPoint.h"

#import "MMOverlay-Protocol.h"

@class NSString;

@interface MMPolyline : MMMultiPoint <MMOverlay>
{
}

+ (id)polylineWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
+ (id)polylineWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
- (id)initWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
- (id)initWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;

// Remaining properties
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
