//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCartDataComponent.h"

@class NSArray, NSString;

@interface TBCartItemInfoLabelComponent : TBCartDataComponent
{
    int _type;
    NSString *_title;
    NSString *_value;
    NSString *_titleColor;
    NSString *_valueColor;
    NSString *_iconUrl;
    NSArray *_tagArray;
}

@property(retain, nonatomic) NSArray *tagArray; // @synthesize tagArray=_tagArray;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *valueColor; // @synthesize valueColor=_valueColor;
@property(retain, nonatomic) NSString *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

