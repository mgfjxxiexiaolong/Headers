//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QZGDTFeedComponentExport-Protocol.h>

@interface QZGDTFeedComponent : NSObject <QZGDTFeedComponentExport>
{
}

+ (void)updateGDTLikeConfig:(id)arg1 withFeedModel:(id)arg2 isSuperLike:(_Bool)arg3 feedScene:(id)arg4;
+ (void)updateActionButtonAttribute:(id)arg1 withFeedModel:(id)arg2 feedScene:(id)arg3;
+ (id)createGDTCardZoneAttributeWithFeedModel:(id)arg1 feedScene:(id)arg2;
+ (id)createGDTTopHeaderZoneDataWithFeedModel:(id)arg1 feedScene:(id)arg2;
+ (id)instance;

@end
