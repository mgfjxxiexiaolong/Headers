//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSNumber, NSString;
@protocol Optional;

@interface WDFilterWorldStructModel : WDBaseModel
{
    NSString<Optional> *_id;
    NSString<Optional> *_name;
    NSNumber<Optional> *_is_selected;
}

@property(retain, nonatomic) NSNumber<Optional> *is_selected; // @synthesize is_selected=_is_selected;
@property(retain, nonatomic) NSString<Optional> *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString<Optional> *id; // @synthesize id=_id;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

