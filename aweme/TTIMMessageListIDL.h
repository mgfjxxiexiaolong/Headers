//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface TTIMMessageListIDL : NSObject
{
    NSMutableDictionary *_mapGroupMsgDic;
    NSMutableArray *_groupIds;
    NSMutableArray *_mSessionReadMsgIdList;
}

@property(retain, nonatomic) NSMutableArray *mSessionReadMsgIdList; // @synthesize mSessionReadMsgIdList=_mSessionReadMsgIdList;
@property(retain, nonatomic) NSMutableArray *groupIds; // @synthesize groupIds=_groupIds;
@property(retain, nonatomic) NSMutableDictionary *mapGroupMsgDic; // @synthesize mapGroupMsgDic=_mapGroupMsgDic;
- (void).cxx_destruct;
- (void)updateGroupIdsFromHttpModel:(id)arg1;
- (void)updateMapGroupMsgDicFromHttpModel:(id)arg1;
- (id)sessionReadMsgIdList;
- (_Bool)isNeedLoadMoreMsgs;
- (void)extractFields:(id)arg1;

@end
