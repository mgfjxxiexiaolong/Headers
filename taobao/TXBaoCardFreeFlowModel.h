//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

#import "NSCoding-Protocol.h"

@class NSString, TXBaoCardFreeFlowData;

@interface TXBaoCardFreeFlowModel : TBJSONModel <NSCoding>
{
    NSString *_code;
    NSString *_desc;
    TXBaoCardFreeFlowData *_model;
}

+ (id)deepCopy:(id)arg1;
@property(retain, nonatomic) TXBaoCardFreeFlowData *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
