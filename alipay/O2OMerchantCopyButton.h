//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "O2ODynamicProtocol-Protocol.h"

@class NSString, UILongPressGestureRecognizer;

@interface O2OMerchantCopyButton : UIButton <O2ODynamicProtocol>
{
    NSString *_copyContent;
    UILongPressGestureRecognizer *_longPress;
}

- (void).cxx_destruct;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copyText;
- (_Bool)canBecomeFirstResponder;
- (void)showAddressCopyMenu:(id)arg1;
- (void)setConfig:(id)arg1 children:(id)arg2 item:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
