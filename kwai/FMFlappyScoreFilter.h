//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMFlappyFilter.h"

@class NSMutableArray, Tuple2, UIImage;

@interface FMFlappyScoreFilter : FMFlappyFilter
{
    NSMutableArray *mScoreItems;
    float mScoreItemWidth;
    float mScoreItemHeight;
    int mScoreItemCount;
    unsigned int mScoreItemTextureId;
    int mPerScreenScoreItem;
    NSMutableArray *mScoredItemList;
    UIImage *mScoreItemImage;
    Tuple2 *SCALE_RATIO;
    float mCurrentScoreItemXOffset;
    NSMutableArray *mCurrentScoreItems;
}

+ (id)flappyScoreFilterWithResource:(id)arg1 materialProvider:(id)arg2 layerName:(id)arg3;
- (void).cxx_destruct;
- (void)updateCameraFacePoints:(struct CGPoint *)arg1 length:(int)arg2 roll:(float *)arg3 yaw:(float *)arg4 pitch:(float *)arg5;
- (void)updateScoreItem;
- (void)restartGame;
- (void)updateScore;
- (void)drawScene;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)onInit;
- (id)initWithVertexString:(id)arg1 shaderString:(id)arg2 jsonDic:(id)arg3 imageUrlDic:(id)arg4 width:(float)arg5 height:(float)arg6;
- (void)dealloc;
- (void)updateWithFaceFeatures:(id)arg1 filterEnable:(_Bool)arg2;

@end
