//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage, _KSVideoFrameLoadingOperation;

@interface _KSVideoFrameLoadingStatus : NSObject
{
    unsigned long long _state;
    _KSVideoFrameLoadingOperation *_pendingOperation;
    unsigned long long _index;
    UIImage *_frameImage;
}

@property(retain, nonatomic) UIImage *frameImage; // @synthesize frameImage=_frameImage;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) _KSVideoFrameLoadingOperation *pendingOperation; // @synthesize pendingOperation=_pendingOperation;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)reset:(_Bool)arg1;
- (void)operationDidFinishLoadingWithResultFrameImage:(id)arg1;

@end
