//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AntGroup, NSString;

@interface AntItem : NSObject
{
    NSString *_indexId;
    NSString *_component;
    NSString *_module;
    NSString *_bucket;
    AntGroup *_group;
}

+ (id)createKeyWithComponent:(id)arg1 module:(id)arg2;
@property(nonatomic) __weak AntGroup *group; // @synthesize group=_group;
@property(copy, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
@property(copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(copy, nonatomic) NSString *component; // @synthesize component=_component;
@property(copy, nonatomic) NSString *indexId; // @synthesize indexId=_indexId;
- (void).cxx_destruct;
- (id)copy;
- (id)type;
- (id)initWithDictionary:(id)arg1;

@end
