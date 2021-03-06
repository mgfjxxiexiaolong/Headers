//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURLRequest.h>

#import "H5RequestProtocol-Protocol.h"

@class NSInputStream, NSString;

@interface NSURLRequest (SPDYURLRequest) <H5RequestProtocol>
- (_Bool)resourcesSPDYProxySwitchOpen;
- (_Bool)h5SPDYProxySwitchOpen;
@property(readonly, nonatomic) _Bool SPDYProxy;
- (_Bool)containUnicode:(id)arg1;
- (id)requestURLQueryString;
- (id)allSPDYHeaderFields;
@property(readonly, nonatomic) NSString *SPDYBodyFile;
@property(readonly, nonatomic) NSInputStream *SPDYBodyStream;
@property(readonly, nonatomic) _Bool SPDYDiscretionary;
@property(readonly, nonatomic) unsigned long long SPDYPriority;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

