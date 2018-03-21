//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class MQZPhotoProvider, NSArray, NSDictionary, NSIndexSet, QzonePhotoModel, UIImage;

@protocol MQZonePhotoDescriptionDelegate <NSObject>

@optional
- (UIImage *)originalImageForCurrentPhoto:(long long)arg1;
- (void)onDeleteForwardPreviewPhotoModel:(QzonePhotoModel *)arg1;
- (_Bool)photoDescriptionCanSelectPhoto:(long long)arg1;
- (void)onEditVideoWithProvider:(MQZPhotoProvider *)arg1 videoInfo:(NSDictionary *)arg2;
- (void)onEditIndex:(long long)arg1 toImage:(UIImage *)arg2;
- (void)onClickSendPhotos:(NSArray *)arg1 eventIndex:(long long)arg2;
- (void)onUpdateOnePhoto:(unsigned long long)arg1 isSelected:(_Bool)arg2;
- (void)onDeleteWithIndexset:(NSIndexSet *)arg1;
- (void)onDelete:(unsigned long long)arg1;
@end
