//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRegularExpression, NSString;

@interface _priv_NBSFilterItem : NSObject
{
    NSString *FilterStr;
    int Codes[20];
    int CodesCount;
    NSRegularExpression *reg;
}

+ (id)filterWithStr:(id)arg1 StatuCodes:(id)arg2 Mode:(int)arg3;
- (void).cxx_destruct;
- (_Bool)isMatch:(id)arg1 code:(int)arg2;

@end

