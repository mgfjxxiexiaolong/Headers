//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSArray, NSString;

@interface VRBFaceGameRespModel : QQModel
{
    int _uint32_status;
    int _uint32_start_time;
    int _uint32_rest_time;
    int _uint32_score_max;
    int _uint32_cur_score;
    int _uint32_red_packet_percent;
    int _uint32_red_packet_win;
    NSArray *_rpt_uint32_emoji_id;
    NSString *_authkey;
}

@property(retain, nonatomic) NSString *authkey; // @synthesize authkey=_authkey;
@property(nonatomic) int uint32_red_packet_win; // @synthesize uint32_red_packet_win=_uint32_red_packet_win;
@property(nonatomic) int uint32_red_packet_percent; // @synthesize uint32_red_packet_percent=_uint32_red_packet_percent;
@property(nonatomic) int uint32_cur_score; // @synthesize uint32_cur_score=_uint32_cur_score;
@property(nonatomic) int uint32_score_max; // @synthesize uint32_score_max=_uint32_score_max;
@property(nonatomic) int uint32_rest_time; // @synthesize uint32_rest_time=_uint32_rest_time;
@property(nonatomic) int uint32_start_time; // @synthesize uint32_start_time=_uint32_start_time;
@property(nonatomic) int uint32_status; // @synthesize uint32_status=_uint32_status;
@property(retain, nonatomic) NSArray *rpt_uint32_emoji_id; // @synthesize rpt_uint32_emoji_id=_rpt_uint32_emoji_id;
- (void).cxx_destruct;

@end

