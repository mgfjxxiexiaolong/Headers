//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WEALTHToString.h"

@class NSString;

@interface WEALTHFundFreezeDetailQueryReq : WEALTHToString
{
    int _currentPage;
    int _pageSize;
    NSString *_freezeType;
}

@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) int currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSString *freezeType; // @synthesize freezeType=_freezeType;
- (void).cxx_destruct;

@end

