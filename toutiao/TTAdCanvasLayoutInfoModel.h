//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSString;

@interface TTAdCanvasLayoutInfoModel : JSONModel
{
    _Bool _has_create_data;
    NSArray *_first_page_resource;
    NSArray *_preload_resource;
    NSString *_layout_data;
    NSString *_root_color;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(nonatomic) _Bool has_create_data; // @synthesize has_create_data=_has_create_data;
@property(copy, nonatomic) NSString *root_color; // @synthesize root_color=_root_color;
@property(copy, nonatomic) NSString *layout_data; // @synthesize layout_data=_layout_data;
@property(copy, nonatomic) NSArray *preload_resource; // @synthesize preload_resource=_preload_resource;
@property(copy, nonatomic) NSArray *first_page_resource; // @synthesize first_page_resource=_first_page_resource;
- (void).cxx_destruct;

@end
