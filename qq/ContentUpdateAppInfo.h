//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface ContentUpdateAppInfo : NSObject
{
    unsigned int _appID;
    NSMutableArray *_appInfoArr;
}

@property(retain, nonatomic) NSMutableArray *appInfoArr; // @synthesize appInfoArr=_appInfoArr;
@property(nonatomic) unsigned int appID; // @synthesize appID=_appID;
- (void).cxx_destruct;
- (id)init;

@end
