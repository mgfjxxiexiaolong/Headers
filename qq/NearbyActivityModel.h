//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface NearbyActivityModel : QQModel
{
    NSString *_actId;
    NSString *_actName;
    NSString *_actCover;
    NSString *_actionUrl;
    int _xo;
}

- (void)dealloc;

// Remaining properties
@property(copy, nonatomic) NSString *actCover; // @dynamic actCover;
@property(copy, nonatomic) NSString *actId; // @dynamic actId;
@property(retain, nonatomic) NSString *actName; // @dynamic actName;
@property(copy, nonatomic) NSString *actionUrl; // @dynamic actionUrl;

@end

