//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBLiveBubbleItemModel : TBJSONModel
{
    _Bool _duplicate;
    _Bool _favored;
    _Bool _hasDiscount;
    unsigned long long _goodsIndex;
    unsigned long long _groupNum;
    NSString *_itemH5TaokeUrl;
    NSString *_itemPrice;
    NSString *_itemName;
    NSString *_itemPic;
    NSString *_itemUrl;
}

@property(copy, nonatomic) NSString *itemUrl; // @synthesize itemUrl=_itemUrl;
@property(copy, nonatomic) NSString *itemPic; // @synthesize itemPic=_itemPic;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(copy, nonatomic) NSString *itemPrice; // @synthesize itemPrice=_itemPrice;
@property(copy, nonatomic) NSString *itemH5TaokeUrl; // @synthesize itemH5TaokeUrl=_itemH5TaokeUrl;
@property(nonatomic) _Bool hasDiscount; // @synthesize hasDiscount=_hasDiscount;
@property(nonatomic) unsigned long long groupNum; // @synthesize groupNum=_groupNum;
@property(nonatomic) unsigned long long goodsIndex; // @synthesize goodsIndex=_goodsIndex;
@property(nonatomic) _Bool favored; // @synthesize favored=_favored;
@property(nonatomic) _Bool duplicate; // @synthesize duplicate=_duplicate;
- (void).cxx_destruct;

@end
