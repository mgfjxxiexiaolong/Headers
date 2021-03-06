//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class Article, ExploreItemActionManager, NSDictionary;
@protocol TTVArticleProtocol, TTVVideoDetailCollectServiceDelegate;

@interface TTVVideoDetailCollectService : NSObject
{
    NSDictionary *_gdExtJSONDict;
    id <TTVArticleProtocol> _originalArticle;
    id <TTVVideoDetailCollectServiceDelegate> _delegate;
    ExploreItemActionManager *_itemAction;
    Article *_article;
}

@property(retain, nonatomic) Article *article; // @synthesize article=_article;
@property(retain, nonatomic) ExploreItemActionManager *itemAction; // @synthesize itemAction=_itemAction;
@property(nonatomic) __weak id <TTVVideoDetailCollectServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <TTVArticleProtocol> originalArticle; // @synthesize originalArticle=_originalArticle;
@property(retain, nonatomic) NSDictionary *gdExtJSONDict; // @synthesize gdExtJSONDict=_gdExtJSONDict;
- (void).cxx_destruct;
- (void)showTipMsg:(id)arg1 icon:(id)arg2 buttonSeat:(id)arg3;
- (void)showTipMsg:(id)arg1 icon:(id)arg2;
- (void)didUnFavorWithButtonSeat:(id)arg1;
- (void)didFavor:(id)arg1 trackEventTag:(id)arg2 buttonSeat:(id)arg3;
- (void)favorFunc:(id)arg1 trackEventTag:(id)arg2 viewController:(id)arg3 source:(id)arg4 buttonSeat:(id)arg5;
- (void)changeFavoriteButtonClicked:(double)arg1 viewController:(id)arg2 withButtonSeat:(id)arg3;
- (void)changeFavoriteButtonClicked:(double)arg1 viewController:(id)arg2;
- (id)currentADID;

@end

