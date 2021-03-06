//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>
#import <QQMainProject/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface RPDisplayInfo : NSObject <NSCoding, NSCopying>
{
    int _type;
    NSString *_content;
    int _priority;
    NSString *_contentDescripte;
    NSDictionary *_contentDescriptorMaps;
    _Bool _isCornerTextPot;
    int _xo;
}

+ (id)defaultPointInfo;
+ (id)defaultNewInfo;
+ (id)defaultTextInfo;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isNumberType;
@property(readonly, nonatomic) _Bool isCornerTextPot; // @dynamic isCornerTextPot;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *contentDescripte; // @dynamic contentDescripte;
- (id)init;
- (void)decodeFromPBDecoder:(struct CPBMessageDecoder *)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(readonly, nonatomic) NSDictionary *contentDescriptorMaps; // @dynamic contentDescriptorMaps;
@property(nonatomic) int priority; // @dynamic priority;
@property(nonatomic) int type; // @dynamic type;

@end

