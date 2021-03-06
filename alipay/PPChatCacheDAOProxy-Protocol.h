//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDAOProtocol-Protocol.h"

@class APDAOResult, NSArray, NSData, NSNumber, NSString;

@protocol PPChatCacheDAOProxy <APDAOProtocol>
- (APDAOResult *)delete_message_like:(NSString *)arg1;
- (APDAOResult *)delete_message:(NSString *)arg1;
- (APDAOResult *)update_message:(NSNumber *)arg1 owner:(NSString *)arg2 time:(NSString *)arg3;
- (APDAOResult *)update_message:(NSData *)arg1 ID:(NSString *)arg2;
- (NSArray *)select_datas_from_message:(NSString *)arg1 time:(NSString *)arg2 limit:(NSNumber *)arg3;
- (NSArray *)select_datas_from_message:(NSString *)arg1;
- (NSNumber *)select_section_from_message:(NSString *)arg1 time:(NSString *)arg2;
- (NSNumber *)select_section_from_message:(NSString *)arg1;
- (APDAOResult *)insert_message:(NSString *)arg1 ownerID:(NSString *)arg2 time:(NSString *)arg3 section:(NSNumber *)arg4 data:(NSData *)arg5;
- (APDAOResult *)delete_entity_like:(NSString *)arg1;
- (APDAOResult *)insert_entity:(NSString *)arg1 type:(NSString *)arg2 data:(NSData *)arg3;
- (NSData *)select_data_from_entity:(NSString *)arg1 type:(NSString *)arg2;
- (APDAOResult *)create_tables;
@end

