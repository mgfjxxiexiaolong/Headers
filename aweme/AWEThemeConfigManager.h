//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIImage;

@interface AWEThemeConfigManager : NSObject
{
    _Bool _isActive;
    UIImage *_homeImage;
    UIImage *_homeClickImage;
    UIImage *_findImage;
    UIImage *_findClickImage;
    UIImage *_followImage;
    UIImage *_followClickImage;
    UIImage *_shotImage;
    UIImage *_shotClickImage;
    UIImage *_noticeImage;
    UIImage *_noticeClickImage;
    UIImage *_personImage;
    UIImage *_personClickImage;
    UIImage *_beforeDiggImage;
    UIImage *_afterDiggImage;
    UIImage *_actionDiggImage;
}

+ (id)sharedManager;
@property(retain, nonatomic) UIImage *actionDiggImage; // @synthesize actionDiggImage=_actionDiggImage;
@property(retain, nonatomic) UIImage *afterDiggImage; // @synthesize afterDiggImage=_afterDiggImage;
@property(retain, nonatomic) UIImage *beforeDiggImage; // @synthesize beforeDiggImage=_beforeDiggImage;
@property(retain, nonatomic) UIImage *personClickImage; // @synthesize personClickImage=_personClickImage;
@property(retain, nonatomic) UIImage *personImage; // @synthesize personImage=_personImage;
@property(retain, nonatomic) UIImage *noticeClickImage; // @synthesize noticeClickImage=_noticeClickImage;
@property(retain, nonatomic) UIImage *noticeImage; // @synthesize noticeImage=_noticeImage;
@property(retain, nonatomic) UIImage *shotClickImage; // @synthesize shotClickImage=_shotClickImage;
@property(retain, nonatomic) UIImage *shotImage; // @synthesize shotImage=_shotImage;
@property(retain, nonatomic) UIImage *followClickImage; // @synthesize followClickImage=_followClickImage;
@property(retain, nonatomic) UIImage *followImage; // @synthesize followImage=_followImage;
@property(retain, nonatomic) UIImage *findClickImage; // @synthesize findClickImage=_findClickImage;
@property(retain, nonatomic) UIImage *findImage; // @synthesize findImage=_findImage;
@property(retain, nonatomic) UIImage *homeClickImage; // @synthesize homeClickImage=_homeClickImage;
@property(retain, nonatomic) UIImage *homeImage; // @synthesize homeImage=_homeImage;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
- (void).cxx_destruct;
- (id)modelForTheme;
- (void)persist:(id)arg1;
- (void)fetchTheme;
- (void)removeResource;
- (id)imageForURL:(id)arg1;
- (void)storeImage:(id)arg1 ForURL:(id)arg2;
- (_Bool)imageExistForURL:(id)arg1;
- (void)checkAndReloadResourceWith:(id)arg1;
- (void)loadResource:(_Bool)arg1;
- (id)imageByResizeImage:(id)arg1 toHeight:(double)arg2;
- (id)imageByResizeImage:(id)arg1 toWidth:(double)arg2;
- (void)resizeImage;
- (void)checkActive;
- (void)downloadImageWithURLArray:(id)arg1 atIndex:(unsigned long long)arg2 group:(id)arg3;
- (void)downloadImageWithURLArray:(id)arg1 group:(id)arg2;
- (void)downloadImageWithURLModelsArray:(id)arg1;
- (void)closeTheme;
- (void)fetchImageResource:(id)arg1;
- (void)async_fetchResourceWithModel:(id)arg1;
- (id)init;

@end
