//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLLocation, NSString;

@protocol TTGeocodeProtocol <NSObject>
+ (_Bool)isGeocodeSupported;
- (_Bool)isGeocodeSupported;
- (NSString *)uploadFieldName;
- (void)reverseGeocodeLocation:(CLLocation *)arg1 timeoutInterval:(double)arg2 completionHandler:(void (^)(id <TTGeocodeProtocol>, TTPlacemarkItem *, NSError *))arg3;

@optional
- (struct CLLocationCoordinate2D)convertToCustomCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)cancel;
@end

