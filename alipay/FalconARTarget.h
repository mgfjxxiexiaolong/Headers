//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol FalconARKitTargetDelegate;

@interface FalconARTarget : NSObject
{
    NSString *_bizType;
    NSString *_paramJson;
    NSString *_path;
    id <FalconARKitTargetDelegate> _delegate;
}

@property(nonatomic) __weak id <FalconARKitTargetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *paramJson; // @synthesize paramJson=_paramJson;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
- (void).cxx_destruct;

@end
