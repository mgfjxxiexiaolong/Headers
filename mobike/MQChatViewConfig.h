//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MQChatViewStyle, NSArray, NSMutableArray, NSString, UIButton, UIColor, UIImage;

@interface MQChatViewConfig : NSObject
{
    _Bool _hidesBottomBarWhenPushed;
    _Bool _enableEventDispaly;
    _Bool _enableSendVoiceMessage;
    _Bool _enableSendImageMessage;
    _Bool _enableMessageImageMask;
    _Bool _enableTopPullRefresh;
    _Bool _enableBottomPullRefresh;
    _Bool _enableChatWelcome;
    _Bool _enableTopAutoRefresh;
    _Bool _enableShowNewMessageAlert;
    _Bool _isPushChatView;
    _Bool _enableEvaluationButton;
    _Bool _enableVoiceRecordBlurView;
    _Bool _shouldUploadOutgoingAvartar;
    _Bool _keepAudioSessionActive;
    MQChatViewStyle *_chatViewStyle;
    NSMutableArray *_numberRegexs;
    NSMutableArray *_linkRegexs;
    NSMutableArray *_emailRegexs;
    unsigned long long _presentingAnimation;
    NSString *_chatWelcomeText;
    NSString *_agentName;
    NSString *_incomingMsgSoundFileName;
    NSString *_outgoingMsgSoundFileName;
    NSString *_scheduledAgentId;
    NSString *_scheduledGroupId;
    NSString *_customizedId;
    NSString *_navTitleText;
    UIImage *_incomingDefaultAvatarImage;
    UIImage *_outgoingDefaultAvatarImage;
    double _maxVoiceDuration;
    unsigned long long _recordMode;
    unsigned long long _playMode;
    NSArray *_preSendMessages;
    struct CGPoint _chatViewControllerPoint;
    struct CGRect _chatViewFrame;
}

+ (id)sharedConfig;
@property(retain, nonatomic) NSArray *preSendMessages; // @synthesize preSendMessages=_preSendMessages;
@property(nonatomic) unsigned long long playMode; // @synthesize playMode=_playMode;
@property(nonatomic) unsigned long long recordMode; // @synthesize recordMode=_recordMode;
@property(nonatomic) _Bool keepAudioSessionActive; // @synthesize keepAudioSessionActive=_keepAudioSessionActive;
@property(nonatomic) double maxVoiceDuration; // @synthesize maxVoiceDuration=_maxVoiceDuration;
@property(nonatomic) _Bool shouldUploadOutgoingAvartar; // @synthesize shouldUploadOutgoingAvartar=_shouldUploadOutgoingAvartar;
@property(retain, nonatomic) UIImage *outgoingDefaultAvatarImage; // @synthesize outgoingDefaultAvatarImage=_outgoingDefaultAvatarImage;
@property(retain, nonatomic) UIImage *incomingDefaultAvatarImage; // @synthesize incomingDefaultAvatarImage=_incomingDefaultAvatarImage;
@property(nonatomic) _Bool enableVoiceRecordBlurView; // @synthesize enableVoiceRecordBlurView=_enableVoiceRecordBlurView;
@property(nonatomic) _Bool enableEvaluationButton; // @synthesize enableEvaluationButton=_enableEvaluationButton;
@property(nonatomic) _Bool isPushChatView; // @synthesize isPushChatView=_isPushChatView;
@property(nonatomic) _Bool enableShowNewMessageAlert; // @synthesize enableShowNewMessageAlert=_enableShowNewMessageAlert;
@property(nonatomic) _Bool enableTopAutoRefresh; // @synthesize enableTopAutoRefresh=_enableTopAutoRefresh;
@property(nonatomic) _Bool enableChatWelcome; // @synthesize enableChatWelcome=_enableChatWelcome;
@property(nonatomic) _Bool enableBottomPullRefresh; // @synthesize enableBottomPullRefresh=_enableBottomPullRefresh;
@property(nonatomic) _Bool enableTopPullRefresh; // @synthesize enableTopPullRefresh=_enableTopPullRefresh;
@property(nonatomic) _Bool enableMessageImageMask; // @synthesize enableMessageImageMask=_enableMessageImageMask;
@property(nonatomic) _Bool enableSendImageMessage; // @synthesize enableSendImageMessage=_enableSendImageMessage;
@property(nonatomic) _Bool enableSendVoiceMessage; // @synthesize enableSendVoiceMessage=_enableSendVoiceMessage;
@property(nonatomic) _Bool enableEventDispaly; // @synthesize enableEventDispaly=_enableEventDispaly;
@property(copy, nonatomic) NSString *navTitleText; // @synthesize navTitleText=_navTitleText;
@property(copy, nonatomic) NSString *customizedId; // @synthesize customizedId=_customizedId;
@property(copy, nonatomic) NSString *scheduledGroupId; // @synthesize scheduledGroupId=_scheduledGroupId;
@property(copy, nonatomic) NSString *scheduledAgentId; // @synthesize scheduledAgentId=_scheduledAgentId;
@property(copy, nonatomic) NSString *outgoingMsgSoundFileName; // @synthesize outgoingMsgSoundFileName=_outgoingMsgSoundFileName;
@property(copy, nonatomic) NSString *incomingMsgSoundFileName; // @synthesize incomingMsgSoundFileName=_incomingMsgSoundFileName;
@property(copy, nonatomic) NSString *agentName; // @synthesize agentName=_agentName;
@property(copy, nonatomic) NSString *chatWelcomeText; // @synthesize chatWelcomeText=_chatWelcomeText;
@property(nonatomic) unsigned long long presentingAnimation; // @synthesize presentingAnimation=_presentingAnimation;
@property(retain, nonatomic) NSMutableArray *emailRegexs; // @synthesize emailRegexs=_emailRegexs;
@property(retain, nonatomic) NSMutableArray *linkRegexs; // @synthesize linkRegexs=_linkRegexs;
@property(retain, nonatomic) NSMutableArray *numberRegexs; // @synthesize numberRegexs=_numberRegexs;
@property(nonatomic) struct CGPoint chatViewControllerPoint; // @synthesize chatViewControllerPoint=_chatViewControllerPoint;
@property(nonatomic) struct CGRect chatViewFrame; // @synthesize chatViewFrame=_chatViewFrame;
@property(nonatomic) _Bool hidesBottomBarWhenPushed; // @synthesize hidesBottomBarWhenPushed=_hidesBottomBarWhenPushed;
@property(retain, nonatomic) MQChatViewStyle *chatViewStyle; // @synthesize chatViewStyle=_chatViewStyle;
- (void).cxx_destruct;
- (void)setConfigToDefault;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;

