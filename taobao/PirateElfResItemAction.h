//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface PirateElfResItemAction : TBJSONModel
{
    NSString *_desc;
    NSString *_clickPageUrl;
    NSString *_type;
    NSString *_windowStyle;
}

@property(copy, nonatomic) NSString *windowStyle; // @synthesize windowStyle=_windowStyle;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *clickPageUrl; // @synthesize clickPageUrl=_clickPageUrl;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (void).cxx_destruct;

@end
