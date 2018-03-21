//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class HeartBeatSetting, NSString;

@interface NetworkChannelHBSetting : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasG2Wap;
    _Bool _hasG2Net;
    _Bool _hasG3;
    _Bool _hasG4;
    _Bool _hasWifi;
    _Bool _hasOther;
    HeartBeatSetting *_g2Wap;
    HeartBeatSetting *_g2Net;
    HeartBeatSetting *_g3;
    HeartBeatSetting *_g4;
    HeartBeatSetting *_wifi;
    HeartBeatSetting *_other;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) HeartBeatSetting *other; // @synthesize other=_other;
@property(retain, nonatomic) HeartBeatSetting *wifi; // @synthesize wifi=_wifi;
@property(retain, nonatomic) HeartBeatSetting *g4; // @synthesize g4=_g4;
@property(retain, nonatomic) HeartBeatSetting *g3; // @synthesize g3=_g3;
@property(retain, nonatomic) HeartBeatSetting *g2Net; // @synthesize g2Net=_g2Net;
@property(retain, nonatomic) HeartBeatSetting *g2Wap; // @synthesize g2Wap=_g2Wap;
@property(readonly) _Bool hasOther; // @synthesize hasOther=_hasOther;
@property(readonly) _Bool hasWifi; // @synthesize hasWifi=_hasWifi;
@property(readonly) _Bool hasG4; // @synthesize hasG4=_hasG4;
@property(readonly) _Bool hasG3; // @synthesize hasG3=_hasG3;
@property(readonly) _Bool hasG2Net; // @synthesize hasG2Net=_hasG2Net;
@property(readonly) _Bool hasG2Wap; // @synthesize hasG2Wap=_hasG2Wap;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
