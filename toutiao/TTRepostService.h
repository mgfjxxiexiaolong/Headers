//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TTRepostService : NSObject
{
    NSMutableDictionary *_trackExtraParams;
}

+ (id)richSpanWithContent:(id)arg1 user:(id)arg2;
+ (id)coverURLWithRepostCommonModel:(id)arg1;
+ (id)coverURLWithThread:(id)arg1;
+ (id)coverURLWithArticle:(id)arg1;
+ (void)repostAdapterWithRepostType:(unsigned long long)arg1 originArticle:(id)arg2 originThread:(id)arg3 originShortVideoOriginalData:(id)arg4 originWendaAnswer:(id)arg5 operationItemType:(unsigned long long)arg6 operationItemID:(id)arg7 repostSegments:(id)arg8;
+ (id)repostParamsWithRepostType:(unsigned long long)arg1 originArticle:(id)arg2 originThread:(id)arg3 originShortVideoOriginalData:(id)arg4 originWendaAnswer:(id)arg5 operationItemType:(unsigned long long)arg6 operationItemID:(id)arg7 repostSegments:(id)arg8;
+ (void)directSendRepostWithRepostParams:(id)arg1 baseViewController:(id)arg2 trackDict:(id)arg3;
+ (void)showRepostVCWithRepostParams:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *trackExtraParams; // @synthesize trackExtraParams=_trackExtraParams;
- (void).cxx_destruct;
- (void)directSendRepostWithRepostParams:(id)arg1 baseViewController:(id)arg2 trackDict:(id)arg3;
- (void)showRepostVCWithRepostParams:(id)arg1;
- (void)showRepostVCWithRepostType:(unsigned long long)arg1 originArticle:(id)arg2 originThread:(id)arg3 originShortVideoOriginalData:(id)arg4 originWendaAnswer:(id)arg5 operationItemType:(unsigned long long)arg6 operationItemID:(id)arg7 repostSegments:(id)arg8;
- (id)repostParamsWithRepostType:(unsigned long long)arg1 originArticle:(id)arg2 originThread:(id)arg3 originShortVideoOriginalData:(id)arg4 originWendaAnswer:(id)arg5 operationItemType:(unsigned long long)arg6 operationItemID:(id)arg7 repostSegments:(id)arg8;
- (void)trackRepostV3WithEvent:(id)arg1 repostModel:(id)arg2 extra:(id)arg3;
- (void)trackRepostWithEvent:(id)arg1 label:(id)arg2 repostModel:(id)arg3 extra:(id)arg4;
- (void)postContentWithInputText:(id)arg1 richSpanText:(id)arg2 isCommentRepost:(_Bool)arg3 trackDict:(id)arg4 finishBlock:(CDUnknownBlockType)arg5;
- (void)loginedStateSendRepostWithRepostModel:(id)arg1 richSpanText:(id)arg2 isCommentRepost:(_Bool)arg3 baseViewController:(id)arg4 trackDict:(id)arg5 finishBlock:(CDUnknownBlockType)arg6;
- (void)sendRepostWithRepostModel:(id)arg1 richSpanText:(id)arg2 isCommentRepost:(_Bool)arg3 baseViewController:(id)arg4 trackDict:(id)arg5 finishBlock:(CDUnknownBlockType)arg6;

@end

