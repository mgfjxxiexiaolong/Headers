//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SSCDPSpaceInfo : NSObject
{
    int _height;
    int _width;
    int _rotationTime;
    NSString *_spaceCode;
    NSString *_type;
    NSString *_iosViewId;
    NSString *_androidViewId;
    NSString *_appId;
    NSArray *_spaceObjectList;
    NSString *_location;
    NSString *_updatePolicy;
    long long _reqRpcTime;
    NSString *_multiStyle;
}

+ (Class)spaceObjectListElementClass;
@property(nonatomic) int rotationTime; // @synthesize rotationTime=_rotationTime;
@property(retain, nonatomic) NSString *multiStyle; // @synthesize multiStyle=_multiStyle;
@property(nonatomic) long long reqRpcTime; // @synthesize reqRpcTime=_reqRpcTime;
@property(retain, nonatomic) NSString *updatePolicy; // @synthesize updatePolicy=_updatePolicy;
@property(nonatomic) int width; // @synthesize width=_width;
@property(nonatomic) int height; // @synthesize height=_height;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSArray *spaceObjectList; // @synthesize spaceObjectList=_spaceObjectList;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *androidViewId; // @synthesize androidViewId=_androidViewId;
@property(retain, nonatomic) NSString *iosViewId; // @synthesize iosViewId=_iosViewId;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *spaceCode; // @synthesize spaceCode=_spaceCode;
- (void).cxx_destruct;

@end

