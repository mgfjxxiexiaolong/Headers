//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface RelationListModel : QQModel
{
    int _type;
    long long _ID;
    NSString *_name;
    NSString *_remark;
}

@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long ID; // @synthesize ID=_ID;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

