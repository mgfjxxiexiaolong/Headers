//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AWELanguageManager : NSObject
{
}

+ (id)sharedInstance;
@property(readonly, nonatomic) long long staticVersionNumber;
- (_Bool)isCurrentLanguage:(id)arg1;
- (id)supportedLanguages;
- (id)currentLanguageModel;
- (id)currentLanguage;
- (void)updateExpectLanguage:(id)arg1;
- (void)initializeLanguage;

@end

