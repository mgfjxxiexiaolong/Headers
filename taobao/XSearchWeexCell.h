//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XSearchBaseCell.h"

@class NSString, UIImageView, UIView, XSearchWXInstance, XSearchWeexCellModel;

@interface XSearchWeexCell : XSearchBaseCell
{
    XSearchWeexCellModel *_model;
    _Bool _rendered;
    NSString *_type;
    NSString *_version;
    XSearchWXInstance *_wxInstance;
    CDUnknownBlockType _layoutChangeHandler;
    double _renderStartTime;
    UIView *_placeHolderView;
    UIImageView *_placeHolderImageView;
}

+ (struct CGSize)cellSizeWithModel:(id)arg1 searchService:(id)arg2 layoutStyle:(long long)arg3;
@property(retain, nonatomic) UIImageView *placeHolderImageView; // @synthesize placeHolderImageView=_placeHolderImageView;
@property(retain, nonatomic) UIView *placeHolderView; // @synthesize placeHolderView=_placeHolderView;
@property(nonatomic) double renderStartTime; // @synthesize renderStartTime=_renderStartTime;
@property(copy, nonatomic) CDUnknownBlockType layoutChangeHandler; // @synthesize layoutChangeHandler=_layoutChangeHandler;
@property(nonatomic) _Bool rendered; // @synthesize rendered=_rendered;
@property(retain, nonatomic) XSearchWXInstance *wxInstance; // @synthesize wxInstance=_wxInstance;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void)setModel:(id)arg1;
- (id)model;
- (void).cxx_destruct;
- (void)removePlaceHolder;
- (void)showPlaceHolder;
- (void)dealloc;
- (void)removeMaskView:(id)arg1;
- (void)didSelect;
- (void)hideMask;
- (void)render;
- (id)generateRenderData;
- (void)adjustViews;
- (void)prepareForReuse;
- (id)getTraceDict;
- (id)pagePath;
- (void)reloadItemAtIndexPath;
- (id)initWithFrame:(struct CGRect)arg1;

@end
