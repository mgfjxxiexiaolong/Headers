//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class AliDetailProtocolComponentRuleModel, NSArray, NSString;
@protocol AliDetailActionModel, AliDetailComponentLayoutModel;

@interface AliDetailComponentLayoutModel : TBJSONModel
{
    NSString *_ID;
    NSString *_key;
    NSString *_ruleId;
    NSArray<AliDetailComponentLayoutModel> *_children;
    NSArray<AliDetailActionModel> *_actions;
    AliDetailProtocolComponentRuleModel *_rule;
}

@property(retain, nonatomic) AliDetailProtocolComponentRuleModel *rule; // @synthesize rule=_rule;
@property(retain, nonatomic) NSArray<AliDetailActionModel> *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSArray<AliDetailComponentLayoutModel> *children; // @synthesize children=_children;
@property(retain, nonatomic) NSString *ruleId; // @synthesize ruleId=_ruleId;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 ruleId:(id)arg2;
- (id)initWithID:(id)arg1 key:(id)arg2;

@end
