//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LYWServiceAction-Protocol.h"

@class NSString;

@interface KSSelectFilterServiceAction : NSObject <LYWServiceAction>
{
    _Bool _isLast;
    _Bool _isFirst;
    _Bool _isSwipped;
    unsigned long long _selectedIndex;
}

@property(nonatomic) _Bool isSwipped; // @synthesize isSwipped=_isSwipped;
@property(nonatomic) _Bool isFirst; // @synthesize isFirst=_isFirst;
@property(nonatomic) _Bool isLast; // @synthesize isLast=_isLast;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

