//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSXMLParserDelegate-Protocol.h"

@class NSString, RangerHtmlFile;

@interface RangerHTMLParser : NSObject <NSXMLParserDelegate>
{
    RangerHtmlFile *_resultFile;
}

+ (id)shortFilePathToFullPath:(id)arg1 basePath:(id)arg2;
- (void).cxx_destruct;
- (id)parserHTMLFromContentFile:(id)arg1 withAppBundleFilePath:(id)arg2 withABSupport:(_Bool)arg3;
- (id)parserHTMLFromString:(id)arg1;
- (id)parserHTMLFromData:(id)arg1;
- (id)templateFromNode:(id)arg1 baseFilePath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

