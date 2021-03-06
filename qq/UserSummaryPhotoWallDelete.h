//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/PhotoWallDeleteDelegate-Protocol.h>

@class NSMutableArray, NSString, NSTimer;
@protocol UserSummaryPhotoWallDeleteDelegate;

@interface UserSummaryPhotoWallDelete : NSObject <PhotoWallDeleteDelegate>
{
    NSMutableArray *_deleteRequestArray;
    NSTimer *_deleteTimer;
    id <UserSummaryPhotoWallDeleteDelegate> _delegate;
}

@property(nonatomic) __weak id <UserSummaryPhotoWallDeleteDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)deletePhotoWall:(id)arg1 andFinished:(_Bool)arg2;
- (void)deleteNext;
- (void)deleteTimeout;
- (void)deletePhotoWallList:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

