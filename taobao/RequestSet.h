//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NlsRequestASR, NlsRequestASROUT, NlsRequestDS, NlsRequestGDS, NlsRequestTTS, NlsRequestXY;

@interface RequestSet : NSObject
{
    NlsRequestXY *_xy_in;
    NlsRequestGDS *_gds_in;
    NlsRequestDS *_ds_in;
    NlsRequestTTS *_tts_in;
    NlsRequestASR *_asr_in;
    NlsRequestASROUT *_asr_out;
    NSDictionary *_ext_userIn;
}

@property(copy, nonatomic) NSDictionary *ext_userIn; // @synthesize ext_userIn=_ext_userIn;
@property(retain, nonatomic) NlsRequestASROUT *asr_out; // @synthesize asr_out=_asr_out;
@property(retain, nonatomic) NlsRequestASR *asr_in; // @synthesize asr_in=_asr_in;
@property(retain, nonatomic) NlsRequestTTS *tts_in; // @synthesize tts_in=_tts_in;
@property(retain, nonatomic) NlsRequestDS *ds_in; // @synthesize ds_in=_ds_in;
@property(retain, nonatomic) NlsRequestGDS *gds_in; // @synthesize gds_in=_gds_in;
@property(retain, nonatomic) NlsRequestXY *xy_in; // @synthesize xy_in=_xy_in;
- (void).cxx_destruct;
- (id)init;

@end
