//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CNLogisticsDetailCellModel.h"

@class NSString, TBRSubscriber;

@interface CNLogisticsDetailTraceModel : CNLogisticsDetailCellModel
{
    _Bool _bNoTop;
    _Bool _bNoBottom;
    NSString *_time;
    NSString *_message;
    NSString *_statusDesc;
    NSString *_statusIcon;
    NSString *_jkIcon;
    NSString *_jKBasicDesc;
    NSString *_jKStatusDesc;
    NSString *_jKIcon2;
    NSString *_jKStationDesc;
    TBRSubscriber *_jkSubscriber;
}

@property(retain, nonatomic) TBRSubscriber *jkSubscriber; // @synthesize jkSubscriber=_jkSubscriber;
@property(nonatomic) _Bool bNoBottom; // @synthesize bNoBottom=_bNoBottom;
@property(nonatomic) _Bool bNoTop; // @synthesize bNoTop=_bNoTop;
@property(retain, nonatomic) NSString *jKStationDesc; // @synthesize jKStationDesc=_jKStationDesc;
@property(retain, nonatomic) NSString *jKIcon2; // @synthesize jKIcon2=_jKIcon2;
@property(retain, nonatomic) NSString *jKStatusDesc; // @synthesize jKStatusDesc=_jKStatusDesc;
@property(retain, nonatomic) NSString *jKBasicDesc; // @synthesize jKBasicDesc=_jKBasicDesc;
@property(retain, nonatomic) NSString *jkIcon; // @synthesize jkIcon=_jkIcon;
@property(retain, nonatomic) NSString *statusIcon; // @synthesize statusIcon=_statusIcon;
@property(retain, nonatomic) NSString *statusDesc; // @synthesize statusDesc=_statusDesc;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
- (void).cxx_destruct;
- (double)textHeight;
- (double)cellHeight;
- (Class)cellClass;

@end
