//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LOTAnimatableNumberValue;

@interface LOTShapeTrimPath : NSObject
{
    LOTAnimatableNumberValue *_start;
    LOTAnimatableNumberValue *_end;
    LOTAnimatableNumberValue *_offset;
}

@property(readonly, nonatomic) LOTAnimatableNumberValue *offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) LOTAnimatableNumberValue *end; // @synthesize end=_end;
@property(readonly, nonatomic) LOTAnimatableNumberValue *start; // @synthesize start=_start;
- (void).cxx_destruct;
- (void)_mapFromJSON:(id)arg1 frameRate:(id)arg2;
- (id)initWithJSON:(id)arg1 frameRate:(id)arg2;

@end
