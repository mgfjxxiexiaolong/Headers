//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class HTTPServer, NSString;
@protocol OS_dispatch_queue;

@interface HTTPConfig : NSObject
{
    HTTPServer *server;
    NSString *documentRoot;
    NSObject<OS_dispatch_queue> *queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue;
@property(readonly, nonatomic) NSString *documentRoot; // @synthesize documentRoot;
@property(readonly, nonatomic) HTTPServer *server; // @synthesize server;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithServer:(id)arg1 documentRoot:(id)arg2 queue:(id)arg3;
- (id)initWithServer:(id)arg1 documentRoot:(id)arg2;

@end

