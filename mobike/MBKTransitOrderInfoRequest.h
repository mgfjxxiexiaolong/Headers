//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKMobikeRequest.h"

@interface MBKTransitOrderInfoRequest : MBKMobikeRequest
{
    long long _status;
    long long _page;
    long long _pageSize;
}

@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(nonatomic) long long status; // @synthesize status=_status;
- (id)init;

@end
