//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@interface CPTTheme : NSObject <NSCoding>
{
    Class graphClass;
}

+ (id)name;
+ (id)themeNamed:(id)arg1;
@property(retain, nonatomic) Class graphClass; // @synthesize graphClass;
- (void)applyThemeToGraph:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)applyThemeToAxisSet:(id)arg1;
- (void)applyThemeToPlotArea:(id)arg1;
- (void)applyThemeToBackground:(id)arg1;
- (id)newGraph;

@end

