//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TlibDy/LKLayoutItem.h>

@class QZDrawItemImage;

@interface QZPhotoItem : LKLayoutItem
{
    QZDrawItemImage *_imageItem;
}

@property(retain, nonatomic) QZDrawItemImage *imageItem; // @synthesize imageItem=_imageItem;
- (void).cxx_destruct;
- (void)setReuseableResource:(id)arg1;
- (id)reusableResource;
- (id)userInteractParameter;
- (void)configPhotoView:(id)arg1 drawItem:(id)arg2 feedModel:(id)arg3;
- (id)createDrawItemImageWithFeedModel:(id)arg1;
- (void)updateView:(id)arg1 context:(id)arg2;
- (void)configView:(id)arg1 context:(id)arg2;
- (id)createView;

@end

