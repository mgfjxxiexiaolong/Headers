//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSNumber, NSString;

@interface TTPersonalHomeUserInfoDataItemResponseModel : TTResponseModel
{
    NSString *_url;
    NSString *_show_name;
    NSString *_type;
    NSNumber *_is_default;
    NSString *_native_index_url;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(copy, nonatomic) NSString *native_index_url; // @synthesize native_index_url=_native_index_url;
@property(retain, nonatomic) NSNumber *is_default; // @synthesize is_default=_is_default;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *show_name; // @synthesize show_name=_show_name;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

