//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface ShoppingDetailPictureInfo : NSObject
{
    NSArray *_picUrls;
    NSString *_jumpUrls;
}

@property(retain, nonatomic) NSString *jumpUrls; // @synthesize jumpUrls=_jumpUrls;
@property(retain, nonatomic) NSArray *picUrls; // @synthesize picUrls=_picUrls;
- (id)initWithDetailInfo:(id)arg1 jump:(id)arg2;
- (void)dealloc;

@end

