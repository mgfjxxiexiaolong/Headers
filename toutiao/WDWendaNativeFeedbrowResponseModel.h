//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSArray, NSNumber, NSString, WDTipsStructModel;
@protocol Optional, WDWendaCellDataStructModel><Optional;

@interface WDWendaNativeFeedbrowResponseModel : TTResponseModel
{
    NSNumber<Optional> *_login_status;
    NSNumber<Optional> *_total_number;
    NSNumber<Optional> *_has_more;
    NSString<Optional> *_message;
    NSNumber<Optional> *_has_more_to_refresh;
    NSString<Optional> *_extra;
    NSArray<WDWendaCellDataStructModel><Optional> *_data;
    WDTipsStructModel<Optional> *_tips;
    NSString<Optional> *_api_param;
    NSNumber<Optional> *_add_first_page;
}

@property(retain, nonatomic) NSNumber<Optional> *add_first_page; // @synthesize add_first_page=_add_first_page;
@property(retain, nonatomic) NSString<Optional> *api_param; // @synthesize api_param=_api_param;
@property(retain, nonatomic) WDTipsStructModel<Optional> *tips; // @synthesize tips=_tips;
@property(copy, nonatomic) NSArray<WDWendaCellDataStructModel><Optional> *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString<Optional> *extra; // @synthesize extra=_extra;
@property(retain, nonatomic) NSNumber<Optional> *has_more_to_refresh; // @synthesize has_more_to_refresh=_has_more_to_refresh;
@property(retain, nonatomic) NSString<Optional> *message; // @synthesize message=_message;
@property(retain, nonatomic) NSNumber<Optional> *has_more; // @synthesize has_more=_has_more;
@property(retain, nonatomic) NSNumber<Optional> *total_number; // @synthesize total_number=_total_number;
@property(retain, nonatomic) NSNumber<Optional> *login_status; // @synthesize login_status=_login_status;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

