//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface XLSWaterConfig : NSObject
{
    int _type;
    int _contentId;
    int _timeStampId;
    NSString *_license;
}

@property(copy, nonatomic) NSString *license; // @synthesize license=_license;
@property(nonatomic) int timeStampId; // @synthesize timeStampId=_timeStampId;
@property(nonatomic) int contentId; // @synthesize contentId=_contentId;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;

@end
