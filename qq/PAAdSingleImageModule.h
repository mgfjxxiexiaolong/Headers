//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/PAAdBaseModule.h>

@class NSString;

@interface PAAdSingleImageModule : PAAdBaseModule
{
    NSString *_imageUrl;
    unsigned long long _imageWidth;
    unsigned long long _imageHeight;
}

@property(nonatomic) unsigned long long imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) unsigned long long imageWidth; // @synthesize imageWidth=_imageWidth;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;
- (id)description;
- (id)initWithQuery:(id)arg1;

@end
