//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;
@protocol AlidetailComboItemsForAppModel;

@interface AliDetailCurrentComboModel : TBJSONModel
{
    NSString *_name;
    NSArray<AlidetailComboItemsForAppModel> *_itemsForApp;
}

@property(retain, nonatomic) NSArray<AlidetailComboItemsForAppModel> *itemsForApp; // @synthesize itemsForApp=_itemsForApp;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

