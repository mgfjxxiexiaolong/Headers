//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSCSHotViewProducer.h"

@class TBSCSListViewAndPublishViewProducer;

@interface TBSCSHotViewInMixProducer : TBSCSHotViewProducer
{
    TBSCSListViewAndPublishViewProducer *_lvapvProducer;
}

@property(nonatomic) __weak TBSCSListViewAndPublishViewProducer *lvapvProducer; // @synthesize lvapvProducer=_lvapvProducer;
- (void).cxx_destruct;
- (void)onClickAllReplyComment:(struct UIView *)arg1;
- (void)onClickImageGrid:(struct UIView *)arg1;
- (void)onClickImageGridItem:(struct UIView *)arg1;
- (void)onClickContentComment:(struct UIView *)arg1;
- (void)onClickComment:(struct UIView *)arg1;
- (void)onClickAllComment:(struct UIView *)arg1;
- (void)moreCommentClick:(struct UIView *)arg1;
- (id)init;

@end
