//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface QQMessageModelExInfo : NSObject
{
    struct QQMessageModelExtend _exInfo;
    int _saveFlag;
    NSMutableSet *_modifySet;
    _Bool _isQuotedMsg;
    _Bool _isQuotedHaverecentmessage;
    unsigned int _msgGrayTipTailKey;
    _Bool _isNewGroupUnName;
}

+ (long long)praseBabyQClientAbility:(id)arg1;
+ (long long)praseBabyQVideoType:(id)arg1;
+ (long long)praseBabyQClickType:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setIsNewGroupUnName:(_Bool)arg1;
- (_Bool)isNewGroupUnName;
- (void)setDiyFontCfgUpdateTime:(unsigned long long)arg1;
- (unsigned long long)getDiyFontCfgUpdateTime;
- (void)setAvatarId:(unsigned int)arg1;
- (unsigned int)getAvatarId;
- (void)setHasShowedPokeQuickReplyEntrance:(_Bool)arg1;
- (_Bool)hasShowedPokeQuickReplyEntrance;
- (void)setPokeStrength:(int)arg1;
- (int)pokeStrength;
- (void)setMobaGameNick:(id)arg1;
- (id)mobaGameNick;
- (void)setKplInfo:(id)arg1;
- (id)kplInfo;
- (_Bool)getIsReceiptMsgHaveRecentMsgFlag;
- (void)setIsReceiptMsgHaveRecentMsgFlag:(_Bool)arg1;
- (_Bool)receiptPttClicked;
- (void)setTextAnalysisResult:(unsigned int)arg1;
- (unsigned int)textAnalysisResult;
- (void)setIsArkBabyQMsgShare:(_Bool)arg1;
- (_Bool)isArkBabyQMsgShare;
- (void)setIsArkBabyQMsgParsed:(_Bool)arg1;
- (_Bool)isArkBabyQMsgParsed;
- (void)setIsArkBabyQMsg:(_Bool)arg1;
- (_Bool)isArkBabyQMsg;
- (void)setReceiptPttClicked:(_Bool)arg1;
- (id)receiptPttMsgRetryFileName;
- (void)setReceiptPttMsgRetryFileName:(id)arg1;
- (_Bool)receiptMsgIsOverallReadFlag;
- (void)setReceiptMsgIsOverallReadFlag:(_Bool)arg1;
- (_Bool)receiptMsgIsReadFlag;
- (void)setReceiptMsgIsReadFlag:(_Bool)arg1;
- (id)getRobotSubUrl;
- (void)setRobotSubUrl:(id)arg1;
- (unsigned int)getRobotClassID;
- (void)setRobotClassID:(unsigned int)arg1;
- (void)setRedpackScoreID:(id)arg1;
- (id)redpackScoreID;
- (void)setRedpackType:(unsigned int)arg1;
- (unsigned int)redpackType;
- (id)goldMsgInfo;
- (void)setGoldMsgInfo:(id)arg1;
- (id)groupAIOKeywordsInfo;
- (void)setGroupAIOKeywordsInfo:(id)arg1;
- (_Bool)isGroupAIOKeywordsMatched;
- (void)setIsGroupAIOKeywordsMatched:(_Bool)arg1;
- (void)setGroupRobotVoiceTailUin:(id)arg1;
- (id)getGroupRobotVoiceTailUin;
- (unsigned int)getAnimateFontHasPlayed;
- (void)setAnimateFontHasPlayed:(unsigned int)arg1;
- (unsigned int)getHighBoomFontID;
- (void)setHighBoomFontID:(unsigned int)arg1;
- (id)getGroupRobotWelExInfo;
- (void)clearPlatformId;
- (unsigned int)msgGrayTipTailKey;
- (void)setMsgGrayTipTailKey:(unsigned int)arg1;
- (void)setGroupRobotWelExInfo:(id)arg1;
- (id)getStoryShareVideoInfo;
- (void)setStoryShareVideoInfo:(id)arg1;
- (id)getVasPokeMinVer;
- (void)setVasPokeMinVer:(id)arg1;
- (id)getVasPokeName;
- (void)setVasPokeName:(id)arg1;
- (unsigned int)getVasPokeId;
- (void)setVasPokeId:(unsigned int)arg1;
- (_Bool)isPokePaintedEgg;
- (void)setPokePaintedEgg:(_Bool)arg1;
- (unsigned int)getPokeMsgType;
- (void)setPokeMsgType:(unsigned int)arg1;
- (void)setBulletinMsgSeq:(unsigned long long)arg1;
- (unsigned long long)getBulletinMsgSeq;
- (_Bool)getIsBulletinMsg;
- (void)setIsBulletinMsg:(_Bool)arg1;
- (id)doutuText;
- (void)setDoutuText:(id)arg1;
- (_Bool)getIsHRAssistantMessage;
- (void)setIsHRAssistantMessage:(_Bool)arg1;
- (_Bool)hasThirdAppShareModel;
- (void)clearThirdAppShareModel;
- (void)setThirdAppShareModel:(id)arg1;
- (id)getThirdAppShareModel;
- (unsigned int)getFlashChatRscId;
- (void)setFlashChatRscId:(unsigned int)arg1;
- (id)getFlashChatData;
- (void)setFlashChatData:(id)arg1;
- (unsigned int)getMultiSendExFlag;
- (void)setMultiSendExFlag:(unsigned int)arg1;
- (id)getArkAIData;
- (void)setArkAIData:(id)arg1;
- (_Bool)isBabyQGuideMessage;
- (id)BabyQGuideCookie;
- (void)setBabyQGuideCookie:(id)arg1;
- (id)getFaceScoreMsgExInfo;
- (void)setFaceScoreMsgExInfo:(id)arg1;
- (id)getStoryMsgExInfo;
- (void)setStoryMsgExInfo:(id)arg1;
- (void)setOrginFaceSendTimes:(int)arg1;
- (int)orginFaceSendTimes;
- (void)setEmojiStickInfo:(id)arg1;
- (id)emojiStickerInfo;
- (void)setSpriteActionMsgInfo:(id)arg1;
- (id)spriteActionMsgInfo;
- (int)msgBusiType;
- (void)setMsgBusiType:(int)arg1;
- (void)setMedalSeq3:(unsigned long long)arg1;
- (unsigned long long)medalSeq3;
- (void)setMedalSeq2:(unsigned long long)arg1;
- (unsigned long long)medalSeq2;
- (void)setMedalSeq:(unsigned long long)arg1;
- (unsigned long long)medalSeq;
- (void)setMedalTime3:(unsigned long long)arg1;
- (unsigned long long)medalTime3;
- (void)setMedalTime2:(unsigned long long)arg1;
- (unsigned long long)medalTime2;
- (void)setMedalTime:(unsigned long long)arg1;
- (unsigned long long)medalTime;
- (void)setMedalId:(unsigned int)arg1;
- (unsigned int)medalId;
- (void)setMedalDesc:(id)arg1;
- (id)medalDesc;
- (void)setHaveMedal:(_Bool)arg1;
- (_Bool)haveMedal;
- (void)setMedalLevel:(unsigned int)arg1;
- (unsigned int)medalLevel;
- (void)setMedalName:(id)arg1;
- (id)medalName;
- (void)setMedalIconUrl:(id)arg1;
- (id)medalIconUrl;
- (void)setCoverUrl:(id)arg1;
- (id)coverUrl;
- (void)setFgColor:(id)arg1;
- (id)fgColor;
- (void)setBgColor:(id)arg1;
- (id)bgColor;
- (void)setTagName:(id)arg1;
- (id)tagName;
- (void)setPhotoCount:(unsigned int)arg1;
- (unsigned int)photosCount;
- (void)setUpdateTime:(unsigned long long)arg1;
- (unsigned long long)updateTime;
- (void)setGrayTipExtInfo:(id)arg1;
- (id)grayTipExtInfo;
- (void)setNeedInsertHistory:(_Bool)arg1;
- (_Bool)needInsertHistory;
- (void)setGrayTipLevel:(unsigned long long)arg1;
- (unsigned long long)grayTipLevel;
- (void)setGrayTipKey:(id)arg1;
- (id)grayTipKey;
- (void)setGrayTipId:(unsigned int)arg1;
- (unsigned int)grayTipId;
- (_Bool)hasReadByOtherDevice;
- (void)setHasReadByOtherDevice:(_Bool)arg1;
- (_Bool)isBlockedSA;
- (void)setIsBlockedSA:(_Bool)arg1;
- (int)getMsgBriefPolicy;
- (void)setMsgBriefPolicy:(int)arg1;
- (int)getReadTagPolicy;
- (void)setReadTagPolicy:(int)arg1;
- (_Bool)hasflowerXMLModel;
- (id)flowerXMLModel;
- (void)setFlowerXMLInfo:(id)arg1;
- (_Bool)hasFlowerCount;
- (unsigned int)flowerCount;
- (void)setFlowerCount:(unsigned int)arg1;
- (_Bool)hasFlowerMsgVersion;
- (unsigned int)flowerMsgVersion;
- (void)setFlowerMsgVersion:(unsigned int)arg1;
- (_Bool)hasIsFlowerMsg;
- (_Bool)isFlowerMsg;
- (void)setIsFlowerMsg:(_Bool)arg1;
- (void)setLargeMsgOpFlag:(unsigned int)arg1;
- (unsigned int)getLargeMsgOpFlag;
- (void)setSpriteMsgState:(unsigned int)arg1;
- (unsigned int)getSpriteMsgState;
- (id)getOrangeWordString;
- (void)setOrangeWordString:(id)arg1;
- (int)getArkAppMsgServiceType;
- (void)setArkAppMsgServiceType:(int)arg1;
- (_Bool)isHotChatGroupMsg;
- (unsigned int)getRPFlag;
- (void)setRPFlag:(unsigned int)arg1;
- (_Bool)getPRPFlodFlag;
- (void)setPRPFlodFlag:(_Bool)arg1;
- (id)getRPIndex;
- (void)setRPIndex:(id)arg1;
- (id)getPRPId;
- (void)setRPId:(id)arg1;
- (long long)getRPSenderUin;
- (void)setIsHotChatGroupMsg:(_Bool)arg1;
- (void)setRPSenderUin:(long long)arg1;
- (id)getSMServiceId;
- (void)setSMServiceId:(id)arg1;
- (id)getMsgDetailString;
- (void)setMsgDetailString:(id)arg1;
- (_Bool)isGroupMessageRemindNeedUnreadCount;
- (void)setGroupMessageRemindBrief:(id)arg1;
- (id)getGroupMessageRemindBrief;
- (_Bool)getIsDiscussAIOArkGameTeamMsgFlag;
- (void)setIsDiscussAIOArkGameTeamMsgFlag:(_Bool)arg1;
- (int)getGroupRecentMessageRemindType;
- (void)setGroupRecentMessageRemindType:(int)arg1;
- (int)getGroupMessageRemindType;
- (void)setGroupMessageRemindType:(int)arg1;
- (id)getGroupBusinessRankBgColor;
- (void)setGroupBusinessRankBgColor:(id)arg1;
- (id)getGroupBusinessRankColor;
- (void)setGroupBusinessRankColor:(id)arg1;
- (id)getGroupBusinessRank;
- (void)setGroupBusinessRank:(id)arg1;
- (id)getGroupBusinessNickColor;
- (void)setGroupBusinessNickColor:(id)arg1;
- (id)getGroupBusinessNick;
- (void)setGroupBusinessNick:(id)arg1;
- (id)getGroupBusinessHeadClkUrl;
- (void)setGroupBusinessHeadClkUrl:(id)arg1;
- (id)getGroupBusinessHeadUrl;
- (void)setGroupBusinessHeadUrl:(id)arg1;
- (_Bool)getIsGroupBusinessMessage;
- (void)setIsGroupBusinessMessage:(_Bool)arg1;
- (void)setQuoteMsgModel:(id)arg1;
- (id)getQuoteMsgModel;
- (_Bool)getIsQuotedHaveRecentMsgFlag;
- (void)setIsQuotedHaveRecentMsgFlag:(_Bool)arg1;
- (_Bool)getIsQuotedMsgFlag;
- (void)setIsQuotedMsgFlag:(_Bool)arg1;
- (int)getMessageDBTableType;
- (void)setMessageDBTableType:(int)arg1;
- (void)setLolaMsgTouchLayer:(id)arg1;
- (id)getLolaMsgTouchLayer;
- (void)setLolaMsgState:(int)arg1;
- (int)getLolaMsgState;
- (void)setTreactMsg:(id)arg1;
- (id)getTReactMsg;
- (int)getLongMsgType;
- (void)setLongMsgType:(int)arg1;
- (int)getLongMsgState;
- (void)setLongMsgState:(int)arg1;
- (id)getLongMsgResKey;
- (void)setLongMsgResKey:(id)arg1;
- (void)setLongMsgUrlPart:(id)arg1;
- (id)getLongMsgUrlPart;
- (void)setLongMsgResId:(id)arg1;
- (id)getLongMsgResId;
- (void)clearLongMsgInfo;
- (_Bool)getIsGroupDiscussToGroupAnnouncementMessageFlag;
- (void)setIsGroupDiscussToGroupAnnouncementMessageFlag:(_Bool)arg1;
- (unsigned long long)getTroopPublicAccountUin;
- (void)setTroopPublicAccountUin:(unsigned long long)arg1;
- (_Bool)getIsGroupHavePublicAccountRecentMessageFlag;
- (void)setIsGroupHavePublicAccountRecentMessageFlag:(_Bool)arg1;
- (_Bool)getIsGroupPublicAccountMessageFlag;
- (void)setIsGroupPublicAccountMessageFlag:(_Bool)arg1;
- (id)getNearbyNowTipsModel;
- (void)setNearbyNowTipsModel:(id)arg1;
- (void)setGroupDeliverWantedUin:(id)arg1;
- (id)getGroupDeliverWantedUin;
- (id)getGroupDeliverGiftModel;
- (void)setGroupDeliverGiftModel:(id)arg1;
- (id)getGroupDeliverGiftRemindBrief;
- (void)setGroupDeliverGiftRemindBrief:(id)arg1;
- (_Bool)getIsGroupHaveDeliverGiftRecentMessageForOthersFlag;
- (void)setIsGroupHaveDeliverGiftRecentMessageForOthersFlag:(_Bool)arg1;
- (_Bool)getIsGroupDeliverGiftMessageForOthersFlag;
- (void)setIsGroupDeliverGiftMessageForOthersFlag:(_Bool)arg1;
- (_Bool)getIsGroupHaveDeliverGiftRecentMessageFlag;
- (void)setIsGroupHaveDeliverGiftRecentMessageFlag:(_Bool)arg1;
- (_Bool)getIsGroupDeliverGiftMessageFlag;
- (void)setIsGroupDeliverGiftMessageFlag:(_Bool)arg1;
- (void)setPendantId:(unsigned long long)arg1;
- (unsigned long long)getPendantId;
- (void)setFontId:(unsigned int)arg1;
- (unsigned int)getFontId;
- (void)setCrochetColor:(id)arg1;
- (id)getCrochetColor;
- (void)setSubBubbleID:(unsigned int)arg1;
- (unsigned int)getSubBubbleID;
- (void)setPendantDiyInfoId:(unsigned int)arg1;
- (unsigned int)getPendantDiyInfoId;
- (void)setDIYBubbleTextID:(unsigned int)arg1;
- (unsigned int)getDIYbubbleTextID;
- (unsigned int)getPublicAccountAllMeesageReadConfirmStatus;
- (void)setPublicAccountAllMessageReadStatus:(unsigned int)arg1;
- (unsigned int)getPublicAccountType;
- (void)setPublicAccountType:(unsigned int)arg1;
- (unsigned int)getC2CSSOMsgTime;
- (void)setC2CSSOMsgTime:(unsigned int)arg1;
- (unsigned int)getMultiAVBusinessType;
- (void)setMultiAVBusinessType:(unsigned int)arg1;
- (unsigned int)getMultiAVRelationType;
- (void)setMultiAVRelationType:(unsigned int)arg1;
- (_Bool)getIsGroupHomeworkHaveStructuredRecentMessageFlag;
- (void)setIsGroupHomeworkHaveStructuredRecentMessageFlag:(_Bool)arg1;
- (_Bool)getIsGroupHomeworkStructuredMessageFlag;
- (void)setIsGroupHomeworkStructuredMessageFlag:(_Bool)arg1;
- (_Bool)isNoPreviewSecretPictureMsg;
- (void)setSecretPictureNoPreviewFlag:(_Bool)arg1;
- (_Bool)getIsFlashPictureFlag;
- (void)setIsFlashPictureFlag:(_Bool)arg1;
- (unsigned int)exMsgType;
- (void)setExMsgType:(unsigned int)arg1;
- (unsigned int)directionflag;
- (void)setDirectionFlag:(unsigned int)arg1;
- (id)messageSensCtrlinfo;
- (void)setMessageSensCtrlInfo:(id)arg1;
- (id)messsageViewCellClassName;
- (void)setMessageViewCellClassName:(id)arg1;
- (id)recentSessionClassName;
- (void)setRecentSessionClassName:(id)arg1;
- (_Bool)torchbearer;
- (void)setTorchbearer:(_Bool)arg1;
- (_Bool)isColorRingUpdate;
- (void)setIsColorRingUpdate:(_Bool)arg1;
- (unsigned int)colorRingID;
- (void)setColorRingID:(unsigned int)arg1;
- (unsigned int)memberRankLevel;
- (void)setMemberRankLevel:(unsigned int)arg1;
- (void)setPubAccountOperateTime:(unsigned long long)arg1;
- (unsigned long long)getPubAccountOperateTime;
- (unsigned int)getPAMeesageReadConfirmStatus;
- (void)setPAMeesageReadConfirmStatus:(unsigned int)arg1;
- (_Bool)getIsAuthenticated;
- (void)setIsAuthenticated:(_Bool)arg1;
- (_Bool)getPaAdMsgFirstClicked;
- (void)setPaAdMsgFirstClicked:(_Bool)arg1;
- (_Bool)getPaAdMsgFirstExposured;
- (void)setPaAdMsgFirstExposured:(_Bool)arg1;
- (double)getAdMsgReceivedTime;
- (void)setAdMsgReceivedTime:(double)arg1;
- (int)getAdMsgType;
- (void)setAdMsgType:(int)arg1;
- (id)getPAViewId;
- (void)setPAViewId:(id)arg1;
- (id)getPAGdtCliData;
- (void)setPAGdtCliData:(id)arg1;
- (id)getPAGdtImpData;
- (void)setPAGdtImpData:(id)arg1;
- (unsigned int)getPubAccAdMessageReadConfirmStatus;
- (void)setPubAccAdMessageReadConfirmStatus:(unsigned int)arg1;
- (_Bool)getPubAccAdMessageNeedReadConfirm;
- (void)setPubAccAdMessageNeedReadConfirm:(_Bool)arg1;
- (_Bool)getSAWelcomeMsgType;
- (void)setSAWelcomeMsgType:(_Bool)arg1;
- (_Bool)getPAMessageReadConfirmFlag;
- (void)setPAMessageReadConfirmFlag:(_Bool)arg1;
- (id)speciaTitle;
- (id)templateId;
- (void)setTemplateId:(id)arg1;
- (void)setSpeciaTitle:(id)arg1;
- (id)anonymousRankColor;
- (unsigned int)anonymousBubbleID;
- (_Bool)isResendModel;
- (unsigned int)anonymousExpireTime;
- (unsigned int)anonymousHeadportrait;
- (id)anonymousNick;
- (id)anonymousID;
- (unsigned int)anonymousFlags;
- (void)setAnonymousRankColor:(id)arg1;
- (void)setAnonymousBubbleID:(unsigned int)arg1;
- (void)setIsResendModel:(_Bool)arg1;
- (void)setAnonymousExpireTime:(unsigned int)arg1;
- (void)setAnonymousHeadportrait:(unsigned int)arg1;
- (void)setAnonymousNick:(id)arg1;
- (void)setAnonymousID:(id)arg1;
- (void)setAnonymousFlags:(unsigned int)arg1;
- (id)getSMCompatibilityText;
- (void)addAtGroupMemberInfo:(id)arg1;
- (id)getAtGroupMemberInfo;
- (void)setSMCompatibilityText:(id)arg1;
- (_Bool)getIsAtAllGroupMemberHaveRecentMsgFlag;
- (void)setIsAtAllGroupMemberHaveRecentMsgFlag:(_Bool)arg1;
- (_Bool)getIsAtGroupMemberHaveRecentMsgFlag;
- (void)setIsAtGroupMemberHaveRecentMsgFlag:(_Bool)arg1;
- (_Bool)getIsAtAllGroupMemberMsgFlag;
- (void)setIsAtAllGroupMemberMsgFlag:(_Bool)arg1;
- (_Bool)getIsAtGroupMemberMsgFlag;
- (void)setIsAtGroupMemberMsgFlag:(_Bool)arg1;
- (_Bool)getIsGroopHaveAnnouncementRecentMessageFlag;
- (void)setIsGroopHaveAnnouncementRecentMessageFlag:(_Bool)arg1;
- (_Bool)getIsGroopAnnouncementMessageFlag;
- (void)setIsGroopAnnouncementMessageFlag:(_Bool)arg1;
- (id)getGroupPicShowPara;
- (void)setGroupPicShowPara:(id)arg1;
- (int)getGroupPicShowId;
- (void)setGroupPicShowId:(int)arg1;
- (_Bool)getGroupPicShowVersion;
- (void)setGroupPicShowVersion:(int)arg1;
- (_Bool)getIsGroupHavePicShowMsgFlag;
- (void)setIsGroupHavePicShowMsgFlag:(_Bool)arg1;
- (_Bool)getIsGroupPicShowMsgFlag;
- (void)setIsGroupPicShowMsgFlag:(_Bool)arg1;
- (_Bool)getIsGroupHaveFileOrAlbumMsgFlag;
- (void)setIsGroupHaveFileOrAlbumMsgFlag:(_Bool)arg1;
- (_Bool)getIsGroupFileOrAlbumMsgFlag;
- (void)setIsGroupFileOrAlbumMsgFlag:(_Bool)arg1;
- (_Bool)getIsGroopHaveSpecialFocusRecentMessageFlag;
- (void)setIsGroopHaveSpecialFocusRecentMessageFlag:(_Bool)arg1;
- (_Bool)getIsGroupSpecialFocusMessageFlag;
- (void)setIsGroupSpecialFocusMessageFlag:(_Bool)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getStrCmd;
- (void)setStrCmd:(id)arg1;
- (unsigned int)getCombosCount;
- (void)setCombosCount:(unsigned int)arg1;
- (int)getDownloadImageErrorCode;
- (void)setDownloadImageErrorCode:(int)arg1;
- (_Bool)changed;
- (void)mergeChange:(id)arg1;
- (id)serialize;
- (void)constructFromData:(id)arg1;
- (_Bool)getTest;
- (void)setTest:(_Bool)arg1;
- (int)getSaveFlag;
- (void)setSaveFlag:(int)arg1;
- (id)init;

@end

