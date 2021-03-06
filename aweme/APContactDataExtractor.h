//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface APContactDataExtractor : NSObject
{
    void *_recordRef;
}

@property(nonatomic) void *recordRef; // @synthesize recordRef=_recordRef;
- (id)stringProperty:(int)arg1 fromRecordRef:(void *)arg2;
- (id)mapMultiValueOfProperty:(int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)localizedLabelFromMultiValue:(void *)arg1 index:(long long)arg2;
- (id)originalLabelFromMultiValue:(void *)arg1 index:(long long)arg2;
- (id)compositeName;
- (id)dateProperty:(int)arg1;
- (id)arrayProperty:(int)arg1;
- (id)stringProperty:(int)arg1;
- (id)recordDate;
- (id)dates;
- (id)source;
- (id)linkedRecordIDs;
- (id)relatedPersons;
- (id)socialProfiles;
- (id)addressesWithLabels:(_Bool)arg1;
- (id)emailsWithLabels:(_Bool)arg1;
- (id)phonesWithLabels:(_Bool)arg1;
- (id)job;
- (id)name;

@end

