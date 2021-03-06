//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQGroupSettingViewCell.h>

@class NSMutableArray, NSMutableDictionary, UIImageView;
@protocol QQGroupSettingViewHeadIconsCellDelegate;

@interface QQGroupSettingViewHeadIconsCell : QQGroupSettingViewCell
{
    NSMutableArray *_heardIconViewArray;
    UIImageView *_iconImageView;
    unsigned long long _memberCount;
    _Bool _isSimple;
    _Bool _isShowTitle;
    id <QQGroupSettingViewHeadIconsCellDelegate> _headIconCelldelegate;
    NSMutableDictionary *_uinRemarkDic;
    NSMutableDictionary *_adminUinRemarkDic;
    long long _headIconCellAlign;
}

+ (double)calculateMemberCountCellHeight;
+ (double)calculateCellHeight:(long long)arg1;
+ (float)calculateImageWidth:(float)arg1 picCount:(int)arg2;
@property(nonatomic) _Bool isShowTitle; // @synthesize isShowTitle=_isShowTitle;
@property(nonatomic) long long headIconCellAlign; // @synthesize headIconCellAlign=_headIconCellAlign;
@property(nonatomic) _Bool isSimple; // @synthesize isSimple=_isSimple;
@property(retain, nonatomic) NSMutableDictionary *adminUinRemarkDic; // @synthesize adminUinRemarkDic=_adminUinRemarkDic;
@property(retain, nonatomic) NSMutableDictionary *uinRemarkDic; // @synthesize uinRemarkDic=_uinRemarkDic;
@property(nonatomic) id <QQGroupSettingViewHeadIconsCellDelegate> headIconCelldelegate; // @synthesize headIconCelldelegate=_headIconCelldelegate;
- (void)layoutSubviews;
- (void)onAddViewClicked;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

