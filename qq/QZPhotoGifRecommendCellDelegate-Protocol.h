//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSArray, QQAsset;

@protocol QZPhotoGifRecommendCellDelegate <NSObject>

@optional
- (void)didSelectGifView:(NSArray *)arg1 gifFromType:(long long)arg2;
- (void)transformToContinuousGifSuccess:(QQAsset *)arg1 images:(NSArray *)arg2;
@end

