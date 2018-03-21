//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQFacePanelController.h>

@protocol QQBiuFacePanelControllerDelegate, QQFaceKeyBoardDelegate;

@interface QQBiuFacePanelController : QQFacePanelController
{
    _Bool _notSupportBigFace;
    id <QQBiuFacePanelControllerDelegate> _biuFacePanelDelegate;
    id <QQFaceKeyBoardDelegate> _keyBoardDelegate;
}

@property(nonatomic) _Bool notSupportBigFace; // @synthesize notSupportBigFace=_notSupportBigFace;
@property(nonatomic) __weak id <QQFaceKeyBoardDelegate> keyBoardDelegate; // @synthesize keyBoardDelegate=_keyBoardDelegate;
@property(nonatomic) __weak id <QQBiuFacePanelControllerDelegate> biuFacePanelDelegate; // @synthesize biuFacePanelDelegate=_biuFacePanelDelegate;
- (void).cxx_destruct;
- (void)onAddPackage:(id)arg1;
- (void)onUpdateRecommendPanel:(id)arg1;
- (int)getFirstStorePackageTabOffset;
- (void)storeLastTab:(long long)arg1;
- (void)loadLastSelectedTabTo:(long long *)arg1;
- (long long)getFacePanelEmojiTypes;
- (id)getKeyBoardDelegate;
- (struct CGRect)getQQFaceShowRectNew:(struct CGRect)arg1;
- (_Bool)showFaceKeyboardForItem:(long long)arg1 forPage:(long long)arg2;
- (void)hideTabBar;
- (id)init;

@end
