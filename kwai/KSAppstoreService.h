//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSURLHandler-Protocol.h"
#import "SKStoreProductViewControllerDelegate-Protocol.h"

@class NSNumber, NSString, UIColor;
@protocol KSAppstoreServiceDelegate;

@interface KSAppstoreService : NSObject <SKStoreProductViewControllerDelegate, KSURLHandler>
{
    UIColor *_oldTintColor;
    id <KSAppstoreServiceDelegate> _delegate;
    NSNumber *_appId;
}

+ (id)sharedKSAppstoreService;
@property(retain, nonatomic) NSNumber *appId; // @synthesize appId=_appId;
@property(nonatomic) __weak id <KSAppstoreServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)arg1;
- (_Bool)handleOpenURL:(id)arg1 source:(id)arg2 annotation:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

