//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ARBlessShareInfo : NSObject
{
    unsigned int _videoDuration;
    unsigned int _fileSize;
    unsigned long long _fromUin;
    unsigned long long _topicID;
    unsigned long long _shareID;
    long long _contentType;
    unsigned long long _createTime;
    NSString *_videoURL;
    NSString *_imageURL;
    NSString *_desc;
    NSString *_msgURL;
    NSString *_msgCoverURL;
    NSString *_msgTitle;
    NSString *_msgSummary;
}

@property(retain, nonatomic) NSString *msgSummary; // @synthesize msgSummary=_msgSummary;
@property(retain, nonatomic) NSString *msgTitle; // @synthesize msgTitle=_msgTitle;
@property(retain, nonatomic) NSString *msgCoverURL; // @synthesize msgCoverURL=_msgCoverURL;
@property(retain, nonatomic) NSString *msgURL; // @synthesize msgURL=_msgURL;
@property(nonatomic) unsigned int fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) unsigned int videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSString *videoURL; // @synthesize videoURL=_videoURL;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) unsigned long long shareID; // @synthesize shareID=_shareID;
@property(nonatomic) unsigned long long topicID; // @synthesize topicID=_topicID;
@property(nonatomic) unsigned long long fromUin; // @synthesize fromUin=_fromUin;
- (void).cxx_destruct;

@end
