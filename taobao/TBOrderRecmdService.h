//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBRecmdEngine;
@protocol TBOrderRecmdServiceDelegate;

@interface TBOrderRecmdService : NSObject
{
    TBRecmdEngine *_recmdEngine;
    id <TBOrderRecmdServiceDelegate> _delegate;
}

+ (_Bool)recmdDegrade;
@property(nonatomic) __weak id <TBOrderRecmdServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TBRecmdEngine *recmdEngine; // @synthesize recmdEngine=_recmdEngine;
- (void).cxx_destruct;
- (id)recmdCollectionView;
- (void)queryRecmdWithParam:(id)arg1;
- (void)registRecmdEngine;
- (id)initWithSoureChannel:(id)arg1 headerViewHeight:(double)arg2;
- (id)init;

@end

