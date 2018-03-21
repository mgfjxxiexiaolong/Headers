//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSError, NSString;

@protocol MBKApiProtocol <NSObject>
- (NSString *)clientAuthor;
- (NSString *)author;
- (void)parseError:(NSError *)arg1;
- (void)parseResponse:(id)arg1;
- (unsigned long long)requestType;
- (unsigned long long)responseType;
- (int)httpMethod;
- (NSString *)relativePath;
- (NSString *)baseUrl;

@optional
- (void (^)(id <AFMultipartFormData>))formdata;
- (NSData *)bodyData;
- (NSDictionary *)defaultParamters;
@end
