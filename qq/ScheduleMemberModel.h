//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ScheduleMemberModel : NSObject
{
    unsigned long long MemUin;
    unsigned long long Source_id;
    short uint16_source_type;
    unsigned long long uint64_group_uin;
    unsigned long long uint64_root_id;
    NSString *_showName;
    NSString *_nameSortKey;
}

@property(copy, nonatomic) NSString *nameSortKey; // @synthesize nameSortKey=_nameSortKey;
@property(copy, nonatomic) NSString *showName; // @synthesize showName=_showName;
- (void)dealloc;

@end
