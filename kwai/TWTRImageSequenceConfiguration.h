//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface TWTRImageSequenceConfiguration : NSObject
{
    UIImage *_imageSheet;
    unsigned long long _rows;
    unsigned long long _columns;
    unsigned long long _frameCount;
    double _duration;
    struct CGSize _imageSize;
}

+ (id)heartImageSequenceConfigurationForTweetDetails;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) unsigned long long frameCount; // @synthesize frameCount=_frameCount;
@property(nonatomic) unsigned long long columns; // @synthesize columns=_columns;
@property(nonatomic) unsigned long long rows; // @synthesize rows=_rows;
@property(retain, nonatomic) UIImage *imageSheet; // @synthesize imageSheet=_imageSheet;
- (void).cxx_destruct;

@end

