//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponentModel.h"

@class NSArray, NSString;
@protocol AliDetailAvatarItem;

@interface AliDetailAvatarGroupsComponentModel : AliDetailComponentModel
{
    NSString *_title;
    NSArray<AliDetailAvatarItem> *_avatars;
    NSString *_defaultPortrait;
    long long _groupSize;
}

@property(nonatomic) long long groupSize; // @synthesize groupSize=_groupSize;
@property(retain, nonatomic) NSString *defaultPortrait; // @synthesize defaultPortrait=_defaultPortrait;
@property(retain, nonatomic) NSArray<AliDetailAvatarItem> *avatars; // @synthesize avatars=_avatars;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

