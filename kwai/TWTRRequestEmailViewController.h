//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString;

@interface TWTRRequestEmailViewController : UIViewController
{
    NSString *_appName;
    CDUnknownBlockType _completion;
    NSString *_username;
    NSString *_userID;
}

@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void).cxx_destruct;
- (void)affirmativeButtonTapped:(id)arg1;
- (void)negativeButtonTapped:(id)arg1;
- (void)addTargets;
- (void)loadView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserID:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

