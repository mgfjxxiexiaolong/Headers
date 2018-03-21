//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSUBaseResponse.h"

#import "KSLivePlayInfo-Protocol.h"
#import "NSCoding-Protocol.h"

@class KSLiveRaceModel, NSArray, NSDictionary, NSString;

@interface KSLiveAudienceRefreshPlayResponse : KSUBaseResponse <KSLivePlayInfo, NSCoding>
{
    _Bool _isFromLiveMate;
    NSString *_liveStreamId;
    NSDictionary *_stat;
    NSString *_playRtmpUrl;
    NSArray *_playUrls;
    NSString *_locale;
    NSArray *_multiResolutionPlayUrls;
    KSLiveRaceModel *_race;
    NSString *_attach;
}

@property(retain, nonatomic) NSString *attach; // @synthesize attach=_attach;
@property(retain, nonatomic) KSLiveRaceModel *race; // @synthesize race=_race;
@property(retain, nonatomic) NSArray *multiResolutionPlayUrls; // @synthesize multiResolutionPlayUrls=_multiResolutionPlayUrls;
@property(nonatomic) _Bool isFromLiveMate; // @synthesize isFromLiveMate=_isFromLiveMate;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSArray *playUrls; // @synthesize playUrls=_playUrls;
@property(retain, nonatomic) NSString *playRtmpUrl; // @synthesize playRtmpUrl=_playRtmpUrl;
@property(retain, nonatomic) NSDictionary *stat; // @synthesize stat=_stat;
@property(retain, nonatomic) NSString *liveStreamId; // @synthesize liveStreamId=_liveStreamId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
