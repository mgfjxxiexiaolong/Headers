//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSMutableArray;

@interface ARMediaGetResult : NSObject
{
    int _uint32_share_flag;
    int _uint32_is_end;
    int _uint32_total_send_count;
    int _uint32_total_recv_count;
    NSMutableArray *_arMediaList;
    NSData *_bytes_rsp_page_cookies;
}

@property(nonatomic) int uint32_total_recv_count; // @synthesize uint32_total_recv_count=_uint32_total_recv_count;
@property(nonatomic) int uint32_total_send_count; // @synthesize uint32_total_send_count=_uint32_total_send_count;
@property(retain, nonatomic) NSData *bytes_rsp_page_cookies; // @synthesize bytes_rsp_page_cookies=_bytes_rsp_page_cookies;
@property(nonatomic) int uint32_is_end; // @synthesize uint32_is_end=_uint32_is_end;
@property(nonatomic) int uint32_share_flag; // @synthesize uint32_share_flag=_uint32_share_flag;
@property(retain, nonatomic) NSMutableArray *arMediaList; // @synthesize arMediaList=_arMediaList;
- (void).cxx_destruct;

@end

