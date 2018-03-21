//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock, QQWeakContainer;

@interface QQLockDictionary : NSObject
{
    NSRecursiveLock *_lock;
    NSMutableDictionary *_dict;
    QQWeakContainer *_validChecker;
    _Bool _bCheckWild;
}

+ (id)dictionaryWithMutableDictionary:(id)arg1;
- (id)mutableDicSafeForKey:(id)arg1;
- (id)mutableArraySafeForKey:(id)arg1;
- (double)doubleSafeForKey:(id)arg1;
- (id)arraySafeForKey:(id)arg1;
- (id)dicSafeForKey:(id)arg1;
- (id)objectSafeForKey:(id)arg1;
- (id)digitalTypeCheckForKey:(id)arg1;
- (id)numberSafeForKey:(id)arg1;
- (id)dataSafeForKey:(id)arg1;
- (id)stringSafeForKey:(id)arg1;
- (long long)integerSafeForKey:(id)arg1 defaultV:(long long)arg2;
- (long long)integerSafeForKey:(id)arg1;
- (unsigned long long)unsignedlonglongSafeForKey:(id)arg1;
- (unsigned int)unsignedintSafeForKey:(id)arg1;
- (unsigned long long)longSafeForKey:(id)arg1;
- (float)floatSafeForKey:(id)arg1;
- (int)intSafeForKey:(id)arg1;
- (_Bool)boolSafeForKey:(id)arg1;
- (id)objectForKey:(id)arg1 type:(Class)arg2;
- (int)count;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeAllObjects;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)allKeysForObject:(id)arg1;
- (id)allValues;
- (id)allKeys;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (int)intForKey:(id)arg1;
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;
- (id)fetchDictionary;
- (void)setDictionary:(id)arg1;
- (void)dealloc;
- (id)initWithMutableDictionary:(id)arg1;
- (id)initWithMutableDictionary:(id)arg1 withValidChecker:(id)arg2;
- (id)initWithMutableDictionary:(id)arg1 withValidChecker:(id)arg2 withCheckWild:(_Bool)arg3;
- (id)init;

@end
