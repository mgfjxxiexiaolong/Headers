//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>

@class NSString;

@interface TBMusicConfigInfoModel : NSObject <NSCoding>
{
    unsigned int _musicId;
    unsigned int _duration;
    NSString *_title;
    NSString *_desc;
    NSString *_audio_url;
    NSString *_image_url;
    NSString *_share_url;
    unsigned long long _musicType;
}

+ (id)createWithQQStoryCPBMessageDecoder:(struct CPBMessageDecoder *)arg1;
@property(nonatomic) unsigned long long musicType; // @synthesize musicType=_musicType;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *share_url; // @synthesize share_url=_share_url;
@property(retain, nonatomic) NSString *image_url; // @synthesize image_url=_image_url;
@property(retain, nonatomic) NSString *audio_url; // @synthesize audio_url=_audio_url;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int musicId; // @synthesize musicId=_musicId;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

