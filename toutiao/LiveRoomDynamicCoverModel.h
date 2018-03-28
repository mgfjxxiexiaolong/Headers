//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface LiveRoomDynamicCoverModel : MTLModel <MTLJSONSerializing>
{
    NSNumber *_width;
    NSNumber *_height;
    NSString *_uri;
    NSArray *_urlList;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSArray *urlList; // @synthesize urlList=_urlList;
@property(readonly, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(readonly, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(readonly, nonatomic) NSNumber *width; // @synthesize width=_width;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
