//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface AWEStoryPenType : NSObject
{
    unsigned long long _brushType;
    NSString *_brushName;
    NSString *_imageName;
}

+ (id)brushNameForType:(unsigned long long)arg1;
+ (id)imageNameAndType;
+ (id)imageNames;
+ (id)penTypeWithFBBrush:(unsigned long long)arg1;
+ (id)allPenTypes;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *brushName; // @synthesize brushName=_brushName;
@property(nonatomic) unsigned long long brushType; // @synthesize brushType=_brushType;
- (void).cxx_destruct;

@end
