//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XSearchMainViewComponent.h"

@class TBXSearchEmptyView, TBXSearchRequestEmptyModel;

@interface TBXSearchRequestEmptyComponent : XSearchMainViewComponent
{
    TBXSearchEmptyView *_emptyView;
}

@property(retain, nonatomic) TBXSearchEmptyView *emptyView; // @synthesize emptyView=_emptyView;
- (void).cxx_destruct;
- (void)dataLoaded;
- (id)initWithFrame:(struct CGRect)arg1 Service:(id)arg2;

// Remaining properties
@property(retain, nonatomic) TBXSearchRequestEmptyModel *model; // @dynamic model;

@end

