//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface VoiceInfo : NSObject
{
    unsigned long long _voiceType;
    long long _duration;
}

+ (id)initWithInfo:(id)arg1;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long voiceType; // @synthesize voiceType=_voiceType;
- (void)decodeInfo:(id)arg1;
- (id)encodeInfo;

@end
