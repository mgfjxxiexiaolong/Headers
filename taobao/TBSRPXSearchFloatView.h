//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, TBSRPXSearchService, TBXSearchContext;

@interface TBSRPXSearchFloatView : UIView
{
    _Bool _hideLast;
    id _delegate;
    UIView *_view;
    TBSRPXSearchService *_service;
    TBXSearchContext *_context;
    NSMutableArray *_array;
    NSMutableArray *_config;
}

@property(nonatomic) _Bool hideLast; // @synthesize hideLast=_hideLast;
@property(retain, nonatomic) NSMutableArray *config; // @synthesize config=_config;
@property(retain, nonatomic) NSMutableArray *array; // @synthesize array=_array;
@property(nonatomic) __weak TBXSearchContext *context; // @synthesize context=_context;
@property(nonatomic) __weak TBSRPXSearchService *service; // @synthesize service=_service;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setAllElementsAccessibility:(_Bool)arg1;
- (void)scolldidscoll:(id)arg1;
- (id)instanceWithName:(id)arg1;
- (void)insert:(id)arg1 index:(long long)arg2;
- (void)remove:(id)arg1;
- (void)buttonclick:(id)arg1;
- (id)generateUI:(id)arg1 WithIndex:(long long)arg2;
- (void)setup;
- (void)removeAllButtons;
- (void)initWithService:(id)arg1 Context:(id)arg2 SuperView:(id)arg3;
- (id)init;

@end

