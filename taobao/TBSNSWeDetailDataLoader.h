//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBSNSBasicServiceDelegate-Protocol.h"

@class NSString, TBSNSFeedCommentService, TBSNSWeDetailBaseItem, TBSNSWeDetailBaseService, TBSNSWeDetailExtendService;

@interface TBSNSWeDetailDataLoader : NSObject <TBSNSBasicServiceDelegate>
{
    _Bool _isCache;
    TBSNSWeDetailExtendService *_commentExtendService;
    TBSNSWeDetailBaseService *_baseService;
    TBSNSFeedCommentService *_commentService;
    CDUnknownBlockType _baseItemFinish;
    CDUnknownBlockType _extendItemFinish;
    CDUnknownBlockType _commentFinish;
    CDUnknownBlockType _newCommentFinish;
    TBSNSWeDetailBaseItem *_baseItem;
}

@property(nonatomic) _Bool isCache; // @synthesize isCache=_isCache;
@property(retain, nonatomic) TBSNSWeDetailBaseItem *baseItem; // @synthesize baseItem=_baseItem;
@property(copy, nonatomic) CDUnknownBlockType newCommentFinish; // @synthesize newCommentFinish=_newCommentFinish;
@property(copy, nonatomic) CDUnknownBlockType commentFinish; // @synthesize commentFinish=_commentFinish;
@property(copy, nonatomic) CDUnknownBlockType extendItemFinish; // @synthesize extendItemFinish=_extendItemFinish;
@property(copy, nonatomic) CDUnknownBlockType baseItemFinish; // @synthesize baseItemFinish=_baseItemFinish;
@property(retain, nonatomic) TBSNSFeedCommentService *commentService; // @synthesize commentService=_commentService;
@property(retain, nonatomic) TBSNSWeDetailBaseService *baseService; // @synthesize baseService=_baseService;
@property(retain, nonatomic) TBSNSWeDetailExtendService *commentExtendService; // @synthesize commentExtendService=_commentExtendService;
- (void).cxx_destruct;
- (void)service:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)serviceDidFinishLoad:(id)arg1;
- (void)addWeDetailNewCommentWithUserId:(unsigned long long)arg1 socialParam:(id)arg2 commentExtParam:(id)arg3 accountId:(unsigned long long)arg4 andUnRequiredArgsParentId:(unsigned long long)arg5 type:(int)arg6 content:(id)arg7 extSymbol:(id)arg8 finish:(CDUnknownBlockType)arg9;
- (void)loadWeDetailCommentListWithFeedId:(unsigned long long)arg1 accountId:(unsigned long long)arg2 pageId:(unsigned long long)arg3 finish:(CDUnknownBlockType)arg4;
- (void)loadWeDetailExtendItemWithBaseItem:(id)arg1 isCache:(_Bool)arg2 finish:(CDUnknownBlockType)arg3;
- (void)loadWeDetailBaseItemWithSellerId:(unsigned long long)arg1 feedId:(unsigned long long)arg2 type:(id)arg3 finish:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
