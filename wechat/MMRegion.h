//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMRegion : NSObject
{
    int type;
    int numbersOfChildren;
    NSString *code;
    NSString *name;
    NSString *parentCode;
}

@property(nonatomic) int numbersOfChildren; // @synthesize numbersOfChildren;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSString *parentCode; // @synthesize parentCode;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *code; // @synthesize code;
- (void).cxx_destruct;
- (id)description;

@end
