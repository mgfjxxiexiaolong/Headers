//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSNumber, NSString;
@protocol Optional;

@interface TTAdDetailCommentModel : JSONModel
{
    NSNumber *_ad_id;
    NSString<Optional> *_log_extra;
    NSString<Optional> *_web_url;
    NSString *_web_title;
    NSArray *_show_track_urls;
    NSArray *_click_track_urls;
    NSString<Optional> *_title;
    NSArray *_image_list;
    NSString<Optional> *_label;
    NSString<Optional> *_type;
    long long _display_type;
    long long _predownload;
    long long _display_after;
    long long _expire_seconds;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(nonatomic) long long expire_seconds; // @synthesize expire_seconds=_expire_seconds;
@property(nonatomic) long long display_after; // @synthesize display_after=_display_after;
@property(nonatomic) long long predownload; // @synthesize predownload=_predownload;
@property(nonatomic) long long display_type; // @synthesize display_type=_display_type;
@property(copy, nonatomic) NSString<Optional> *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString<Optional> *label; // @synthesize label=_label;
@property(retain, nonatomic) NSArray *image_list; // @synthesize image_list=_image_list;
@property(copy, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *click_track_urls; // @synthesize click_track_urls=_click_track_urls;
@property(retain, nonatomic) NSArray *show_track_urls; // @synthesize show_track_urls=_show_track_urls;
@property(copy, nonatomic) NSString *web_title; // @synthesize web_title=_web_title;
@property(copy, nonatomic) NSString<Optional> *web_url; // @synthesize web_url=_web_url;
@property(copy, nonatomic) NSString<Optional> *log_extra; // @synthesize log_extra=_log_extra;
@property(copy, nonatomic) NSNumber *ad_id; // @synthesize ad_id=_ad_id;
- (void).cxx_destruct;

@end

