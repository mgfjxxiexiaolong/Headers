//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OSEARCHToString.h"

@class NSString, O2OSEARCHFeatureImage, O2OSEARCHFeatureText;

@interface O2OSEARCHFeatureInfo : O2OSEARCHToString
{
    NSString *_type;
    O2OSEARCHFeatureText *_text;
    O2OSEARCHFeatureImage *_image;
}

@property(retain, nonatomic) O2OSEARCHFeatureImage *image; // @synthesize image=_image;
@property(retain, nonatomic) O2OSEARCHFeatureText *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

