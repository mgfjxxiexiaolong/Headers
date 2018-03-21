//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDAOProtocol-Protocol.h"

@class APDAOResult, NSArray, NSString, UploadedAddress;

@protocol UploadAddressDataProtocol <APDAOProtocol>
- (APDAOResult *)deleteAddressByIndexes:(NSArray *)arg1;
- (APDAOResult *)clearAllAddresses;
- (APDAOResult *)deleteAddressByPhoneNumber:(NSString *)arg1 phoneBookName:(NSString *)arg2;
- (NSArray *)queryAllUploadedAddresses;
- (NSArray *)queryAddressByPhoneNumber:(NSString *)arg1 phoneBookName:(NSString *)arg2;
- (NSArray *)queryAddressByPhoneNumber:(NSString *)arg1;
- (APDAOResult *)insertUploadedAddressList:(NSArray *)arg1;
- (APDAOResult *)insertUploadedAddress:(UploadedAddress *)arg1;
@end
