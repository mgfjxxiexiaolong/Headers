//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AlisecBioAuthenticator : NSObject
{
}

+ (id)getPayAuthDataWithoutLog:(id)arg1;
+ (id)getPayAuthData:(id)arg1;
+ (id)getAuthInfo:(int)arg1 extInfo:(id)arg2;
+ (id)getAuthInfo;
+ (id)getDeviceID;
+ (void)preprocess:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)internalVerify:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)internalRegister:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)internalSilentRegister:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)internalUnRegister:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)process:(id)arg1;
+ (void)process:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end

