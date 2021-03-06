//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath;

@protocol MCBaseMessageListVoDelegate <NSObject>
- (void)scrollToRowAtIndexPath:(NSIndexPath *)arg1 scrollStyle:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)insertRowAtIndex:(long long)arg1 scrollStyle:(unsigned long long)arg2;
- (void)removeRowAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)deleteRowAtIndex:(long long)arg1;
- (void)reloadRowAtIndex:(long long)arg1;
- (void)reloadDataWithScrollStyle:(unsigned long long)arg1;
@end

