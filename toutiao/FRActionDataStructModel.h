//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber;
@protocol Optional;

@interface FRActionDataStructModel : JSONModel
{
    NSNumber<Optional> *_forward_count;
    NSNumber<Optional> *_comment_count;
    NSNumber<Optional> *_read_count;
    NSNumber<Optional> *_digg_count;
    NSNumber<Optional> *_bury_count;
    NSNumber<Optional> *_user_digg;
    NSNumber<Optional> *_user_repin;
    NSNumber<Optional> *_user_bury;
    NSNumber<Optional> *_play_count;
}

@property(retain, nonatomic) NSNumber<Optional> *play_count; // @synthesize play_count=_play_count;
@property(retain, nonatomic) NSNumber<Optional> *user_bury; // @synthesize user_bury=_user_bury;
@property(retain, nonatomic) NSNumber<Optional> *user_repin; // @synthesize user_repin=_user_repin;
@property(retain, nonatomic) NSNumber<Optional> *user_digg; // @synthesize user_digg=_user_digg;
@property(retain, nonatomic) NSNumber<Optional> *bury_count; // @synthesize bury_count=_bury_count;
@property(retain, nonatomic) NSNumber<Optional> *digg_count; // @synthesize digg_count=_digg_count;
@property(retain, nonatomic) NSNumber<Optional> *read_count; // @synthesize read_count=_read_count;
@property(retain, nonatomic) NSNumber<Optional> *comment_count; // @synthesize comment_count=_comment_count;
@property(retain, nonatomic) NSNumber<Optional> *forward_count; // @synthesize forward_count=_forward_count;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
