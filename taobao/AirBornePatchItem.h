//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AirBornePreItem, NSString;

@interface AirBornePatchItem : NSObject
{
    int _type;
    NSString *_experId;
    NSString *_version;
    AirBornePreItem *_abPreItem;
}

+ (id)offlineItemWithExperId:(id)arg1;
+ (id)itemWithDepolyDict:(id)arg1;
+ (id)itemWithDict:(id)arg1;
@property(retain) AirBornePreItem *abPreItem; // @synthesize abPreItem=_abPreItem;
@property(retain) NSString *version; // @synthesize version=_version;
@property(retain) NSString *experId; // @synthesize experId=_experId;
@property int type; // @synthesize type=_type;
- (void).cxx_destruct;

@end
