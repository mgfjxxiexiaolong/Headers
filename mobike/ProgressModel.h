//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Mobike_Model.h"

#import "NSCoding-Protocol.h"

@interface ProgressModel : Mobike_Model <NSCoding>
{
    _Bool _kIconDownProgressNormal;
    _Bool _kIconDownProgressSelect;
    _Bool _kIconDownProgressMultiNormal;
    _Bool _kIconDownProgressMultiSelect;
}

@property _Bool kIconDownProgressMultiSelect; // @synthesize kIconDownProgressMultiSelect=_kIconDownProgressMultiSelect;
@property _Bool kIconDownProgressMultiNormal; // @synthesize kIconDownProgressMultiNormal=_kIconDownProgressMultiNormal;
@property _Bool kIconDownProgressSelect; // @synthesize kIconDownProgressSelect=_kIconDownProgressSelect;
@property _Bool kIconDownProgressNormal; // @synthesize kIconDownProgressNormal=_kIconDownProgressNormal;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInfo:(id)arg1;

@end
