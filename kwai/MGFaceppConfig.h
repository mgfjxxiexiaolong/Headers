//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MGFaceppConfig : NSObject
{
    int _minFaceSize;
    int _interval;
    int _orientation;
    float _faceConfidenceFilter;
    float _dzt;
    unsigned long long _detectionMode;
    long long _pixelFormatType;
    CDStruct_51449276 _detectROI;
}

@property(nonatomic) float dzt; // @synthesize dzt=_dzt;
@property(nonatomic) float faceConfidenceFilter; // @synthesize faceConfidenceFilter=_faceConfidenceFilter;
@property(nonatomic) long long pixelFormatType; // @synthesize pixelFormatType=_pixelFormatType;
@property(nonatomic) CDStruct_51449276 detectROI; // @synthesize detectROI=_detectROI;
@property(nonatomic) unsigned long long detectionMode; // @synthesize detectionMode=_detectionMode;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(nonatomic) int interval; // @synthesize interval=_interval;
@property(nonatomic) int minFaceSize; // @synthesize minFaceSize=_minFaceSize;
- (id)init;

@end

