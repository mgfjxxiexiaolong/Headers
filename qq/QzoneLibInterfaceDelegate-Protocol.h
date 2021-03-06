//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/JSExport-Protocol.h>
#import <QQMainProject/NSObject-Protocol.h>

@class NSArray, NSAttributedString, NSDictionary, NSMutableDictionary, NSObject, NSString, NSURL, QzoneCommStarInfo, QzoneCommYellowInfo, QzoneCustomVipInfo, QzoneFeedModel, QzoneFeedVideo, UIColor, UIImage, UIView, UIViewController;
@protocol NSCoding;

@protocol QzoneLibInterfaceDelegate <NSObject, JSExport>
+ (_Bool)reportToast;
- (void)openFloatVideoWindow:(QzoneFeedModel *)arg1 videoModel:(QzoneFeedVideo *)arg2 uiViewController:(UIViewController *)arg3;
- (void)handelOpenUrl:(NSString *)arg1 backoff:(_Bool)arg2 param:(NSDictionary *)arg3 controller:(UIViewController *)arg4;
- (long long)getGrayOperateMask;
- (void)setFeedLayoutStatus:(_Bool)arg1;
- (void)setCurrentLayoutUGCKey:(NSString *)arg1;
- (void)printAttachLog:(NSString *)arg1 key:(NSString *)arg2;
- (void)printCILog:(QzoneFeedModel *)arg1 actionEvent:(NSString *)arg2;
- (void)showShareMenu:(UIViewController *)arg1 feedModel:(QzoneFeedModel *)arg2;
- (NSString *)getRedBonusIconStr;
- (_Bool)isReachableViaWiFi;
- (void)reportDataToCompass:(long long)arg1 firstAction:(long long)arg2 secondAction:(long long)arg3 thridAction:(long long)arg4;
- (void)reportEventKey:(NSString *)arg1 param:(NSDictionary *)arg2 option:(NSDictionary *)arg3;
- (UIImage *)applyBlurWithimage:(UIImage *)arg1 radius:(double)arg2 tintColor:(UIColor *)arg3 saturationDeltaFactor:(double)arg4 maskImage:(UIImage *)arg5;
- (_Bool)isRunningOniPhone6PlusAndLater;
- (void)crashHelperMarkLastCoreTextText:(NSAttributedString *)arg1;
- (void)log:(long long)arg1 file:(const char *)arg2 func:(const char *)arg3 line:(int)arg4 module:(NSString *)arg5 EFDict:(NSDictionary *)arg6 fullmsg:(NSString *)arg7;
- (void)incrementalEnd:(NSString *)arg1;
- (void)incrementalBegin:(NSString *)arg1;
- (_Bool)isFavouriteAddedOnFeed:(QzoneFeedModel *)arg1;
- (_Bool)isWeiXinInstalled;
- (_Bool)isQQInstalled;
- (void)deleteFeedDirectly:(QzoneFeedModel *)arg1;
- (UIView *)getProgressViewWithFrame:(struct CGRect)arg1 deleteTime:(unsigned long long)arg2;
- (_Bool)isDesigner;
- (UIColor *)qzColorWithThemeString:(NSString *)arg1;
- (void)didMenuItemWithFeedModel:(QzoneFeedModel *)arg1;
- (_Bool)shouldShowFeedModelMenuItem:(NSDictionary *)arg1;
- (_Bool)isDeveloper;
- (void)setAccessibilityElement:(NSObject *)arg1 label:(NSString *)arg2 hint:(NSString *)arg3 traits:(unsigned long long)arg4;
- (void)setAccessibilityElement:(NSObject *)arg1 withFeedModel:(QzoneFeedModel *)arg2;
- (void)setAccessibilityElement:(NSObject *)arg1 withBlogListFeedModel:(QzoneFeedModel *)arg2;
- (void)setAccessibilityElement:(NSObject *)arg1 withFeedModel:(QzoneFeedModel *)arg2 shouldQueryVoiceOver:(_Bool)arg3 param:(NSDictionary *)arg4;
- (void)showLog:(NSString *)arg1;
- (_Bool)isDevelopeVersion;
- (NSString *)filterSecurityInfoOfUrl:(NSString *)arg1;
- (void)postBannerPrompt:(NSString *)arg1;
- (NSString *)parseToReadableText:(NSString *)arg1;
- (NSString *)convertTextAsReadable:(NSString *)arg1;
- (UIImage *)resizeableImage:(UIImage *)arg1;
- (void)disableAccessibilitySupport:(NSObject *)arg1;
- (void)setAccessibilityElement:(NSObject *)arg1 label:(NSString *)arg2 hint:(NSString *)arg3;
- (void)showComfirmAlertViewWithTitle:(NSString *)arg1 message:(NSString *)arg2 delegate:(id)arg3;
- (long long)getDetailNetworkStatus;
- (_Bool)reachableViaWiFi;
- (NSString *)decodeAtString:(NSString *)arg1;
- (NSString *)string:(NSString *)arg1 replacingOccurrencesOfRegex:(NSString *)arg2 withString:(NSString *)arg3;
- (NSMutableDictionary *)queryComponents:(NSURL *)arg1;
- (void)offlineRegisterPlugin:(id)arg1;
- (void)offlineRemoveData:(NSURL *)arg1;
- (UIImage *)sweetVipIcon;
- (UIImage *)starVipIconWith:(QzoneCommStarInfo *)arg1;
- (UIImage *)qzoneVipIconWith:(QzoneCommYellowInfo *)arg1 customVipInfo:(QzoneCustomVipInfo *)arg2;
- (_Bool)isFullScrentPhotoInFeed;
- (_Bool)isNonePhotoInFeed;
- (void)addReplyWithFeedModel:(QzoneFeedModel *)arg1 replyContent:(NSString *)arg2 comment:(id)arg3 reply:(id)arg4;
- (void)addCommentWithFeedModel:(QzoneFeedModel *)arg1 comment:(NSString *)arg2;
- (NSString *)nickNameByUin:(long long)arg1;
- (long long)getCurrentUin;
- (_Bool)checkPanoramaViewInWindow;
- (_Bool)stringContainsEmoji:(NSString *)arg1;
- (NSString *)emotionStringFormServerIndex:(long long)arg1;
- (int)currentNetworkStatus;
- (_Bool)canAutoPlayGifInSetting;
- (NSString *)cStringWithFirstLevel:(const char *)arg1 andSecondLevel:(const char *)arg2;
- (NSString *)stringWithFirstLevel:(NSString *)arg1 andSecondLevel:(NSString *)arg2;
- (void)sendFileToQQ:(NSString *)arg1;
- (id)currentUinValueForKey:(NSString *)arg1;
- (_Bool)hasDataFor:(NSString *)arg1 isResource:(_Bool)arg2 forCurrentUin:(_Bool)arg3;
- (void)removeDataFor:(NSString *)arg1 isResource:(_Bool)arg2 forCurrentUin:(_Bool)arg3;
- (id)loadDataForKey:(NSString *)arg1 isResource:(_Bool)arg2 forCurrentUin:(_Bool)arg3;
- (_Bool)hasPassiveMessage;
- (void)getUpdateFeedWithFeedList:(NSArray *)arg1 reqType:(int)arg2;
- (void)cacheData:(id <NSCoding>)arg1 forKey:(NSString *)arg2 isResource:(_Bool)arg3 forCurrentUin:(_Bool)arg4;
- (_Bool)unZipFile:(NSString *)arg1 toPath:(NSString *)arg2;
- (void)modelToJce:(NSArray *)arg1 andWriteToFile:(NSString *)arg2;
- (void)addJobToSendBoxWithPath:(NSString *)arg1;
- (NSString *)getCachePath;
- (NSString *)getDocPath;
- (NSString *)getUserPath;
- (void)creatPath:(NSString *)arg1;
@end