// Remaining properties
@property(nonatomic) struct UIEdgeInsets bubbleImageStretchInsets; // @dynamic bubbleImageStretchInsets;
@property(nonatomic) _Bool didSetStatusBarStyle; // @dynamic didSetStatusBarStyle;
@property(nonatomic) _Bool enableIncomingAvatar; // @dynamic enableIncomingAvatar;
@property(nonatomic) _Bool enableOutgoingAvatar; // @dynamic enableOutgoingAvatar;
@property(nonatomic) _Bool enableRoundAvatar; // @dynamic enableRoundAvatar;
@property(copy, nonatomic) UIColor *eventTextColor; // @dynamic eventTextColor;
@property(retain, nonatomic) UIImage *imageLoadErrorImage; // @dynamic imageLoadErrorImage;
@property(copy, nonatomic) UIColor *incomingBubbleColor; // @dynamic incomingBubbleColor;
@property(retain, nonatomic) UIImage *incomingBubbleImage; // @dynamic incomingBubbleImage;
@property(copy, nonatomic) UIColor *incomingMsgTextColor; // @dynamic incomingMsgTextColor;
@property(retain, nonatomic) UIImage *keyboardSenderHighlightedImage; // @dynamic keyboardSenderHighlightedImage;
@property(retain, nonatomic) UIImage *keyboardSenderImage; // @dynamic keyboardSenderImage;
@property(retain, nonatomic) UIImage *messageSendFailureImage; // @dynamic messageSendFailureImage;
@property(copy, nonatomic) UIColor *navBarColor; // @dynamic navBarColor;
@property(retain, nonatomic) UIButton *navBarLeftButton; // @dynamic navBarLeftButton;
@property(retain, nonatomic) UIButton *navBarRightButton; // @dynamic navBarRightButton;
@property(copy, nonatomic) UIColor *navBarTintColor; // @dynamic navBarTintColor;
@property(copy, nonatomic) UIColor *navTitleColor; // @dynamic navTitleColor;
@property(copy, nonatomic) UIColor *outgoingBubbleColor; // @dynamic outgoingBubbleColor;
@property(retain, nonatomic) UIImage *outgoingBubbleImage; // @dynamic outgoingBubbleImage;
@property(copy, nonatomic) UIColor *outgoingMsgTextColor; // @dynamic outgoingMsgTextColor;
@property(retain, nonatomic) UIImage *photoSenderHighlightedImage; // @dynamic photoSenderHighlightedImage;
@property(retain, nonatomic) UIImage *photoSenderImage; // @dynamic photoSenderImage;
@property(copy, nonatomic) UIColor *pullRefreshColor; // @dynamic pullRefreshColor;
@property(copy, nonatomic) UIColor *redirectAgentNameColor; // @dynamic redirectAgentNameColor;
@property(retain, nonatomic) UIImage *resignKeyboardHighlightedImage; // @dynamic resignKeyboardHighlightedImage;
@property(retain, nonatomic) UIImage *resignKeyboardImage; // @dynamic resignKeyboardImage;
@property(nonatomic) long long statusBarStyle; // @dynamic statusBarStyle;
@property(retain, nonatomic) UIImage *voiceSenderHighlightedImage; // @dynamic voiceSenderHighlightedImage;
@property(retain, nonatomic) UIImage *voiceSenderImage; // @dynamic voiceSenderImage;

@end

