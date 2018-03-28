//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTEntityBase.h"

@class Article, Book, Card, Comment, EssayADData, EssayData, FRCommentRepost, FRRedpackStructModel, FantasyCardData, HorizontalCard, HuoShan, LastRead, LianZai, Live, MomentsRecommendUserData, NSArray, NSDictionary, NSNumber, NSString, PopularHashtagData, RNData, RecommendRedpacketData, RecommendStoryCoverCardData, RecommendUserCardsData, RecommendUserLargeCardData, RecommendUserStoryCardData, ResurfaceData, StockData, SurveyListData, SurveyPairData, TSVActivityBannerOriginalData, TSVActivityEntranceOriginalData, TSVPublishStatusOriginalData, TSVRecUserCardOriginalData, TSVShortVideoOriginalData, TSVStoryOriginalData, TTADTrackEventLinkModel, TTAdFeedModel, TTCategoryAddToFirstPageData, TTExploreLoadMoreTipData, TTHashtagCardData, TTHotNewsData, TTLayOutCellBaseModel, TTUGCFollowRecommendFooterData, TTUGCFollowRecommendHeaderData, TTWenda, TTXiguaLiveCardHorizontal, TTXiguaLiveModel, TTXiguaLiveRecommendUser, Thread, UGCBaseCellLayoutModel, WDHeaderInfoCellData, WapData, WenDaBaseData, WenDaInviteData;
@protocol TTAdFeedModel;

@interface ExploreOrderedData : TTEntityBase
{
    double _cacheCellHeight[7];
    unsigned long long _exploreCellType;
    NSArray *_cellItemHeightInfos;
    NSNumber *_maxTextLine;
    NSNumber *_defaultTextLine;
    NSString *_openURL;
    _Bool isInCard;
    _Bool _witnessed;
    _Bool _nextCellHasTopPadding;
    _Bool _preCellHasBottomPadding;
    _Bool _hasTopPadding;
    _Bool _cellDeleted;
    _Bool _isStick;
    _Bool _isFirstCached;
    _Bool _showFeedFollowedBtn;
    _Bool _isFakePlayCount;
    float _cellHeight;
    float _cellHeightChanged;
    unsigned long long nextCellType;
    unsigned long long preCellType;
    unsigned long long cellTypeCached;
    long long layoutUIType;
    NSString *cardPrimaryID;
    NSString *_primaryID;
    NSString *_uniqueID;
    NSString *_itemID;
    NSArray *_statURLs;
    NSNumber *_adID;
    NSString *_adIDStr;
    Article *_article;
    NSString *_adLabel;
    NSString *_adTrackURL;
    NSArray *_adVideoClickTrackURLs;
    NSArray *_adTrackURLs;
    NSString *_adClickTrackURL;
    NSArray *_adClickTrackURLs;
    NSArray *_adPlayTrackUrls;
    NSArray *_adPlayActiveTrackUrls;
    NSArray *_adPlayEffectiveTrackUrls;
    NSArray *_adPlayOverTrackUrls;
    double _effectivePlayTime;
    long long _trackSDK;
    double _behotTime;
    NSString *_logExtra;
    NSString *_categoryID;
    NSString *_concernID;
    double _adExpireInterval;
    double _requestTime;
    unsigned long long _cellType;
    NSString *_label;
    long long _labelStyle;
    unsigned long long _listType;
    unsigned long long _listLocation;
    double _orderIndex;
    long long _tip;
    NSNumber *_showDislike;
    NSString *_actionExtra;
    long long _videoStyle;
    long long _cellFlag;
    NSString *_recommendReason;
    NSString *_recommendUrl;
    long long _stickStyle;
    NSString *_stickLabel;
    long long _gallaryStyle;
    NSArray *_actionList;
    unsigned long long _uiType;
    long long _videoChannelADType;
    NSDictionary *_largeImageDict;
    long long _largePicCeativeType;
    NSString *_type;
    NSNumber *_cellLayoutStyle;
    NSNumber *_innerUiFlag;
    NSNumber *_showFollowButton;
    NSNumber *_followButtonStyle;
    NSString *_cellUIType;
    NSNumber *_groupSource;
    unsigned long long _comefrom;
    NSDictionary *_logPb;
    NSDictionary *_activity;
    NSString *_rid;
    NSDictionary *_cellCtrls;
    NSNumber *_followRecommendEnabled;
    NSDictionary *_raw_ad_data;
    struct CGPoint _PicCollecionViewOffset;
}

