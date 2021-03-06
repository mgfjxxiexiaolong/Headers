//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZoneModel.h>

@class MQZFacePicModel, NSString, NSURL, QZEasterEggImageInfo, QzonePhotoModel, UIImage;

@interface QZDraftImageModel : QZoneModel
{
    _Bool _isQzoneImage;
    MQZFacePicModel *_facePicModel;
    QzonePhotoModel *_photoModel;
    UIImage *_editedVideoCover;
    NSString *_editedVideoPath;
}

@property(retain, nonatomic) NSString *editedVideoPath; // @synthesize editedVideoPath=_editedVideoPath;
@property(retain, nonatomic) UIImage *editedVideoCover; // @synthesize editedVideoCover=_editedVideoCover;
@property(retain, nonatomic) QzonePhotoModel *photoModel; // @synthesize photoModel=_photoModel;
@property(nonatomic) _Bool isQzoneImage; // @synthesize isQzoneImage=_isQzoneImage;
@property(retain, nonatomic) MQZFacePicModel *facePicModel; // @synthesize facePicModel=_facePicModel;
- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) NSURL *assetURL; // @dynamic assetURL;
@property(retain, nonatomic) QZEasterEggImageInfo *easterEggImageInfo; // @dynamic easterEggImageInfo;
@property(retain, nonatomic) NSString *gifUrlInEasterEgg; // @dynamic gifUrlInEasterEgg;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *path; // @dynamic path;
@property(retain, nonatomic) NSString *photoTagResult; // @dynamic photoTagResult;
@property(retain, nonatomic) NSString *photoTagString; // @dynamic photoTagString;
@property(retain, nonatomic) UIImage *thumbImage; // @dynamic thumbImage;
@property(copy, nonatomic) NSString *uuid; // @dynamic uuid;

@end

