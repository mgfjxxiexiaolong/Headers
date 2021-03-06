//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIOMsgModel.h>

@class NSMutableArray, NSString, QQSMMessage;

@interface QQAIOSMMessageModel : QQAIOMsgModel
{
    QQSMMessage *_smMessage;
    double _smHeight;
    _Bool bNeedRefreshUI;
    _Bool _loading;
    _Bool _uploading;
    NSString *_process;
    _Bool _bNeedRefreshUI;
    NSMutableArray *_subMsgArray;
    QQAIOSMMessageModel *_parentModel;
}

+ (id)modelWithMessageModel:(id)arg1;
@property(nonatomic) __weak QQAIOSMMessageModel *parentModel; // @synthesize parentModel=_parentModel;
@property(retain, nonatomic) NSMutableArray *subMsgArray; // @synthesize subMsgArray=_subMsgArray;
@property(nonatomic) _Bool bNeedRefreshUI; // @synthesize bNeedRefreshUI=_bNeedRefreshUI;
- (void).cxx_destruct;
- (id)getRichModelPictureName;
- (void)updateSMMessage:(id)arg1;
- (void)dealloc;
- (_Bool)shouldDisplaySelfNick;
- (id)parseModelSMMessage:(id)arg1;
- (void)ifNeedModifyStructMessageForwardFlag;
- (id)favoritesInfoModel;
- (double)cellHeight;
- (id)eventHandleClassName;
- (id)cellIdentifier;
- (id)cellClassName;
- (_Bool)isValidNewShareSM:(id)arg1;
- (void)updateUploadState:(_Bool)arg1;
- (id)initWithMessageModel:(id)arg1 checkState:(_Bool)arg2;
- (void)processSMForNewLayout:(id)arg1 QQSMModel:(id)arg2;
- (void)calculateItemPosition:(id)arg1;
- (id)cellDataForRow:(unsigned long long)arg1;
- (long long)numberOfRowsInSection;
- (void)changeShowStyleForThirdAppShare;
- (_Bool)isFromThirdAppShare;
- (id)initWithMessageModel:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool loading; // @dynamic loading;
@property(retain, nonatomic) NSString *process; // @dynamic process;
@property(nonatomic) double smHeight; // @dynamic smHeight;
@property(retain, nonatomic) QQSMMessage *smMessage; // @dynamic smMessage;
@property(nonatomic) _Bool uploading; // @dynamic uploading;

@end

