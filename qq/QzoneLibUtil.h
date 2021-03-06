//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QzoneLibUtilDelegate-Protocol.h>

@class NSString;

@interface QzoneLibUtil : NSObject <QzoneLibUtilDelegate>
{
}

+ (id)formattedNumber:(long long)arg1;
+ (void)openFloatVideoWindow:(id)arg1 videoModel:(id)arg2 uiViewController:(id)arg3;
+ (id)decodedImageWithCGImageRef:(struct CGImage *)arg1 viewSize:(struct CGSize)arg2 scale:(double)arg3;
+ (id)imageWithData:(id)arg1 index:(int)arg2 viewSize:(struct CGSize)arg3;
+ (_Bool)checkView:(id)arg1 hundredPercent:(double)arg2 rectInWindow:(struct CGRect)arg3;
+ (_Bool)checkView:(id)arg1 rectInWindow:(struct CGRect)arg2;
+ (id)ARGBHexFromUIColor:(id)arg1;
+ (_Bool)isLegalPrefix:(id)arg1;
+ (id)emotionLabelToString:(id)arg1;
+ (id)voiceOverTextStringWithEmotion:(id)arg1;
+ (id)createVideoBreakImgUrl:(id)arg1 breakTime:(double)arg2;
+ (id)ParagraphStyle;
+ (id)fontWithType:(long long)arg1;
+ (id)getyyyyMMddHHmmssStringFromDate:(id)arg1;
+ (id)cStringWithFirstLevel:(const char *)arg1 andSecondLevel:(const char *)arg2;
+ (id)stringWithFirstLevel:(id)arg1 andSecondLevel:(id)arg2;
+ (_Bool)hasDataFor:(id)arg1 isResource:(_Bool)arg2 forCurrentUin:(_Bool)arg3;
+ (void)removeDataFor:(id)arg1 isResource:(_Bool)arg2 forCurrentUin:(_Bool)arg3;
+ (id)loadDataForKey:(id)arg1 isResource:(_Bool)arg2 forCurrentUin:(_Bool)arg3;
+ (void)cacheData:(id)arg1 forKey:(id)arg2 isResource:(_Bool)arg3 forCurrentUin:(_Bool)arg4;
+ (_Bool)hasPassiveMessage;
+ (void)getUpdateFeedWithFeedList:(id)arg1 reqType:(int)arg2;
+ (void)sendFileToQQ:(id)arg1;
+ (void)modelToJce:(id)arg1 andWriteToFile:(id)arg2;
+ (void)addJobToSendBoxWithPath:(id)arg1;
+ (id)getUserPath;
+ (void)creatPath:(id)arg1;
+ (id)getCurrentNickname;
+ (_Bool)isQzoneDeviceJailBroken;
+ (id)colorFromString:(id)arg1;
+ (id)filterSecurityInfoOfUrl:(id)arg1;
+ (id)privacyTypeDescription:(long long)arg1;
+ (void)postBannerPrompt:(id)arg1;
+ (id)convertTextAsReadable:(id)arg1;
+ (id)rdmuuid;
+ (int)getDeviceType;
+ (id)getDeviceName;
+ (id)formatDayToYMD:(id)arg1 simple:(_Bool)arg2;
+ (id)getTimeStr:(double)arg1 absolute:(_Bool)arg2;
+ (long long)getDateMonth:(id)arg1;
+ (long long)getDateYear:(id)arg1;
+ (id)getDateComponentWithDate:(id)arg1;
+ (id)formatToYearAndMonth:(id)arg1;
+ (struct CGRect)fixNanRect:(struct CGRect)arg1;
+ (id)emotionURL:(id)arg1;
+ (_Bool)doesDeviceCanAutoPlayFeedCommentGif;
+ (_Bool)doesDeviceCanAutoPlayFeedMultiGif;
+ (_Bool)doesDeviceCanAutoPlayGifInFeed;
+ (_Bool)doesDeviceCanAutoPlayGif:(const char *)arg1;
+ (double)getCurrentTimeInterval;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

