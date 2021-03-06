//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface KSTencentOAuthManager : NSObject
{
    NSString *_redirectURL;
    NSString *_authURL;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _cancel;
}

+ (id)topMostViewController;
+ (void)authWithCompletion:(CDUnknownBlockType)arg1 cancel:(CDUnknownBlockType)arg2;
+ (_Bool)enabled;
+ (void)setAuthURL:(id)arg1;
+ (id)_sharedManager;
@property(copy, nonatomic) CDUnknownBlockType cancel; // @synthesize cancel=_cancel;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSString *authURL; // @synthesize authURL=_authURL;
@property(copy, nonatomic) NSString *redirectURL; // @synthesize redirectURL=_redirectURL;
- (void).cxx_destruct;

@end

