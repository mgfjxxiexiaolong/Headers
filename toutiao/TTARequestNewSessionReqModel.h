//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTABaseReqModel.h"

@class NSString;

@interface TTARequestNewSessionReqModel : TTABaseReqModel
{
    NSString *_from_session_key;
    NSString *_from_install_id;
}

@property(copy, nonatomic) NSString *from_install_id; // @synthesize from_install_id=_from_install_id;
@property(copy, nonatomic) NSString *from_session_key; // @synthesize from_session_key=_from_session_key;
- (void).cxx_destruct;
- (id)_requestParams;
- (id)init;

@end
