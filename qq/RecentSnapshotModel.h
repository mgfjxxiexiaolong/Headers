//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIImage;

@interface RecentSnapshotModel : NSObject
{
    UIImage *_topImage;
    UIImage *_bottomImage;
    UIImage *_topCoverImage;
    UIImage *_bottomCoverImage;
    UIImage *_centerCoverImage;
}

@property(retain, nonatomic) UIImage *centerCoverImage; // @synthesize centerCoverImage=_centerCoverImage;
@property(retain, nonatomic) UIImage *bottomCoverImage; // @synthesize bottomCoverImage=_bottomCoverImage;
@property(retain, nonatomic) UIImage *topCoverImage; // @synthesize topCoverImage=_topCoverImage;
@property(retain, nonatomic) UIImage *bottomImage; // @synthesize bottomImage=_bottomImage;
@property(retain, nonatomic) UIImage *topImage; // @synthesize topImage=_topImage;
- (void)dealloc;

@end
