//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXMLParserDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSXMLParser;
@protocol KSCountryCodeSelectDataSourceDelegate;

@interface KSCountryCodeSelectDataSource : NSObject <NSXMLParserDelegate, UITableViewDataSource, UITableViewDelegate>
{
    NSString *_keywords;
    id <KSCountryCodeSelectDataSourceDelegate> _delegate;
    NSString *_currentContent;
    NSMutableArray *_contents;
    CDUnknownBlockType _onFinishBlock;
    CDUnknownBlockType _onError;
    NSXMLParser *_passer;
    NSMutableArray *_datas;
    NSMutableDictionary *_phoneCodeToCountryCodeMap;
    NSMutableDictionary *_countryCodeToCountryName;
}

@property(retain, nonatomic) NSMutableDictionary *countryCodeToCountryName; // @synthesize countryCodeToCountryName=_countryCodeToCountryName;
@property(retain, nonatomic) NSMutableDictionary *phoneCodeToCountryCodeMap; // @synthesize phoneCodeToCountryCodeMap=_phoneCodeToCountryCodeMap;
@property(retain, nonatomic) NSMutableArray *datas; // @synthesize datas=_datas;
@property(retain, nonatomic) NSXMLParser *passer; // @synthesize passer=_passer;
@property(copy, nonatomic) CDUnknownBlockType onError; // @synthesize onError=_onError;
@property(copy, nonatomic) CDUnknownBlockType onFinishBlock; // @synthesize onFinishBlock=_onFinishBlock;
@property(retain, nonatomic) NSMutableArray *contents; // @synthesize contents=_contents;
@property(retain, nonatomic) NSString *currentContent; // @synthesize currentContent=_currentContent;
@property(nonatomic) __weak id <KSCountryCodeSelectDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
- (void).cxx_destruct;
- (id)countryCodesWithPhoneCode:(id)arg1;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)parseOnFinish:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2;
- (id)countryInfoWithFullPhoneNumber:(id)arg1;
- (id)countryInfoWithCountryCode:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

