//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MCChatCellObjectTransform : NSObject
{
}

+ (double)heightForCellObject:(id)arg1;
+ (long long)chatShareTypeWithCurrentMessage:(id)arg1;
+ (_Bool)shouldShowReSendStatusWithCurrentMessage:(id)arg1;
+ (_Bool)shouldShowSendStatusWithCurrentMessage:(id)arg1;
+ (_Bool)shouldShowTagWithCurrentMessage:(id)arg1;
+ (id)identifierForStyle:(long long)arg1;
+ (long long)subStyleWithMessage:(id)arg1;
+ (long long)styleWithMessage:(id)arg1 config:(id)arg2;
+ (id)nameWithMessage:(id)arg1;
+ (_Bool)shouldShowSenderNameWithPreMessage:(id)arg1 currentMessage:(id)arg2 config:(id)arg3;
+ (unsigned long long)identifyFromMessage:(id)arg1;
+ (_Bool)shouldShowIdentityWithCurrentMessage:(id)arg1 config:(id)arg2 isSender:(_Bool)arg3;
+ (id)dateFormatString:(id)arg1;
+ (_Bool)shouldShowTimeWithPreMessage:(id)arg1 currentMessage:(id)arg2;
+ (struct CGSize)bubbleSizeForCellObject:(id)arg1;
+ (id)cellObjectWithPreMessage:(id)arg1 currentMessage:(id)arg2 config:(id)arg3;
+ (id)cellObjectsWithMessages:(id)arg1 config:(id)arg2;

@end

