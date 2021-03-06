//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZBatchMediaJob.h>

@class NSArray, NSDate, NSDictionary, NSMutableArray, QZTaskLbsInfo;

@interface QZMoodBatchMediaJob : QZBatchMediaJob
{
}

+ (id)operationWithJob:(id)arg1;
- (id)createUploadPacket;
- (_Bool)persistent;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSArray *audienceUINs; // @dynamic audienceUINs;
@property(nonatomic) long long currentUploadIndex; // @dynamic currentUploadIndex;
@property(retain, nonatomic) NSMutableArray *easterEggPictures; // @dynamic easterEggPictures;
@property(retain, nonatomic) NSDictionary *extendInfo; // @dynamic extendInfo;
@property(retain, nonatomic) NSMutableArray *feedPictures; // @dynamic feedPictures;
@property(retain, nonatomic) QZTaskLbsInfo *hiddenLBSInfo; // @dynamic hiddenLBSInfo;
@property(retain, nonatomic) NSDictionary *otherInfo; // @dynamic otherInfo;
@property(retain, nonatomic) QZTaskLbsInfo *photoLBSInfo; // @dynamic photoLBSInfo;
@property(retain, nonatomic) NSDate *postDate; // @dynamic postDate;
@property(nonatomic) long long privacyType; // @dynamic privacyType;
@property(retain, nonatomic) NSMutableArray *qzoneAlbumPictures; // @dynamic qzoneAlbumPictures;
@property(nonatomic) _Bool syncToQQ; // @dynamic syncToQQ;
@property(retain, nonatomic) QZTaskLbsInfo *uploadLBSInfo; // @dynamic uploadLBSInfo;

@end

