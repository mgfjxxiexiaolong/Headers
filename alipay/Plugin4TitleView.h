//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NBPluginBase.h"

#import "H5DropdownListViewDelegate-Protocol.h"

@class H5DropdownListView, NSArray, NSString;
@protocol NBNavigationTitleViewProtocol;

@interface Plugin4TitleView : NBPluginBase <H5DropdownListViewDelegate>
{
    id <NBNavigationTitleViewProtocol> _h5titleView;
    H5DropdownListView *_dropdownListView;
    NSArray *_dropdownList;
}

@property(retain, nonatomic) NSArray *dropdownList; // @synthesize dropdownList=_dropdownList;
@property(retain, nonatomic) H5DropdownListView *dropdownListView; // @synthesize dropdownListView=_dropdownListView;
@property(nonatomic) __weak id <NBNavigationTitleViewProtocol> h5titleView; // @synthesize h5titleView=_h5titleView;
- (void).cxx_destruct;
- (void)dropdownListView:(id)arg1 didSelectedWhitespace:(_Bool)arg2;
- (void)dropdownListView:(id)arg1 didSelectedItemAtIndex:(unsigned long long)arg2;
- (void)setDropdownList:(id)arg1 dropdownInit:(int)arg2;
- (void)showDropdownList:(_Bool)arg1;
- (void)onSubTitleClicked;
- (void)onMainTitleClicked;
- (void)resetDropDownList;
- (void)setTitle:(id)arg1 subTitle:(id)arg2 dropdownList:(id)arg3 dropdownInit:(int)arg4;
- (void)setTitle:(id)arg1 context:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (int)priority;
- (id)currentViewController;
- (id)createNavigationTitleView:(struct CGRect)arg1;
- (void)handleEvent:(id)arg1;
- (void)addJSApis;
- (void)pluginDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
