//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBSCMyPathItemDO : TBJSONModel
{
    NSString *_userId;
    NSString *_id;
    NSString *_catId;
    NSString *_cat1;
    NSString *_sellerId;
    long long _src;
    NSString *_time;
    NSString *_title;
    NSString *_price;
    NSString *_pic;
    NSString *_umpPrice;
    long long _monthSale;
    long long _width;
    long long _height;
}

@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;
@property(nonatomic) long long monthSale; // @synthesize monthSale=_monthSale;
@property(retain, nonatomic) NSString *umpPrice; // @synthesize umpPrice=_umpPrice;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(nonatomic) long long src; // @synthesize src=_src;
@property(retain, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
@property(retain, nonatomic) NSString *cat1; // @synthesize cat1=_cat1;
@property(retain, nonatomic) NSString *catId; // @synthesize catId=_catId;
@property(retain, nonatomic) NSString *id; // @synthesize id=_id;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end