+ (unsigned long long)cacheLevel;
+ (id)primaryKey;
+ (id)dbName;
+ (id)wendaBaseDicParse:(id)arg1;
+ (void)removeAllEntities;
+ (id)objectWithDictionary:(id)arg1;
+ (id)primaryIDFromDictionary:(id)arg1;
+ (void)cleanEntities;
+ (id)keyMapping;
+ (id)persistentProperties;
+ (long long)dbVersion;
@property(nonatomic) struct CGPoint PicCollecionViewOffset; // @synthesize PicCollecionViewOffset=_PicCollecionViewOffset;
@property(retain, nonatomic) NSDictionary *raw_ad_data; // @synthesize raw_ad_data=_raw_ad_data;
@property(retain, nonatomic) NSNumber *followRecommendEnabled; // @synthesize followRecommendEnabled=_followRecommendEnabled;
@property(retain, nonatomic) NSDictionary *cellCtrls; // @synthesize cellCtrls=_cellCtrls;
@property(retain, nonatomic) NSString *rid; // @synthesize rid=_rid;
@property(readonly, nonatomic) _Bool isFakePlayCount; // @synthesize isFakePlayCount=_isFakePlayCount;
@property(retain, nonatomic) NSDictionary *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) NSDictionary *logPb; // @synthesize logPb=_logPb;
@property(nonatomic) _Bool showFeedFollowedBtn; // @synthesize showFeedFollowedBtn=_showFeedFollowedBtn;
@property(nonatomic) _Bool isFirstCached; // @synthesize isFirstCached=_isFirstCached;
@property(nonatomic) unsigned long long comefrom; // @synthesize comefrom=_comefrom;
@property(retain, nonatomic) NSNumber *groupSource; // @synthesize groupSource=_groupSource;
@property(retain, nonatomic) NSString *cellUIType; // @synthesize cellUIType=_cellUIType;
@property(retain, nonatomic) NSNumber *followButtonStyle; // @synthesize followButtonStyle=_followButtonStyle;
@property(retain, nonatomic) NSNumber *showFollowButton; // @synthesize showFollowButton=_showFollowButton;
@property(retain, nonatomic) NSNumber *innerUiFlag; // @synthesize innerUiFlag=_innerUiFlag;
@property(retain, nonatomic) NSNumber *cellLayoutStyle; // @synthesize cellLayoutStyle=_cellLayoutStyle;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) long long largePicCeativeType; // @synthesize largePicCeativeType=_largePicCeativeType;
@property(retain, nonatomic) NSString *openURL; // @synthesize openURL=_openURL;
@property(retain, nonatomic) NSDictionary *largeImageDict; // @synthesize largeImageDict=_largeImageDict;
@property(nonatomic) long long videoChannelADType; // @synthesize videoChannelADType=_videoChannelADType;
@property(nonatomic) unsigned long long uiType; // @synthesize uiType=_uiType;
@property(retain, nonatomic) NSArray *actionList; // @synthesize actionList=_actionList;
@property(nonatomic) long long gallaryStyle; // @synthesize gallaryStyle=_gallaryStyle;
@property(retain, nonatomic) NSString *stickLabel; // @synthesize stickLabel=_stickLabel;
@property(nonatomic) long long stickStyle; // @synthesize stickStyle=_stickStyle;
@property(nonatomic) _Bool isStick; // @synthesize isStick=_isStick;
@property(nonatomic) float cellHeightChanged; // @synthesize cellHeightChanged=_cellHeightChanged;
@property(nonatomic) float cellHeight; // @synthesize cellHeight=_cellHeight;
@property(copy, nonatomic) NSString *recommendUrl; // @synthesize recommendUrl=_recommendUrl;
@property(copy, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(nonatomic) long long cellFlag; // @synthesize cellFlag=_cellFlag;
@property(nonatomic) long long videoStyle; // @synthesize videoStyle=_videoStyle;
@property(nonatomic) _Bool cellDeleted; // @synthesize cellDeleted=_cellDeleted;
@property(nonatomic) _Bool hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property(nonatomic) _Bool preCellHasBottomPadding; // @synthesize preCellHasBottomPadding=_preCellHasBottomPadding;
@property(nonatomic) _Bool nextCellHasTopPadding; // @synthesize nextCellHasTopPadding=_nextCellHasTopPadding;
@property(copy, nonatomic) NSString *actionExtra; // @synthesize actionExtra=_actionExtra;
@property(nonatomic) _Bool witnessed; // @synthesize witnessed=_witnessed;
@property(retain, nonatomic) NSNumber *showDislike; // @synthesize showDislike=_showDislike;
@property(nonatomic) long long tip; // @synthesize tip=_tip;
@property(nonatomic) double orderIndex; // @synthesize orderIndex=_orderIndex;
@property(nonatomic) unsigned long long listLocation; // @synthesize listLocation=_listLocation;
@property(nonatomic) unsigned long long listType; // @synthesize listType=_listType;
@property(nonatomic) long long labelStyle; // @synthesize labelStyle=_labelStyle;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
@property(nonatomic) double requestTime; // @synthesize requestTime=_requestTime;
@property(nonatomic) double adExpireInterval; // @synthesize adExpireInterval=_adExpireInterval;
@property(retain, nonatomic) NSString *concernID; // @synthesize concernID=_concernID;
@property(retain, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(retain, nonatomic) NSString *logExtra; // @synthesize logExtra=_logExtra;
@property(nonatomic) double behotTime; // @synthesize behotTime=_behotTime;
@property(nonatomic) long long trackSDK; // @synthesize trackSDK=_trackSDK;
@property(nonatomic) double effectivePlayTime; // @synthesize effectivePlayTime=_effectivePlayTime;
@property(retain, nonatomic) NSArray *adPlayOverTrackUrls; // @synthesize adPlayOverTrackUrls=_adPlayOverTrackUrls;
@property(retain, nonatomic) NSArray *adPlayEffectiveTrackUrls; // @synthesize adPlayEffectiveTrackUrls=_adPlayEffectiveTrackUrls;
@property(retain, nonatomic) NSArray *adPlayActiveTrackUrls; // @synthesize adPlayActiveTrackUrls=_adPlayActiveTrackUrls;
@property(retain, nonatomic) NSArray *adPlayTrackUrls; // @synthesize adPlayTrackUrls=_adPlayTrackUrls;
@property(retain, nonatomic) NSArray *adClickTrackURLs; // @synthesize adClickTrackURLs=_adClickTrackURLs;
@property(retain, nonatomic) NSString *adClickTrackURL; // @synthesize adClickTrackURL=_adClickTrackURL;
@property(retain, nonatomic) NSArray *adTrackURLs; // @synthesize adTrackURLs=_adTrackURLs;
@property(retain, nonatomic) NSArray *adVideoClickTrackURLs; // @synthesize adVideoClickTrackURLs=_adVideoClickTrackURLs;
@property(retain, nonatomic) NSString *adTrackURL; // @synthesize adTrackURL=_adTrackURL;
@property(retain, nonatomic) NSString *adLabel; // @synthesize adLabel=_adLabel;
@property(retain, nonatomic) Article *article; // @synthesize article=_article;
@property(retain, nonatomic) NSString *adIDStr; // @synthesize adIDStr=_adIDStr;
@property(retain, nonatomic) NSNumber *adID; // @synthesize adID=_adID;
@property(copy, nonatomic) NSArray *statURLs; // @synthesize statURLs=_statURLs;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(retain, nonatomic) NSString *primaryID; // @synthesize primaryID=_primaryID;
@property(retain, nonatomic) NSNumber *defaultTextLine; // @synthesize defaultTextLine=_defaultTextLine;
@property(retain, nonatomic) NSNumber *maxTextLine; // @synthesize maxTextLine=_maxTextLine;
@property(retain, nonatomic) NSString *cardPrimaryID; // @synthesize cardPrimaryID;
@property(nonatomic) long long layoutUIType; // @synthesize layoutUIType;
@property(nonatomic) _Bool isInCard; // @synthesize isInCard;
@property(nonatomic) unsigned long long cellTypeCached; // @synthesize cellTypeCached;
@property(nonatomic) unsigned long long preCellType; // @synthesize preCellType;
@property(nonatomic) unsigned long long nextCellType; // @synthesize nextCellType;
- (void).cxx_destruct;
- (void)registNotifications;
- (void)dealloc;
- (id)init;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithArticle:(id)arg1;
- (_Bool)isCanvas;
- (id)videoPlayTracker;
- (_Bool)isAd;
- (_Bool)isAdButtonUnderPic;
@property(readonly, nonatomic) id <TTAdFeedModel> adModel;
- (id)exploreAdModel;
- (id)realTimeAdExtraData:(id)arg1 label:(id)arg2 extraData:(id)arg3;
@property(readonly, copy, nonatomic) NSDictionary *adExtraData;
- (_Bool)isAdExpire;
@property(readonly, copy, nonatomic) NSString *log_extra;
@property(readonly, copy, nonatomic) NSString *ad_id;
@property(retain, nonatomic) TTADTrackEventLinkModel *adEventLinkModel;
@property(retain, nonatomic) TTAdFeedModel *raw_ad;
- (id)ttv_groupModel;
- (_Bool)ttv_couldAutoPlay;
- (id)ttv_videoLocalURL;
- (_Bool)ttv_isPreloadVideoEnabled;
- (long long)ttv_videoWatchCount;
- (long long)ttv_videoDuration;
- (void)clearRedpacket;
- (_Bool)hasRead;
- (id)listLargeImageDict;
- (id)listLargeImageModel;
- (_Bool)isUnifyADCell;
- (_Bool)isUGCCell;
- (_Bool)isPlainCell;
- (_Bool)isUGCArticleCellAndCommentCellHadTopPadding;
- (_Bool)isHotNewsCellWithRedDot;
- (_Bool)isHotNewsCellWithAvatar;
- (_Bool)couldContinueAutoPlay;
- (_Bool)couldAutoPlay;
- (_Bool)autoPlayServerEnabled;
- (_Bool)isFeedCategory;
- (_Bool)isShowHuoShanUserInfo;
- (_Bool)isShowHuoShanViewCount;
- (_Bool)isShowHuoShanTitle;
- (_Bool)isShowMediaLiveUserInfo;
- (_Bool)isShowMediaLiveViewCount;
- (_Bool)isShowMediaLiveTitle;
- (_Bool)isVideoPGCCard;
- (_Bool)isFeedUGC;
- (_Bool)isShowTimeLabel;
- (_Bool)isShowSourceLabel;
- (_Bool)isShowSourceImage;
- (_Bool)isShowCommentCountLabel;
- (_Bool)isShowAbstract;
- (_Bool)isShowComment;
- (_Bool)isAutoPlayFlagEnabled;
- (_Bool)isShowDigButton;
- (_Bool)isShowRecommendReasonLabel;
- (_Bool)isPlayInDetailView;
- (_Bool)isListShowPlayVideoButton;
- (id)toDictionary;
- (void)updateWithDictionary:(id)arg1;
- (void)registNotifications;
- (void)followNotification:(id)arg1;
- (_Bool)needShowAbstractWhenNotSet;
- (void)clearCachedCellType;
- (void)clearCacheHeight;
- (void)saveCellItemCacheHeight:(double)arg1 listType:(unsigned long long)arg2 cacheKey:(id)arg3;
- (double)cellItemCacheHeightForlistType:(unsigned long long)arg1 cacheKey:(id)arg2;
- (void)saveCacheHeight:(double)arg1 forListType:(unsigned long long)arg2 cellType:(unsigned long long)arg3;
- (double)cacheHeightForListType:(unsigned long long)arg1 cellType:(unsigned long long)arg2;
- (void)saveCacheHeight:(double)arg1 forListType:(unsigned long long)arg2;
- (double)cacheHeightForListType:(unsigned long long)arg1;
- (id)ugcRecommendAction;
- (id)ugcRecommendReason;
- (id)displayLabel;
@property(retain, nonatomic) TTUGCFollowRecommendFooterData *followRecommendFooterData;
@property(retain, nonatomic) TTUGCFollowRecommendHeaderData *followRecommendHeaderData;
@property(retain, nonatomic) PopularHashtagData *popularHashtagData;
@property(retain, nonatomic) RecommendRedpacketData *recommendRedpacketData;
@property(retain, nonatomic) TSVStoryOriginalData *tsvStoryOriginalData;
@property(retain, nonatomic) TSVActivityBannerOriginalData *tsvActivityBannerOriginalData;
@property(retain, nonatomic) TSVActivityEntranceOriginalData *tsvActivityEntranceOriginalData;
@property(retain, nonatomic) TSVPublishStatusOriginalData *tsvPublishStatusOriginalData;
@property(retain, nonatomic) TSVRecUserCardOriginalData *tsvRecUserCardOriginalData;
@property(retain, nonatomic) TTXiguaLiveCardHorizontal *xiguaLiveCardHorizontal;
@property(retain, nonatomic) TTXiguaLiveRecommendUser *xiguaLiveRecommendUser;
@property(retain, nonatomic) TTXiguaLiveModel *xiguaLiveModel;
@property(retain, nonatomic) FRRedpackStructModel *redpacketModel;
@property(retain, nonatomic) SurveyPairData *surveyPairData;
@property(retain, nonatomic) SurveyListData *surveyListData;
@property(retain, nonatomic) TTExploreLoadMoreTipData *loadmoreTipData;
@property(retain, nonatomic) TTHotNewsData *hotNewsData;
@property(retain, nonatomic) FantasyCardData *fantasyCardData;
@property(retain, nonatomic) EssayADData *essayADData;
@property(retain, nonatomic) MomentsRecommendUserData *momentsRecommendUserData;
@property(retain, nonatomic) TTHashtagCardData *hashtagData;
@property(retain, nonatomic) RecommendStoryCoverCardData *recommendUserStoryCoverCardData;
@property(retain, nonatomic) RecommendUserStoryCardData *recommendUserStoryCardData;
@property(retain, nonatomic) RecommendUserLargeCardData *recommendUserLargeCardData;
@property(retain, nonatomic) ResurfaceData *resurface;
@property(retain, nonatomic) HorizontalCard *horizontalCard;
@property(retain, nonatomic) TTWenda *ttWenda;
@property(retain, nonatomic) TSVShortVideoOriginalData *shortVideoOriginalData;
@property(retain, nonatomic) TTCategoryAddToFirstPageData *addToFirstPageData;
@property(retain, nonatomic) RecommendUserCardsData *recommendUserCardsData;
@property(retain, nonatomic) Comment *comment;
@property(retain, nonatomic) Book *book;
@property(retain, nonatomic) WenDaBaseData *wendaBaseData;
@property(retain, nonatomic) WDHeaderInfoCellData *wenDaHeaderInfoCellData;
@property(retain, nonatomic) WenDaInviteData *wenDaInviteData;
@property(retain, nonatomic) RNData *rnData;
@property(retain, nonatomic) LianZai *lianZai;
@property(retain, nonatomic) LastRead *lastRead;
@property(retain, nonatomic) Card *card;
@property(retain, nonatomic) HuoShan *huoShan;
@property(retain, nonatomic) Live *live;
@property(retain, nonatomic) StockData *stockData;
@property(retain, nonatomic) WapData *wapData;
@property(retain, nonatomic) Thread *thread;
@property(retain, nonatomic) NSDictionary *ugcRecommendDict;
@property(retain, nonatomic) EssayData *essayData;
@property(retain, nonatomic) FRCommentRepost *commentRepostModel;
@property(retain, nonatomic) UGCBaseCellLayoutModel *ugcCellLayout;
@property(retain, nonatomic) TTLayOutCellBaseModel *cellLayOut;
@property(copy, nonatomic) NSString *debugInfo;
@property(nonatomic) _Bool needClientImprRecycle;
@property(nonatomic) _Bool isNewFromRemote;
@property(nonatomic) _Bool hasBeenSeen;
@property(nonatomic) long long itemIndex;
- (id)originalData;
- (void)save;
- (_Bool)isU13VideoCell;
- (_Bool)isU13NonVideoArticleCell;
- (_Bool)isU13Cell;
- (_Bool)isU13CellInStoryMode;
- (_Bool)isU11HasActionButtonCell;
- (_Bool)isU11Cell;
- (_Bool)isU11ShowFollowButton;
- (_Bool)isU11ShowTimeItem;
- (_Bool)isU11ShowRecommendReason;
- (_Bool)isU11ShowFollowItem;
- (_Bool)isU11ShowPadding;

@end
