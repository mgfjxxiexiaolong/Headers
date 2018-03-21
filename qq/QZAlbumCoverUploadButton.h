//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface QZAlbumCoverUploadButton : UIButton
{
}

+ (id)uploadButtonWithFrame:(struct CGRect)arg1 isIndividual:(_Bool)arg2 coverType:(long long)arg3 loverInfoViewBottom:(double)arg4;
- (void)convertToShareAlbumButton:(long long)arg1 showJoinButton:(_Bool)arg2;
- (void)convertToShareAlbumUploadButton:(long long)arg1;
- (void)convertToJoinShareAlbumButton:(long long)arg1;
- (void)buildParentButton:(struct CGRect)arg1;
- (void)buildIndividualButton:(struct CGRect)arg1;
- (void)buildLoverButton:(struct CGRect)arg1 loverInfoViewBottom:(double)arg2;
- (void)buildMultiButton:(struct CGRect)arg1;
- (void)buildButton:(struct CGRect)arg1 bgNormalColor:(id)arg2 bgSelectedColor:(id)arg3 bgDisabledColor:(id)arg4;
- (void)buildCommonButton:(struct CGRect)arg1;

@end
