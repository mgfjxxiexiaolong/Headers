//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TTUserProfileEvaluationResponseModel, UIImage;

@interface TTProfileFillManager : NSObject
{
    _Bool _isCommentFlag;
    _Bool _isShowProfileFill;
    _Bool _isShowAuth;
    _Bool _updateInfoPending;
    TTUserProfileEvaluationResponseModel *_profileModel;
    unsigned long long _imageStatus;
    NSString *_avartarUri;
    UIImage *_avartarImage;
    NSString *_userName;
    CDUnknownBlockType _pendingCompletion;
}

+ (void)load;
+ (id)manager;
@property(copy, nonatomic) CDUnknownBlockType pendingCompletion; // @synthesize pendingCompletion=_pendingCompletion;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) UIImage *avartarImage; // @synthesize avartarImage=_avartarImage;
@property(copy, nonatomic) NSString *avartarUri; // @synthesize avartarUri=_avartarUri;
@property(nonatomic) _Bool updateInfoPending; // @synthesize updateInfoPending=_updateInfoPending;
@property(nonatomic) unsigned long long imageStatus; // @synthesize imageStatus=_imageStatus;
@property(nonatomic) _Bool isShowAuth; // @synthesize isShowAuth=_isShowAuth;
@property(retain, nonatomic) TTUserProfileEvaluationResponseModel *profileModel; // @synthesize profileModel=_profileModel;
@property(nonatomic) _Bool isShowProfileFill; // @synthesize isShowProfileFill=_isShowProfileFill;
@property(nonatomic) _Bool isCommentFlag; // @synthesize isCommentFlag=_isCommentFlag;
- (void).cxx_destruct;
- (void)clearProfileModel;
- (_Bool)isAccoutChanged;
- (void)synchronizeLocalFlag:(id)arg1 orIcon:(id)arg2;
- (void)updateUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmUserIconAndNameCompletion:(CDUnknownBlockType)arg1;
- (void)presetUserName:(id)arg1;
- (void)uploadUserIcon:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateUserIcon:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateUserName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)isShowProfileFill:(CDUnknownBlockType)arg1 log_action:(_Bool)arg2 disable:(_Bool)arg3;

@end
