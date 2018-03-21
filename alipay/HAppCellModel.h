//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ACApp, NSMutableArray, NSString, UIImage;

@interface HAppCellModel : NSObject
{
    int _type;
    ACApp *_appItem;
    NSString *_bottomDesc;
    NSMutableArray *_sectionCodes;
}

+ (id)appModelListFromAcAppList:(id)arg1;
+ (id)modelFormACApp:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *sectionCodes; // @synthesize sectionCodes=_sectionCodes;
@property(retain, nonatomic) NSString *bottomDesc; // @synthesize bottomDesc=_bottomDesc;
@property(retain, nonatomic) ACApp *appItem; // @synthesize appItem=_appItem;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)containSectionCode:(id)arg1;
- (void)addSectionCode:(id)arg1;
- (void)removeSectionCode:(id)arg1;
@property(readonly, nonatomic) NSString *schememUrl;
@property(readonly, nonatomic) UIImage *defaultIcon;
@property(readonly, nonatomic) NSString *iconUrl;
@property(readonly, nonatomic) NSString *desc;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *appId;
- (_Bool)isEqual:(id)arg1;

@end
