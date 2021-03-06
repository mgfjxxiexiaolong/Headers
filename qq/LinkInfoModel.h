//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/BaseInfoModel.h>

#import <QQMainProject/FavCoding-Protocol.h>

@class NSMutableArray, NSString;

@interface LinkInfoModel : BaseInfoModel <FavCoding>
{
    NSString *_url;
    NSString *_resource_url;
    NSString *_title;
    NSString *_publisher;
    NSString *_brief;
    NSMutableArray *_pic_list;
    unsigned int _link_type;
}

@property(nonatomic) unsigned int link_type; // @synthesize link_type=_link_type;
- (id)getPicInfoList;
- (int)getForwardData:(id)arg1 Fetch:(_Bool)arg2;
- (_Bool)canForward;
- (int)getDataType;
- (id)GetFTSSrc;
- (id)isSrcMatched:(id)arg1;
- (id)GetFTSBrief;
- (id)getDefaultThumbPath;
- (id)isBriefMatched:(id)arg1;
- (void)setData:(id)arg1 forDetail:(_Bool)arg2;
- (id)encodeDataForDetail:(_Bool)arg1;
- (int)getRspType;
- (void)encodeModifyReqMsg:(void *)arg1;
- (void)encodeAddReqMsg:(void *)arg1;
- (void)dealloc;
- (void)mergeDataFromModel:(id)arg1;
- (id)initWithSummary:(void *)arg1;
- (id)init;
- (Class)classForCell;
- (_Bool)hasThumbnailForCell;
- (id)sourceForCell;
- (id)briefForCell;

// Remaining properties
@property(copy, nonatomic) NSString *brief; // @dynamic brief;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSMutableArray *pic_list; // @dynamic pic_list;
@property(copy, nonatomic) NSString *publisher; // @dynamic publisher;
@property(copy, nonatomic) NSString *resource_url; // @dynamic resource_url;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSString *url; // @dynamic url;

@end

