//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FRGCBoundarySectionPolygon : NSObject
{
    struct CGPath *_path;
}

- (void)dealloc;
- (id)initWithBytes:(const char *)arg1 length:(unsigned int)arg2 latLonCount:(unsigned int)arg3;
- (_Bool)containsCoordinate:(struct CLLocationCoordinate2D)arg1;

@end
