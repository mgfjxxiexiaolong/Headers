//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBXSearchFilterOption : TBJSONModel
{
    NSString *_paramKey;
    NSString *_paramValue;
    NSString *_showText;
    NSString *_paramType;
    NSString *_selected;
}

+ (_Bool)strictMode;
@property(retain, nonatomic) NSString *selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSString *paramType; // @synthesize paramType=_paramType;
@property(retain, nonatomic) NSString *showText; // @synthesize showText=_showText;
@property(retain, nonatomic) NSString *paramValue; // @synthesize paramValue=_paramValue;
@property(retain, nonatomic) NSString *paramKey; // @synthesize paramKey=_paramKey;
- (void).cxx_destruct;

@end
