//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSArray, NSString;
@protocol Optional, WDMagicUrlStructModel><Optional;

@interface WDUploadImgDataStructModel : WDBaseModel
{
    NSArray<WDMagicUrlStructModel><Optional> *_url_list;
    NSString<Optional> *_web_uri;
}

@property(retain, nonatomic) NSString<Optional> *web_uri; // @synthesize web_uri=_web_uri;
@property(copy, nonatomic) NSArray<WDMagicUrlStructModel><Optional> *url_list; // @synthesize url_list=_url_list;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
