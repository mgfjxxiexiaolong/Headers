//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ArkAppMsgConfig, NSDictionary, NSString;

@interface ArkAppMsgDesc : NSObject
{
    NSString *_app;
    NSString *_view;
    NSString *_desc;
    NSString *_prompt;
    NSString *_ver;
    NSDictionary *_meta;
    ArkAppMsgConfig *_config;
    NSString *_compatibleText;
}

@property(retain, nonatomic) NSString *compatibleText; // @synthesize compatibleText=_compatibleText;
@property(retain, nonatomic) ArkAppMsgConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) NSDictionary *meta; // @synthesize meta=_meta;
@property(retain, nonatomic) NSString *ver; // @synthesize ver=_ver;
@property(retain, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *view; // @synthesize view=_view;
@property(retain, nonatomic) NSString *app; // @synthesize app=_app;
- (void).cxx_destruct;

@end

