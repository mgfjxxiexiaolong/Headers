//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QzoneModel.h>

@class NSString, UIColor;

@interface QzoneCommentBubble : QzoneModel
{
    long long _itemId;
    UIColor *_textColor;
    NSString *_strTextColor;
    NSString *_strIosBgUrl;
}

+ (id)transTextColor:(id)arg1;
@property(retain, nonatomic) NSString *strIosBgUrl; // @synthesize strIosBgUrl=_strIosBgUrl;
@property(retain, nonatomic) NSString *strTextColor; // @synthesize strTextColor=_strTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) long long itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (void)buildWithJceResponse:(id)arg1;

@end
