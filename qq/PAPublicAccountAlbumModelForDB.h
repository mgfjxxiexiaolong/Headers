//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/PAPublicAccountAlbumModel.h>

@class NSMutableArray, PAPhotoFirstItemForDB;

@interface PAPublicAccountAlbumModelForDB : PAPublicAccountAlbumModel
{
    NSMutableArray *_picArrays;
    PAPhotoFirstItemForDB *_firstItem;
}

@property(retain, nonatomic) PAPhotoFirstItemForDB *firstItem; // @synthesize firstItem=_firstItem;
@property(retain, nonatomic) NSMutableArray *picArrays; // @synthesize picArrays=_picArrays;
- (void).cxx_destruct;
- (_Bool)isValidModel;
- (id)initWith:(id)arg1;

@end
