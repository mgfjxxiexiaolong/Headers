//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MBKViewModelProtocol-Protocol.h"

@class NSString;

@interface MBKCardHelpCellModel : NSObject <MBKViewModelProtocol>
{
    NSString *_helpLabel1String;
    NSString *_helpLabel2String;
    NSString *_helpLabel3String;
    NSString *_helpLabel4String;
    NSString *_helpLabel5String;
}

@property(retain, nonatomic) NSString *helpLabel5String; // @synthesize helpLabel5String=_helpLabel5String;
@property(retain, nonatomic) NSString *helpLabel4String; // @synthesize helpLabel4String=_helpLabel4String;
@property(retain, nonatomic) NSString *helpLabel3String; // @synthesize helpLabel3String=_helpLabel3String;
@property(retain, nonatomic) NSString *helpLabel2String; // @synthesize helpLabel2String=_helpLabel2String;
@property(retain, nonatomic) NSString *helpLabel1String; // @synthesize helpLabel1String=_helpLabel1String;
- (void).cxx_destruct;
- (Class)viewClass;
@property(readonly, nonatomic) double viewHeight;
@property(readonly, nonatomic) double viewWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
