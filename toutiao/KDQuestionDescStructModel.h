//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSArray, NSNumber, NSString;
@protocol KDImageUrlStructModel><Optional, Optional;

@interface KDQuestionDescStructModel : WDBaseModel
{
    NSString<Optional> *_text;
    NSArray<KDImageUrlStructModel><Optional> *_large_image_list;
    NSArray<KDImageUrlStructModel><Optional> *_thumb_image_list;
    NSNumber<Optional> *_question_abstract_fold;
}

@property(retain, nonatomic) NSNumber<Optional> *question_abstract_fold; // @synthesize question_abstract_fold=_question_abstract_fold;
@property(copy, nonatomic) NSArray<KDImageUrlStructModel><Optional> *thumb_image_list; // @synthesize thumb_image_list=_thumb_image_list;
@property(copy, nonatomic) NSArray<KDImageUrlStructModel><Optional> *large_image_list; // @synthesize large_image_list=_large_image_list;
@property(retain, nonatomic) NSString<Optional> *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
