//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQRichMediaPickerControllerDelegate-Protocol.h>
#import <QQMainProject/QQRichMediaPickerReportDelegate-Protocol.h>

@class MQZoneVideoRecordViewController, NSString, QQNavigationController, QZCarameGuideView, UIView;

@interface MQZSliptoCamaraManager : NSObject <QQRichMediaPickerControllerDelegate, QQRichMediaPickerReportDelegate>
{
    MQZoneVideoRecordViewController *_recordViewController;
    _Bool _isCanOpen;
    _Bool _isStartCamera;
    _Bool _alreadyDownLoad;
    NSString *_unZipPath;
    NSString *_remoteURL;
    int _xo;
    _Bool _wnsIsAllowToSlide;
    int _storageAppearCount;
    UIView *_contentView;
    UIView *_maskView;
    QQNavigationController *_navigationController;
    QZCarameGuideView *_carameGuideView;
}

+ (id)getManager;
@property(nonatomic) int storageAppearCount; // @synthesize storageAppearCount=_storageAppearCount;
@property(nonatomic) _Bool wnsIsAllowToSlide; // @synthesize wnsIsAllowToSlide=_wnsIsAllowToSlide;
@property(retain, nonatomic) QZCarameGuideView *carameGuideView; // @synthesize carameGuideView=_carameGuideView;
@property(retain, nonatomic) NSString *remoteURL; // @synthesize remoteURL=_remoteURL;
@property(nonatomic) _Bool alreadyDownLoad; // @synthesize alreadyDownLoad=_alreadyDownLoad;
@property(nonatomic) _Bool isStartCamera; // @synthesize isStartCamera=_isStartCamera;
@property(nonatomic) QQNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) _Bool isCanOpen; // @synthesize isCanOpen=_isCanOpen;
@property(retain, nonatomic) NSString *unZipPath; // @synthesize unZipPath=_unZipPath;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MQZoneVideoRecordViewController *recordViewController; // @synthesize recordViewController=_recordViewController;
- (_Bool)rightAngle:(struct CGPoint)arg1 starLocation:(struct CGPoint)arg2 width:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

