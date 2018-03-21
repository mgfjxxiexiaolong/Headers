//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQFaceFrameCollectionView.h>

@class NSArray, NSString, UIImage;

@interface QQFaceAssociateFrameView : QQFaceFrameCollectionView
{
    UIImage *_cutAIOViewImage;
    NSArray *_associateEmojis;
    NSString *_keyword;
    _Bool _hasCloudEmoji;
    NSArray *_maxEmojis;
    int _xo;
    NSArray *_historys;
    unsigned long long _maxCount;
    NSString *_selectEmojiID;
    NSString *_text;
}

@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *selectEmojiID; // @synthesize selectEmojiID=_selectEmojiID;
@property(nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
@property(retain, nonatomic) NSArray *historys; // @synthesize historys=_historys;
- (void)uploadView_associate:(id)arg1;
- (void)saveAssociateInfoWithOffset:(double)arg1 clearFlag:(_Bool)arg2;
- (id)cellForTouchPoint:(struct CGPoint)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)checkPreviewState:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (struct CGRect)cellFrameByIndex:(unsigned long long)arg1;
- (void)emojiCloudSearchFinish:(id)arg1;
- (void)downloadNeedDownloadEmoji:(id)arg1;
- (void)searchCloud:(id)arg1;
- (void)showKeyBoardIfNeed;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)showImageWithCell:(id)arg1 withImageView:(id)arg2;
- (void)addFaceCellWithInfo:(id)arg1;
- (void)updateCellsFrame;
- (id)loadFace:(id)arg1 hasCloudEmoji:(_Bool)arg2 keywords:(id)arg3;
- (_Bool)isSupportRightDragToGoBack;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) NSArray *associateEmojis; // @dynamic associateEmojis;
@property(retain, nonatomic) UIImage *cutAIOViewImage; // @dynamic cutAIOViewImage;
@property(nonatomic) _Bool hasCloudEmoji; // @dynamic hasCloudEmoji;
@property(copy, nonatomic) NSString *keyword; // @dynamic keyword;
@property(retain, nonatomic) NSArray *maxEmojis; // @dynamic maxEmojis;

@end
